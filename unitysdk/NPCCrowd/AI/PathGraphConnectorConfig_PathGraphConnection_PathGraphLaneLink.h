#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConnectorConfig_PathGraphConnection_PathGraphLaneLink_TypeDefinitionIndex = 74187;

	struct alignas(4) PathGraphConnectorConfig_PathGraphConnection_PathGraphLaneLink
	{
		::System::Int32 startLaneIndex; // 0x10
		::System::Int32 endLaneIndex; // 0x14
	};
}
