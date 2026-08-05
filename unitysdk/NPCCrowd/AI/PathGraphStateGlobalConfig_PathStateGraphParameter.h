#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphStateGlobalConfig_PathStateGraphParameter_TypeDefinitionIndex = 64522;

	struct alignas(4) PathGraphStateGlobalConfig_PathStateGraphParameter
	{
		::System::Int32 maxSpawnCount; // 0x10
	};
}
