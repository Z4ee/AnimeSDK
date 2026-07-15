#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackController_AlleyJoyStickState_TypeDefinitionIndex = 70680;

	enum class AlleyPackController_AlleyJoyStickState : ::System::Int32
	{
		None = 0,
		UINavigation = 1,
		GoodOperation = 2,
		CursorSelection = 3,
	};
}
