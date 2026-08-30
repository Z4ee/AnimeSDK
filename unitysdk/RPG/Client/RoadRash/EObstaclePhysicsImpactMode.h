#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int EObstaclePhysicsImpactMode_TypeDefinitionIndex = 75450;

	enum class EObstaclePhysicsImpactMode : ::System::Int32
	{
		None = 0,
		FixedDirection = 1,
		RelativeOpposite = 2,
	};
}
