#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactFlags_TypeDefinitionIndex = 36626;

	enum class B2ContactFlags : ::System::Int32
	{
		b2_contactTouchingFlag = 1,
		b2_contactHitEventFlag = 2,
		b2_contactEnableContactEvents = 4,
	};
}
