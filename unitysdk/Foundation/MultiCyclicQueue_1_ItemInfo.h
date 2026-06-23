#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiCyclicQueue_1_ItemFlag.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiCyclicQueue_1_ItemInfo_TypeDefinitionIndex = 8267;

	template <typename TItem>
	struct MultiCyclicQueue_1_ItemInfo
	{
		::Foundation::MultiCyclicQueue_1_ItemFlag<TItem> Flag; // 0x0
		TItem Value; // 0x0
	};
}
