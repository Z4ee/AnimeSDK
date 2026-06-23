#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController_EOnUIOpenSelectType_TypeDefinitionIndex = 78504;

	enum class UIRABLevelPageController_EOnUIOpenSelectType : ::System::Int32
	{
		SelectTowerFloorAndFallbackToHighestUnlockLevel = 3,
		SelectTowerFloor = 2,
		NoSelect = 0,
		UnlockedHighestLevel = 1,
	};
}
