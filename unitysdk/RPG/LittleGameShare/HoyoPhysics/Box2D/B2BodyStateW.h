#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FloatW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RotW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2W.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyStateW_TypeDefinitionIndex = 35051;

	struct alignas(4) B2BodyStateW
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W v; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW w; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW flags; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W dp; // 0x50
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RotW dq; // 0x70
	};
}
