#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleTalkData_SideType_TypeDefinitionIndex = 69912;

	enum class DiceCombatV2BattleTalkData_SideType : ::System::Int32
	{
		None = 0,
		OurTeam = 1,
		Opponent = 2,
	};
}
