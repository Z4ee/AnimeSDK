#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RAYCASTINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x82DBF0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2RayCastInput_TypeDefinitionIndex = 36048;

	struct alignas(4) B2RayCastInput
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 origin; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 translation; // 0x18
		::System::Single maxFraction; // 0x20

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2RAYCASTINPUT__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
