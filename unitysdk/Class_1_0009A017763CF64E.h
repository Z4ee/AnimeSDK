#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_ValueCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_0009A017763CF64E_TypeDefinitionIndex = 58500;

template <typename T>
class Class_1_0009A017763CF64E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, T>* Field_1_3; // 0x0
	::System::Collections::Generic::List_1<T>* Field_1_2; // 0x0
	::System::Func_1<T>* Field_1_1; // 0x0
	::System::Action_1<T>* Field_1_0; // 0x0
	::System::Action_1<T>* Field_1_7; // 0x0
	::System::Action_1<T>* Field_1_6; // 0x0
	::System::Boolean Field_1_5; // 0x0
	::System::Int32 Field_1_4; // 0x0
};
