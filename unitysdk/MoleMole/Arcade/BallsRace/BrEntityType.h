#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int BrEntityType_TypeDefinitionIndex = 92641;

	enum class BrEntityType : ::System::Int32
	{
		Accelerate = 6,
		Tile = 3,
		Arrow = 54,
		WelcomeGuy = 56,
		World = 1,
		FakePlayer = 52,
		Pillar = 51,
		None = 0,
		FakeGeneral = 55,
		TimePoint = 5,
		BestScore = 8,
		StartLine = 53,
		Decelerate = 7,
		Spike = 4,
		Player = 2,
	};
}
