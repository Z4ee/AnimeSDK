#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureCharacterSelfIdleShowReason_TypeDefinitionIndex = 57018;

	enum class EAdventureCharacterSelfIdleShowReason : ::System::Int32
	{
		Default = 0,
		Task = 1,
		PhotoGraph = 2,
		PetDiy = 3,
		PetParty = 4,
	};
}
