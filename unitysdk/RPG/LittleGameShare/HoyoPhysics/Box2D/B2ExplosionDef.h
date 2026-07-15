#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ExplosionDef_TypeDefinitionIndex = 35118;

	struct alignas(8) B2ExplosionDef
	{
		::System::UInt64 maskBits; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 position; // 0x18
		::System::Single radius; // 0x20
		::System::Single falloff; // 0x24
		::System::Single impulsePerLength; // 0x28
	};
}
