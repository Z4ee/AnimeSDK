#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIBattleState_TypeDefinitionIndex = 51964;

	enum class AIBattleState : ::System::Int32
	{
		BornState = 1,
		None = 0,
		DieState = 3,
		BattleState = 2,
	};
}
