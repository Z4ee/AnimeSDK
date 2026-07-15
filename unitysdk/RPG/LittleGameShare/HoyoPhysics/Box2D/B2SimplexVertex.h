#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SimplexVertex_TypeDefinitionIndex = 35226;

	struct alignas(4) B2SimplexVertex
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 wA; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 wB; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 w; // 0x20
		::System::Single a; // 0x28
		::System::Int32 indexA; // 0x2C
		::System::Int32 indexB; // 0x30
	};
}
