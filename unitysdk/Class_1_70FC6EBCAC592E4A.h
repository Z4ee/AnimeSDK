#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8076EFBD42D482C3.h"
#include "unitysdk/Struct_2_36CCDF472463E56A.h"
#include "unitysdk/Struct_2_B8B29CC2B62B5A2A.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_211;
class Class_0_16E4307DCC419505_324;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC41950C_18;

inline static constexpr unsigned int Class_1_70FC6EBCAC592E4A_TypeDefinitionIndex = 45212;

template <typename PromisedT>
class Class_1_70FC6EBCAC592E4A : public ::System::Object
{
public:
	::System::Exception* Field_1_2; // 0x0
	PromisedT Field_1_1; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_36CCDF472463E56A>* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_B8B29CC2B62B5A2A>* Field_1_7; // 0x0
	::System::Collections::Generic::List_1<::System::Action_1<PromisedT>*>* Field_1_6; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_324*>* Field_1_5; // 0x0
	::System::Int32 Field_1_4; // 0x0
	::System::String* Field_1_11; // 0x0
	::Enum_3_8076EFBD42D482C3 Field_1_10; // 0x0
};
