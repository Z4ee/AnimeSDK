#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

inline static constexpr unsigned int Class_1_27DC9A846C2D861E_TypeDefinitionIndex = 29042;

template <typename T>
class Class_1_27DC9A846C2D861E : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::System::Single, ::System::Collections::Generic::Queue_1<T>*>* Field_1_0; // 0x0
	::System::Int32 Field_1_1; // 0x0
};
