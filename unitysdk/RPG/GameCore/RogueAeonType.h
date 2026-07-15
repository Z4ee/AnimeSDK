#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonType_TypeDefinitionIndex = 10234;

	enum class RogueAeonType : ::System::Int32
	{
		None = 0,
		Preservation = 1,
		Remembrance = 2,
		Nihility = 3,
		Abundance = 4,
		TheHunt = 5,
		Destruction = 6,
		Elation = 7,
		Propagation = 8,
		Erudition = 9,
	};
}
