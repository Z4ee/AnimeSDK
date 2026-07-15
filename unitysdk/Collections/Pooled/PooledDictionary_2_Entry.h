#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_Entry_TypeDefinitionIndex = 5084;

	template <typename TKey, typename TValue>
	struct PooledDictionary_2_Entry
	{
		::System::Int32 next; // 0x0
		::System::UInt32 hashCode; // 0x0
		TKey key; // 0x0
		TValue value; // 0x0
	};
}
