#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiCyclicQueue_1_ItemFlag_TypeDefinitionIndex = 8228;

	template <typename TItem>
	struct MultiCyclicQueue_1_ItemFlag
	{
		::System::Int32 Group; // 0x0
		::System::Int32 NextIndex; // 0x0
		::System::Int32 PrevIndex; // 0x0
	};
}
