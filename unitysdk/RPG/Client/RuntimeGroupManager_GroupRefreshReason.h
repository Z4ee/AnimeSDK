#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_GroupRefreshReason_TypeDefinitionIndex = 59306;

	enum class RuntimeGroupManager_GroupRefreshReason : ::System::Int32
	{
		Full = 0,
		VisionRangeChange = 1,
		RegionChange = 2,
		CustomRule = 3,
		GMForceLoadState = 4,
		SpaceConflictSim = 5,
		NpcConflictSim = 6,
	};
}
