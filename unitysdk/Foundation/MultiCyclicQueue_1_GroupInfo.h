#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiCyclicQueue_1_GroupInfo_TypeDefinitionIndex = 8265;

	template <typename TItem>
	struct MultiCyclicQueue_1_GroupInfo
	{
		::System::Int32 Entrance; // 0x0
		::System::Int32 ItemCount; // 0x0
	};
}
