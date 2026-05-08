#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int BrEntityType_TypeDefinitionIndex = 83007;

	enum class BrEntityType : ::System::Int32
	{
		FakeGeneral = 55,
		BestScore = 8,
		WelcomeGuy = 56,
		Accelerate = 6,
		Player = 2,
		Decelerate = 7,
		Pillar = 51,
		Arrow = 54,
		World = 1,
		Spike = 4,
		StartLine = 53,
		None = 0,
		Tile = 3,
		FakePlayer = 52,
		TimePoint = 5,
	};
}
