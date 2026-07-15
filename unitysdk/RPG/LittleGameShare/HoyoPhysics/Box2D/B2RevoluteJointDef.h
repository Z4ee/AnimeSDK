#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2RevoluteJointDef_TypeDefinitionIndex = 35191;

	struct alignas(8) B2RevoluteJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Single targetAngle; // 0x80
		::System::Boolean enableSpring; // 0x84
		::System::Single hertz; // 0x88
		::System::Single dampingRatio; // 0x8C
		::System::Boolean enableLimit; // 0x90
		::System::Single lowerAngle; // 0x94
		::System::Single upperAngle; // 0x98
		::System::Boolean enableMotor; // 0x9C
		::System::Single maxMotorTorque; // 0xA0
		::System::Single motorSpeed; // 0xA4
		::System::Int32 internalValue; // 0xA8
	};
}
