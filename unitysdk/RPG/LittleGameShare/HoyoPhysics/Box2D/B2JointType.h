#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointType_TypeDefinitionIndex = 35153;

	enum class B2JointType : ::System::Int32
	{
		b2_distanceJoint = 0,
		b2_filterJoint = 1,
		b2_motorJoint = 2,
		b2_mouseJoint = 3,
		b2_prismaticJoint = 4,
		b2_revoluteJoint = 5,
		b2_weldJoint = 6,
		b2_wheelJoint = 7,
	};
}
