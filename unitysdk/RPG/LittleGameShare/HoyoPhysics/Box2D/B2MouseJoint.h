#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Mat22.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MouseJoint_TypeDefinitionIndex = 35167;

	struct alignas(4) B2MouseJoint
	{
		::System::Single hertz; // 0x10
		::System::Single dampingRatio; // 0x14
		::System::Single maxForce; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 linearImpulse; // 0x1C
		::System::Single angularImpulse; // 0x24
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness linearSoftness; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness angularSoftness; // 0x34
		::System::Int32 indexA; // 0x40
		::System::Int32 indexB; // 0x44
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameA; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameB; // 0x58
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 deltaCenter; // 0x68
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Mat22 linearMass; // 0x70
		::System::Single angularMass; // 0x80
	};
}
