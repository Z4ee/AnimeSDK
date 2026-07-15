#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2DistanceOutput_TypeDefinitionIndex = 35113;

	struct alignas(4) B2DistanceOutput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 pointA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 pointB; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x20
		::System::Single distance; // 0x28
		::System::Int32 iterations; // 0x2C
		::System::Int32 simplexCount; // 0x30
	};
}
