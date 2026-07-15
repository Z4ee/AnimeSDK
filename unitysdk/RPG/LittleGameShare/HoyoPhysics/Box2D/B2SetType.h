#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SetType_TypeDefinitionIndex = 35212;

	enum class B2SetType : ::System::Int32
	{
		b2_staticSet = 0,
		b2_disabledSet = 1,
		b2_awakeSet = 2,
		b2_firstSleepingSet = 3,
	};
}
