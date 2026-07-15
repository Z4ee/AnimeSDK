#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
template <typename T1, typename T2> class Class_1_7A66407CD5C66F37;

inline static constexpr unsigned int Class_1_7A66407CD5C66F37_Struct_2_78F94598E9F41360_TypeDefinitionIndex = 41403;

template <typename TKey, typename TValue>
struct Class_1_7A66407CD5C66F37_Struct_2_78F94598E9F41360
{
	::Class_1_7A66407CD5C66F37<TKey, TValue>* Field_2_0; // 0x0
	::System::Collections::Generic::LinkedListNode_1<::System::WeakReference_1<TKey>*>* Field_2_1; // 0x0
	TKey Field_2_2; // 0x0
	TValue Field_2_3; // 0x0
	::System::Boolean Field_2_4; // 0x0
};
