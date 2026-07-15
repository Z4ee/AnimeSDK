#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MotorJointDef_TypeDefinitionIndex = 35165;

	struct alignas(8) B2MotorJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Single maxForce; // 0x80
		::System::Single maxTorque; // 0x84
		::System::Single correctionFactor; // 0x88
		::System::Int32 internalValue; // 0x8C
	};
}
