#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_Enumerator_TypeDefinitionIndex = 1530;

	template <typename TKey, typename TValue>
	struct Dictionary_2_Enumerator
	{
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary; // 0x0
		::System::Int32 version; // 0x0
		::System::Int32 index; // 0x0
		::System::Collections::Generic::KeyValuePair_2<TKey, TValue> current; // 0x0
		::System::Int32 getEnumeratorRetType; // 0x0
	};
}
