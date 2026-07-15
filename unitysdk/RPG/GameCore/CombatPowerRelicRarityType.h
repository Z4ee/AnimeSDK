#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CombatPowerRelicRarityType_TypeDefinitionIndex = 10125;

	enum class CombatPowerRelicRarityType : ::System::Int32
	{
		CombatPowerRelicRarity1 = 1,
		CombatPowerRelicRarity2 = 2,
		CombatPowerRelicRarity3 = 3,
		CombatPowerRelicRarity4 = 4,
		CombatPowerRelicRarity5 = 5,
	};
}
