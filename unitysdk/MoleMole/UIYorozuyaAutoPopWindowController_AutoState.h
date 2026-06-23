#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAutoPopWindowController_AutoState_TypeDefinitionIndex = 62785;

	enum class UIYorozuyaAutoPopWindowController_AutoState : ::System::Int32
	{
		Progress = 4,
		CannotStart = 1,
		Complete = 5,
		GotAllReward = 2,
		Lock = 0,
		CanStart = 3,
	};
}
