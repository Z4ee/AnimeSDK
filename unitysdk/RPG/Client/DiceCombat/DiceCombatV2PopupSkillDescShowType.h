#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PopupSkillDescShowType_TypeDefinitionIndex = 70727;

	enum class DiceCombatV2PopupSkillDescShowType : ::System::Int32
	{
		Player = 0,
		TeamMate = 1,
		Enemy = 2,
	};
}
