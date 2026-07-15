#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray8_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Hull_TypeDefinitionIndex = 35137;

	struct alignas(4) B2Hull
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray8_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2> points; // 0x10
		::System::Int32 count; // 0x50
	};
}
