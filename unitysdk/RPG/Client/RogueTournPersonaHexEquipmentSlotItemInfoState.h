#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSlotItemInfoState_TypeDefinitionIndex = 68083;

	enum class RogueTournPersonaHexEquipmentSlotItemInfoState : ::System::Int32
	{
		Invalid = 0,
		Locked = 1,
		Equippable = 2,
		Equipped = 3,
	};
}
