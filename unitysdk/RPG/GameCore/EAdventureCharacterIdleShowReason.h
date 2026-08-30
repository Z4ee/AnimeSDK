#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureCharacterIdleShowReason_TypeDefinitionIndex = 57184;

	enum class EAdventureCharacterIdleShowReason : ::System::Int32
	{
		Default = 0,
		Puzzle = 1,
		TrainParty = 2,
		TrainBuild = 3,
	};
}
