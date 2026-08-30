#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashGameHitSource_TypeDefinitionIndex = 80350;

	enum class RoadRashGameHitSource : ::System::Int32
	{
		None = 0,
		Projectile = 1,
		Slam = 2,
		Ultimate = 3,
	};
}
