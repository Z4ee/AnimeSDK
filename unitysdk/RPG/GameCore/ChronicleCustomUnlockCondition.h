#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleCustomUnlockCondition_TypeDefinitionIndex = 18223;

	enum class ChronicleCustomUnlockCondition : ::System::Int32
	{
		EnterMap = 1,
		LeaveMap = 2,
		MuseumLevel = 3,
		AlleyLevel = 4,
		HeliobusLevel = 5,
		SwordTraining = 6,
		CustomUnlockMission = 7,
	};
}
