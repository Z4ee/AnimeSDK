#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAutoPopWindowController_AutoState_TypeDefinitionIndex = 56946;

	enum class UIYorozuyaAutoPopWindowController_AutoState : ::System::Int32
	{
		Progress = 4,
		Lock = 0,
		Complete = 5,
		GotAllReward = 2,
		CannotStart = 1,
		CanStart = 3,
	};
}
