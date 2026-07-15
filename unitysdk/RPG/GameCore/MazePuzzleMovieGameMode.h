#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleMovieGameMode_TypeDefinitionIndex = 13558;

	enum class MazePuzzleMovieGameMode : ::System::Int32
	{
		OverTake = 0,
		Shooting = 1,
		OverTakeEndless = 2,
		ShootingEndless = 3,
		ShootingBoss = 4,
	};
}
