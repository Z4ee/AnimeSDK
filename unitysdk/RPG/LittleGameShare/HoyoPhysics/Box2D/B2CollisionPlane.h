#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Plane.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2COLLISIONPLANE__CTOR_OFFSET UNITYSDK_OFFSET(0x82DD40)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2CollisionPlane_TypeDefinitionIndex = 35925;

	struct alignas(4) B2CollisionPlane
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane plane; // 0x10
		::System::Single pushLimit; // 0x1C
		::System::Single push; // 0x20
		::System::Boolean clipVelocity; // 0x24

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Plane, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2COLLISIONPLANE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
