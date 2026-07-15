#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictSoundUsage_TypeDefinitionIndex = 16497;

	enum class DistrictSoundUsage : ::System::Int32
	{
		Default = 0,
		Room = 1,
		RoomPortal = 2,
		Transition = 3,
		NPCCrowd = 4,
		BGMEmotion = 5,
	};
}
