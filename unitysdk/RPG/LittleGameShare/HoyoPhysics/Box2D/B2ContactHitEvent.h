#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactHitEvent_TypeDefinitionIndex = 35079;

	struct alignas(8) B2ContactHitEvent
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId shapeIdA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId shapeIdB; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 point; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x48
		::System::Single approachSpeed; // 0x50
	};
}
