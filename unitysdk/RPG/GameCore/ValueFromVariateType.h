#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueFromVariateType_TypeDefinitionIndex = 17490;

	enum class ValueFromVariateType : ::System::Int32
	{
		ChallengeTurnLeft = 0,
		SkillBpCost = 1,
		ParamValue = 2,
		MaxMonsterPhase = 3,
		ParamValue2 = 4,
		CurWaveIndex = 5,
		TargetCharacterID = 6,
		TargetEnhancedID = 7,
		CurrentActionSkillIndex = 8,
		ParamValue3 = 9,
		RogueMagic_BattleRoundLeft = 10,
		RogueMagic_GlobalRoundLeft = 11,
		TargetRarity = 12,
	};
}
