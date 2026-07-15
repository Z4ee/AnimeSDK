#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
template <typename T1, typename T2> class Class_1_534AF681CC2BD5FD_1;

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_1_Enumerator_TypeDefinitionIndex = 6707;

template <typename TKey, typename TValue>
struct Class_1_534AF681CC2BD5FD_1_Enumerator
{
	::Class_1_534AF681CC2BD5FD_1<TKey, TValue>* dictionary; // 0x0
	::System::Int32 version; // 0x0
	::System::Int32 index; // 0x0
	::System::Collections::Generic::KeyValuePair_2<TKey, TValue> current; // 0x0
	::System::Int32 getEnumeratorRetType; // 0x0
	// static const ::System::Int32 DictEntry = 0x1; // 0x0
	// static const ::System::Int32 KeyValuePair = 0x2; // 0x0
};
