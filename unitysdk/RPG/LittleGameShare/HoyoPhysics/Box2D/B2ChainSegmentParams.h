#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ChainSegmentParams_TypeDefinitionIndex = 35061;

	struct alignas(4) B2ChainSegmentParams
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 edge1; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal0; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal2; // 0x20
		::System::Boolean convex1; // 0x28
		::System::Boolean convex2; // 0x29
	};
}
