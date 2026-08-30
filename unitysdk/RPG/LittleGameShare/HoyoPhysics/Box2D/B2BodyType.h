#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyType_TypeDefinitionIndex = 35913;

	enum class B2BodyType : ::System::Int32
	{
		b2_staticBody = 0,
		b2_kinematicBody = 1,
		b2_dynamicBody = 2,
		b2_bodyTypeCount = 3,
	};
}
