#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TacticsPointConditionType_TypeDefinitionIndex = 10915;

	enum class TacticsPointConditionType : ::System::Int32
	{
		TurnStart = 0,
		AttackDamageGreaterEqual = 1,
		DefendDamageLessEqual = 2,
		Counter = 3,
		AddModiffier = 4,
		Revive = 5,
	};
}
