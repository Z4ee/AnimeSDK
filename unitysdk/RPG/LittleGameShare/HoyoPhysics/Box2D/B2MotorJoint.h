#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Mat22.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MotorJoint_TypeDefinitionIndex = 35164;

	struct alignas(4) B2MotorJoint
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 linearOffset; // 0x10
		::System::Single angularOffset; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 linearImpulse; // 0x1C
		::System::Single angularImpulse; // 0x24
		::System::Single maxForce; // 0x28
		::System::Single maxTorque; // 0x2C
		::System::Single correctionFactor; // 0x30
		::System::Int32 indexA; // 0x34
		::System::Int32 indexB; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameA; // 0x3C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameB; // 0x4C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 deltaCenter; // 0x5C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22 linearMass; // 0x64
		::System::Single angularMass; // 0x74
	};
}
