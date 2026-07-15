#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2PrismaticJoint_TypeDefinitionIndex = 35180;

	struct alignas(4) B2PrismaticJoint
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 impulse; // 0x10
		::System::Single springImpulse; // 0x18
		::System::Single motorImpulse; // 0x1C
		::System::Single lowerImpulse; // 0x20
		::System::Single upperImpulse; // 0x24
		::System::Single hertz; // 0x28
		::System::Single dampingRatio; // 0x2C
		::System::Single targetTranslation; // 0x30
		::System::Single maxMotorForce; // 0x34
		::System::Single motorSpeed; // 0x38
		::System::Single lowerTranslation; // 0x3C
		::System::Single upperTranslation; // 0x40
		::System::Int32 indexA; // 0x44
		::System::Int32 indexB; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameA; // 0x4C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameB; // 0x5C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 deltaCenter; // 0x6C
		::System::Single axialMass; // 0x74
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness springSoftness; // 0x78
		::System::Boolean enableSpring; // 0x84
		::System::Boolean enableLimit; // 0x85
		::System::Boolean enableMotor; // 0x86
	};
}
