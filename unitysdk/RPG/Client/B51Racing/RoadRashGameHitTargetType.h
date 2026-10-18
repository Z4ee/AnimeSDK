#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashGameHitTargetType_TypeDefinitionIndex = 81678;

	enum class RoadRashGameHitTargetType : ::System::Int32
	{
		None = 0,
		Car = 1,
		Obstacle = 2,
	};
}
