#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Delegate; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

inline static constexpr unsigned int Class_1_8EF29285D2685622_TypeDefinitionIndex = 59068;

template <typename E>
class Class_1_8EF29285D2685622 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<E, ::System::Collections::Generic::List_1<::System::Delegate*>*>* Field_1_1; // 0x0
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<E, ::System::Object*>>* Field_1_0; // 0x0
};
