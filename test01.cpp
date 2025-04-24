# include <iostream>
# include <vector>

std::vector<int> make_date(int start /*引数(argument)*/){
    int a, b;
    std::vector<int> date;
    
    a = start;
    for ( b = 1; b < 20; b++){
      if ((a + b) % 2 == 0){
        date.push_back( a + b );
        std::cout << "a + b = " << (a + b) << std::endl;
      }
    }
    return date;
}

int main(){
    auto a = make_date(-2);
    return 0;
}
