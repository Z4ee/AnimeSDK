#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTechTreeEffectType_TypeDefinitionIndex = 11316;

	enum class IdleLiveTechTreeEffectType : ::System::Int32
	{
		None = 0,
		AutoChest = 1,
		Property = 2,
		AvatarLevelLimit = 3,
		UnlockTeamSlot = 4,
		UnlockEquipSlot = 5,
		UnlockAdvTechTree = 6,
		AddAbility = 7,
	};
}
