#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAdditivePropertyType_TypeDefinitionIndex = 15476;

	enum class DiceCombatAdditivePropertyType : ::System::Int32
	{
		AtkPoint = 0,
		DefPoint = 1,
		MaxRollCountAsAttacker = 2,
		MaxRollCountAsDefender = 3,
		AtkDiceCount = 4,
		DefDiceCount = 5,
		AtkPointFactor = 6,
		DefPointFactor = 7,
		Count = 8,
	};
}
