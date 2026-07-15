#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Segment.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ChainSegment_TypeDefinitionIndex = 35060;

	struct alignas(4) B2ChainSegment
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 ghost1; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Segment segment; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 ghost2; // 0x28
		::System::Int32 chainId; // 0x30
	};
}
