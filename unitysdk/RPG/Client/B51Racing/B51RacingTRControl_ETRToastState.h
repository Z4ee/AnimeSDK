#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingTRControl_ETRToastState_TypeDefinitionIndex = 80578;

	enum class B51RacingTRControl_ETRToastState : ::System::Int32
	{
		None = 0,
		Showing = 1,
		FadingOut = 2,
	};
}
