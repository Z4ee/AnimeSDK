#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Plane.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PLANERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x3B785C0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2PlaneResult_TypeDefinitionIndex = 36038;

	struct alignas(4) B2PlaneResult
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane plane; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 point; // 0x1C
		::System::Boolean hit; // 0x24

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PLANERESULT__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
