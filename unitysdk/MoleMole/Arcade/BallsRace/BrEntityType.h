#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int BrEntityType_TypeDefinitionIndex = 87921;

	enum class BrEntityType : ::System::Int32
	{
		Player = 2,
		None = 0,
		Decelerate = 7,
		FakeGeneral = 55,
		Pillar = 51,
		Accelerate = 6,
		TimePoint = 5,
		Tile = 3,
		World = 1,
		Arrow = 54,
		Spike = 4,
		BestScore = 8,
		FakePlayer = 52,
		WelcomeGuy = 56,
		StartLine = 53,
	};
}
