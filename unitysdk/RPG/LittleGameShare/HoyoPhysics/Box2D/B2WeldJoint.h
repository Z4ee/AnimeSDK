#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WeldJoint_TypeDefinitionIndex = 35259;

	struct alignas(4) B2WeldJoint
	{
		::System::Single linearHertz; // 0x10
		::System::Single linearDampingRatio; // 0x14
		::System::Single angularHertz; // 0x18
		::System::Single angularDampingRatio; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness linearSoftness; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness angularSoftness; // 0x2C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 linearImpulse; // 0x38
		::System::Single angularImpulse; // 0x40
		::System::Int32 indexA; // 0x44
		::System::Int32 indexB; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameA; // 0x4C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform frameB; // 0x5C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 deltaCenter; // 0x6C
		::System::Single axialMass; // 0x74
	};
}
