#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatV2ScoreType_TypeDefinitionIndex = 11276;

	enum class ActivityDiceCombatV2ScoreType : ::System::Int32
	{
		None = 0,
		HPDamageRatio = 1,
		Success = 2,
		Turn = 3,
		RemainRevive = 4,
	};
}
