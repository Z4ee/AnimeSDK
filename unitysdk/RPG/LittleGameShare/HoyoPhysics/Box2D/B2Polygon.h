#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray8_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Polygon_TypeDefinitionIndex = 35179;

	struct alignas(4) B2Polygon
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray8_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> vertices; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray8_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> normals; // 0x50
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 centroid; // 0x90
		::System::Single radius; // 0x98
		::System::Int32 count; // 0x9C
	};
}
