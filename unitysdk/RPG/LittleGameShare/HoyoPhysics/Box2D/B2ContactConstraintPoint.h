#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactConstraintPoint_TypeDefinitionIndex = 35072;

	struct alignas(4) B2ContactConstraintPoint
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 anchorA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 anchorB; // 0x18
		::System::Single baseSeparation; // 0x20
		::System::Single relativeVelocity; // 0x24
		::System::Single normalImpulse; // 0x28
		::System::Single tangentImpulse; // 0x2C
		::System::Single totalNormalImpulse; // 0x30
		::System::Single normalMass; // 0x34
		::System::Single tangentMass; // 0x38
	};
}
