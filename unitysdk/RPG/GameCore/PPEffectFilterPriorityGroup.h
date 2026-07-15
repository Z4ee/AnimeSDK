#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PPEffectFilterPriorityGroup_TypeDefinitionIndex = 23625;

	enum class PPEffectFilterPriorityGroup : ::System::Int32
	{
		MazeGroup = 0,
		PuzzleRegionGroup = 1,
		PlayerGroup = 2,
		MazeGroupHigh = 3,
		PerformanceGroup = 4,
	};
}
