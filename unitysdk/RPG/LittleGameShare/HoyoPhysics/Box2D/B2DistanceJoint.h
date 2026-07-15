#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2DistanceJoint_TypeDefinitionIndex = 35110;

	struct alignas(4) B2DistanceJoint
	{
		::System::Single length; // 0x10
		::System::Single hertz; // 0x14
		::System::Single dampingRatio; // 0x18
		::System::Single minLength; // 0x1C
		::System::Single maxLength; // 0x20
		::System::Single maxMotorForce; // 0x24
		::System::Single motorSpeed; // 0x28
		::System::Single impulse; // 0x2C
		::System::Single lowerImpulse; // 0x30
		::System::Single upperImpulse; // 0x34
		::System::Single motorImpulse; // 0x38
		::System::Int32 indexA; // 0x3C
		::System::Int32 indexB; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 anchorA; // 0x44
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 anchorB; // 0x4C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 deltaCenter; // 0x54
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness distanceSoftness; // 0x5C
		::System::Single axialMass; // 0x68
		::System::Boolean enableSpring; // 0x6C
		::System::Boolean enableLimit; // 0x6D
		::System::Boolean enableMotor; // 0x6E
	};
}
