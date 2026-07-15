#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePhaseFinishType_TypeDefinitionIndex = 56659;

	enum class BattlePhaseFinishType : ::System::Int32
	{
		ModifierPhase1PerformFinish = 0,
		SkillExecutingFinish = 1,
		SingleInsertAbilityFinish = 2,
		BattleEnterFinish = 3,
		Task = 4,
	};
}
