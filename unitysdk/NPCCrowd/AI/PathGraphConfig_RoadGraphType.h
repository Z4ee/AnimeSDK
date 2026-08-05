#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfig_RoadGraphType_TypeDefinitionIndex = 60395;

	enum class PathGraphConfig_RoadGraphType : ::System::Int32
	{
		Skyway = 2,
		Others = 3,
		Sidewalk = 0,
		Highway = 1,
	};
}
