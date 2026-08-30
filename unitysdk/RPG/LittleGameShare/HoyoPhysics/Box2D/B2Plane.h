#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x151060)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Plane_TypeDefinitionIndex = 36037;

	struct alignas(4) B2Plane
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 normal; // 0x10
		::System::Single offset; // 0x18

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PLANE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
