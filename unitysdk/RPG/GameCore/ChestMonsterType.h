#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChestMonsterType_TypeDefinitionIndex = 13859;

	enum class ChestMonsterType : ::System::Int32
	{
		None = 0,
		Chest = 1,
		Junk = 2,
		Mascot = 3,
		Limao = 4,
	};
}
