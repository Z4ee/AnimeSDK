#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WheelJointDef_TypeDefinitionIndex = 35263;

	struct alignas(8) B2WheelJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Boolean enableSpring; // 0x80
		::System::Single hertz; // 0x84
		::System::Single dampingRatio; // 0x88
		::System::Boolean enableLimit; // 0x8C
		::System::Single lowerTranslation; // 0x90
		::System::Single upperTranslation; // 0x94
		::System::Boolean enableMotor; // 0x98
		::System::Single maxMotorTorque; // 0x9C
		::System::Single motorSpeed; // 0xA0
		::System::Int32 internalValue; // 0xA4
	};
}
