#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStackingFlag_TypeDefinitionIndex = 23812;

	enum class ModifierStackingFlag : ::System::Int32
	{
		Default = 0,
		CharacterSkill = 1,
		Equipment = 2,
		Relic = 3,
		Level = 4,
		Rogue = 5,
		Any = 100,
	};
}
