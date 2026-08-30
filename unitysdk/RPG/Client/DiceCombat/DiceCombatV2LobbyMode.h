#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2LobbyMode_TypeDefinitionIndex = 75725;

	enum class DiceCombatV2LobbyMode : ::System::Int32
	{
		FreeMatch = 1,
		Friend = 2,
	};
}
