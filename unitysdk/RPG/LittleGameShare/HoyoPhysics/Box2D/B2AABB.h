#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABB__CTOR_OFFSET UNITYSDK_OFFSET(0x80380)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2AABB_TypeDefinitionIndex = 35883;

	struct alignas(4) B2AABB
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 lowerBound; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 upperBound; // 0x18

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2AABB__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
