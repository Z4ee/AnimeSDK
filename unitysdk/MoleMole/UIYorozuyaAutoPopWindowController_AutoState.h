#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAutoPopWindowController_AutoState_TypeDefinitionIndex = 60693;

	enum class UIYorozuyaAutoPopWindowController_AutoState : ::System::Int32
	{
		GotAllReward = 2,
		Lock = 0,
		Complete = 5,
		Progress = 4,
		CanStart = 3,
		CannotStart = 1,
	};
}
