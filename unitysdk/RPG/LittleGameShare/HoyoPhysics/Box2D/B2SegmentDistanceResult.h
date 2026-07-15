#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SegmentDistanceResult_TypeDefinitionIndex = 35198;

	struct alignas(4) B2SegmentDistanceResult
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 closest1; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 closest2; // 0x18
		::System::Single fraction1; // 0x20
		::System::Single fraction2; // 0x24
		::System::Single distanceSquared; // 0x28
	};
}
