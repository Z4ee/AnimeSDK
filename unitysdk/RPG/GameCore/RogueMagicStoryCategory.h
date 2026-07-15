#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicStoryCategory_TypeDefinitionIndex = 14294;

	enum class RogueMagicStoryCategory : ::System::Int32
	{
		None = 0,
		Begin = 1,
		MagicWar = 2,
		MagicFaction = 3,
		Final = 4,
	};
}
