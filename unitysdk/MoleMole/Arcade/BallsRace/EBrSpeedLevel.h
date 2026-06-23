#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int EBrSpeedLevel_TypeDefinitionIndex = 88410;

	enum class EBrSpeedLevel : ::System::Int32
	{
		Level2 = 2,
		Idle = 4,
		None = -1,
		LevelMax = 3,
		Level1 = 1,
		Level0 = 0,
	};
}
