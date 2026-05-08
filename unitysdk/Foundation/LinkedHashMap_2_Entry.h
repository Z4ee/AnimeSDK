#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int LinkedHashMap_2_Entry_TypeDefinitionIndex = 8236;

	template <typename TKey, typename TValue>
	struct LinkedHashMap_2_Entry
	{
		TKey Key; // 0x0
		TValue Value; // 0x0
	};
}
