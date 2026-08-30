#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplaySpeedPanelControl_SpeedBarGear_TypeDefinitionIndex = 80571;

	enum class B51RacingGameplaySpeedPanelControl_SpeedBarGear : ::System::Int32
	{
		Normal = 0,
		SpeedUp = 1,
		Ultimate = 2,
	};
}
