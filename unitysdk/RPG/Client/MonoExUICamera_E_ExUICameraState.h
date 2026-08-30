#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICamera_E_ExUICameraState_TypeDefinitionIndex = 72896;

	enum class MonoExUICamera_E_ExUICameraState : ::System::Int32
	{
		Idle = 0,
		Swipe = 1,
		Damping = 2,
		Recover = 3,
		ZoomRecover = 4,
		ZoomDamping = 5,
		Focus = 6,
	};
}
