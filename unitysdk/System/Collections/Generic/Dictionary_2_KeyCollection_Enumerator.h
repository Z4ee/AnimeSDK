#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_KeyCollection_Enumerator_TypeDefinitionIndex = 1532;

	template <typename TKey, typename TValue>
	struct Dictionary_2_KeyCollection_Enumerator
	{
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary; // 0x0
		::System::Int32 index; // 0x0
		::System::Int32 version; // 0x0
		TKey currentKey; // 0x0
	};
}
