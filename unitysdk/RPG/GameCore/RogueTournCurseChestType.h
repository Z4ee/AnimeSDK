#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCurseChestType_TypeDefinitionIndex = 14460;

	enum class RogueTournCurseChestType : ::System::Int32
	{
		None = 0,
		Treasure = 1,
		Fountain = 2,
	};
}
