#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEvaluationConditionType_TypeDefinitionIndex = 15214;

	enum class ChimeraEvaluationConditionType : ::System::Int32
	{
		None = 0,
		MaxDamage = 1,
		MinDamage = 2,
		DamageGreater = 3,
		DamageSmaller = 4,
		TeammateBuffNumGreater = 5,
		IsNewJoinChimera = 6,
		GetEvaluationGreater = 7,
		ReviveTimesGreater = 8,
		MaxKill = 9,
		KillGreater = 10,
		SendEmoGreater = 11,
		CauseDamageIncreaseNum = 12,
		DamageEqual = 13,
		MaxDamageInNewChimera = 14,
	};
}
