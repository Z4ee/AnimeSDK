#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfig_RoadGraphType_TypeDefinitionIndex = 46479;

	enum class PathGraphConfig_RoadGraphType : ::System::Int32
	{
		Skyway = 2,
		Highway = 1,
		Others = 3,
		Sidewalk = 0,
	};
}
