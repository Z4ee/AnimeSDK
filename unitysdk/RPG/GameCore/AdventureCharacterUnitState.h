#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterUnitState_TypeDefinitionIndex = 16800;

	enum class AdventureCharacterUnitState : ::System::Int32
	{
		None = 0,
		Taunt = 1,
		HangUp = 2,
		Fear = 3,
		Enchanted = 4,
		Debuff = 5,
		Confine = 6,
		NpcChase = 7,
	};
}
