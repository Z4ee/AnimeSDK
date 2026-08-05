#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController_EOnUIOpenSelectType_TypeDefinitionIndex = 82374;

	enum class UIRABLevelPageController_EOnUIOpenSelectType : ::System::Int32
	{
		UnlockedHighestLevel = 1,
		SelectTowerFloorAndFallbackToHighestUnlockLevel = 3,
		SelectTowerFloor = 2,
		NoSelect = 0,
	};
}
