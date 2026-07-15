#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TOIState_TypeDefinitionIndex = 35241;

	enum class B2TOIState : ::System::Int32
	{
		b2_toiStateUnknown = 0,
		b2_toiStateFailed = 1,
		b2_toiStateOverlapped = 2,
		b2_toiStateHit = 3,
		b2_toiStateSeparated = 4,
	};
}
