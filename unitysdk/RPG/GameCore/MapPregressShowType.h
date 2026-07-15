#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapPregressShowType_TypeDefinitionIndex = 10155;

	enum class MapPregressShowType : ::System::Int32
	{
		Normal = 1,
		Challenge = 2,
		Puzzle = 3,
		Raid = 4,
		ChestMonster = 5,
		AetherSpirit = 6,
		AetherTrainer = 7,
		JunkMonster = 8,
		Mascot = 9,
		Limao = 10,
	};
}
