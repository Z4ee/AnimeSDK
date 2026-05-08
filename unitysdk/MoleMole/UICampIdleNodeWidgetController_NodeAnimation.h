#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleNodeWidgetController_NodeAnimation_TypeDefinitionIndex = 78265;

	enum class UICampIdleNodeWidgetController_NodeAnimation : ::System::Int32
	{
		DoneAndLineUnlock = 1,
		LockedToDone = 3,
		None = 0,
		LockedToUnlocked = 2,
	};
}
