#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int SlotType_TypeDefinitionIndex = 74214;

	enum class SlotType : ::System::Int32
	{
		Normal = 0,
		Badge = 1,
		MissionPhoto = 2,
		AvatarPhoto = 3,
		LightConePhoto = 4,
	};
}
