#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WheelJoint_TypeDefinitionIndex = 35262;

	struct alignas(4) B2WheelJoint
	{
		::System::Single perpImpulse; // 0x10
		::System::Single motorImpulse; // 0x14
		::System::Single springImpulse; // 0x18
		::System::Single lowerImpulse; // 0x1C
		::System::Single upperImpulse; // 0x20
		::System::Single maxMotorTorque; // 0x24
		::System::Single motorSpeed; // 0x28
		::System::Single lowerTranslation; // 0x2C
		::System::Single upperTranslation; // 0x30
		::System::Single hertz; // 0x34
		::System::Single dampingRatio; // 0x38
		::System::Int32 indexA; // 0x3C
		::System::Int32 indexB; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameA; // 0x44
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameB; // 0x54
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 deltaCenter; // 0x64
		::System::Single perpMass; // 0x6C
		::System::Single motorMass; // 0x70
		::System::Single axialMass; // 0x74
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness springSoftness; // 0x78
		::System::Boolean enableSpring; // 0x84
		::System::Boolean enableMotor; // 0x85
		::System::Boolean enableLimit; // 0x86
	};
}
