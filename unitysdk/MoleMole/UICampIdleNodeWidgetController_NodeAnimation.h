#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleNodeWidgetController_NodeAnimation_TypeDefinitionIndex = 78803;

	enum class UICampIdleNodeWidgetController_NodeAnimation : ::System::Int32
	{
		DoneAndLineUnlock = 1,
		None = 0,
		LockedToDone = 3,
		LockedToUnlocked = 2,
	};
}
