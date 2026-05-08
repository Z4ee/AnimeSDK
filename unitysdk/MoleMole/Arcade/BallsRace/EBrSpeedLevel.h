#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int EBrSpeedLevel_TypeDefinitionIndex = 83113;

	enum class EBrSpeedLevel : ::System::Int32
	{
		Level1 = 1,
		None = -1,
		LevelMax = 3,
		Idle = 4,
		Level2 = 2,
		Level0 = 0,
	};
}
