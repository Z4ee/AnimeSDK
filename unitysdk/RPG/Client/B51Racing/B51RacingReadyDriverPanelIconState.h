#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingReadyDriverPanelIconState_TypeDefinitionIndex = 80718;

	enum class B51RacingReadyDriverPanelIconState : ::System::Int32
	{
		View = 0,
		Lock = 1,
		Switch = 2,
	};
}
