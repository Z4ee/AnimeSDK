#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterVOType_TypeDefinitionIndex = 15727;

	enum class AdventureCharacterVOType : ::System::Int32
	{
		Unknow = 0,
		BattleVictory = 1,
		OpenChest = 2,
		SolvePuzzle = 3,
		LookAtThreat = 4,
		BackTown = 5,
		PromotionUp = 6,
		SkillTreeUnlock = 7,
		EidolonActive = 8,
		MaxLevel = 9,
		JoinTeamWithSpecialTeamate = 10,
		JoinTeamWithSpecialTeamateHero = 11,
		OpenPreciousChest = 12,
	};
}
