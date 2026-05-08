#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfig_RoadGraphType_TypeDefinitionIndex = 61025;

	enum class PathGraphConfig_RoadGraphType : ::System::Int32
	{
		Others = 2,
		Sidewalk = 0,
		Highway = 1,
	};
}
