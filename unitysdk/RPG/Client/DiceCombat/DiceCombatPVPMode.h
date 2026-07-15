#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatPVPMode_TypeDefinitionIndex = 72229;

	enum class DiceCombatPVPMode : ::System::Int32
	{
		FreeMatch = 1,
		Friend = 2,
	};
}
