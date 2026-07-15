#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityTag_TypeDefinitionIndex = 16732;

	enum class EntityTag : ::System::Int32
	{
		Default = 0,
		Trotter = 1,
		TrotterLover = 2,
		ResistInstantKill = 3,
		FakeChest = 4,
		TriggerBattleFirstWave = 5,
	};
}
