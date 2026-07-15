#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTriggerSettleType_TypeDefinitionIndex = 23765;

	enum class GridFightTriggerSettleType : ::System::Int32
	{
		GainExp = 0,
		GoldInterst = 1,
		RefreshShop = 2,
		NextWave = 3,
		RandomBonus = 4,
		SavePrefData = 5,
		GainGold = 6,
		GlobalHP = 7,
		StageBonus = 8,
		TraitBonus = 9,
	};
}
