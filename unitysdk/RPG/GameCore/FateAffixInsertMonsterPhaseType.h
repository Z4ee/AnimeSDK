#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateAffixInsertMonsterPhaseType_TypeDefinitionIndex = 11127;

	enum class FateAffixInsertMonsterPhaseType : ::System::Int32
	{
		Unknown = 0,
		Early = 1,
		Middle = 2,
		Late = 3,
		NewBattleWave = 4,
	};
}
