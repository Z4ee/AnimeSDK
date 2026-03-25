#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentMessage_TypeDefinitionIndex = 59756;

	enum class RogueTournPersonaHexEquipmentMessage : ::System::Int32
	{
		None = 0,
		OnSelectedHexChanged = 1,
		OnEquippedHexChanged = 2,
	};
}
