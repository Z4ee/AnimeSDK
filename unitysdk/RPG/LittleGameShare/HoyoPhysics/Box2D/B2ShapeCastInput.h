#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeProxy.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ShapeCastInput_TypeDefinitionIndex = 35214;

	struct alignas(4) B2ShapeCastInput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeProxy proxy; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 translation; // 0x58
		::System::Single maxFraction; // 0x60
		::System::Boolean canEncroach; // 0x64
	};
}
