#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameMode_TypeDefinitionIndex = 38630;

	enum class MovieGameMode : ::System::Int32
	{
		OverTake = 0,
		Shooting = 1,
		OverTakeEndless = 2,
		ShootingEndless = 3,
		ShootingBoss = 4,
	};
}
