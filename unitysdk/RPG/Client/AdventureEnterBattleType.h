#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureEnterBattleType_TypeDefinitionIndex = 57454;

	enum class AdventureEnterBattleType : ::System::Int32
	{
		Empty = 0,
		GM = 1,
		GMClient = 2,
		Event = 3,
		ByEntity = 4,
		Cocoon = 5,
		CharacterTrial = 6,
		CommonActivityBattle = 7,
		CommonActivityBattleEmptyTransition = 8,
		Reply = 9,
		RogueEvent = 10,
		AetherChallenge = 11,
		AetherDivideByEntity = 12,
		ManuallyScreenCrack = 13,
	};
}
