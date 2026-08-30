#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarToastMessage_MessageType_TypeDefinitionIndex = 75735;

	enum class DiceCombatV2SideBarToastMessage_MessageType : ::System::Int32
	{
		TeammateTacticsUsage = 0,
		SelfTacticUsage = 1,
		TeammateTacticsPurchase = 2,
		TeammateMarkDice = 3,
	};
}
