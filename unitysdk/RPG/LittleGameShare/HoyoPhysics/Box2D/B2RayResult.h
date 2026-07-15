#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2RayResult_TypeDefinitionIndex = 35188;

	struct alignas(8) B2RayResult
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId shapeId; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 point; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x30
		::System::Single fraction; // 0x38
		::System::Int32 nodeVisits; // 0x3C
		::System::Int32 leafVisits; // 0x40
		::System::Boolean hit; // 0x44
	};
}
