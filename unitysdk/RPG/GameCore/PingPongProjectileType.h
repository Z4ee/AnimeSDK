#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongProjectileType_TypeDefinitionIndex = 16307;

	enum class PingPongProjectileType : ::System::Int32
	{
		RacketFire = 0,
		RacketIce = 1,
		RacketLinghtning = 2,
		EnemyNormal = 3,
	};
}
