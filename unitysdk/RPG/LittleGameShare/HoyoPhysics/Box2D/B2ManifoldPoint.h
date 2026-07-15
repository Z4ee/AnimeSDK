#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ManifoldPoint_TypeDefinitionIndex = 35157;

	struct alignas(4) B2ManifoldPoint
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 point; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 anchorA; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 anchorB; // 0x20
		::System::Single separation; // 0x28
		::System::Single normalImpulse; // 0x2C
		::System::Single tangentImpulse; // 0x30
		::System::Single totalNormalImpulse; // 0x34
		::System::Single normalVelocity; // 0x38
		::System::UInt16 id; // 0x3C
		::System::Boolean persisted; // 0x3E
	};
}
