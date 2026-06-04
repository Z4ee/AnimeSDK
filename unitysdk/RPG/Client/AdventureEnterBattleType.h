#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureEnterBattleType_TypeDefinitionIndex = 56215;

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
		Reply = 8,
		RogueEvent = 9,
		AetherChallenge = 10,
		AetherDivideByEntity = 11,
		ManuallyScreenCrack = 12,
	};
}
