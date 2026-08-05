#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointConfig_NodeInfo_TypeDefinitionIndex = 51391;

	struct alignas(4) PathGraphCrossingPointConfig_NodeInfo
	{
		::System::Int32 nodeID; // 0x10
		::System::Boolean forward; // 0x14
	};
}
