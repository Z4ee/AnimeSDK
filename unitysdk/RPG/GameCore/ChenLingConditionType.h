#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingConditionType_TypeDefinitionIndex = 10638;

	enum class ChenLingConditionType : ::System::Int32
	{
		None = 0,
		HpLessThan = 1,
		UsingDeck = 2,
		AdjacentToBuildingWithLevel = 3,
		HasEnchantWithLevel = 4,
		ConsumeCoin = 5,
		SoldierAttrValue = 6,
		SoldierMoveTimes = 7,
		SoldierLevel = 8,
		SoldierAdjacentBuildingMaxLevel = 9,
		SoldierEnchantMaxLevel = 10,
		SoldierMaxLevel = 11,
	};
}
