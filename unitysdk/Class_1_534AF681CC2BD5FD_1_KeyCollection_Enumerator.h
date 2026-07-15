#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
template <typename T1, typename T2> class Class_1_534AF681CC2BD5FD_1;

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_1_KeyCollection_Enumerator_TypeDefinitionIndex = 6709;

template <typename TKey, typename TValue>
struct Class_1_534AF681CC2BD5FD_1_KeyCollection_Enumerator
{
	::Class_1_534AF681CC2BD5FD_1<TKey, TValue>* dictionary; // 0x0
	::System::Int32 index; // 0x0
	::System::Int32 version; // 0x0
	TKey currentKey; // 0x0
};
