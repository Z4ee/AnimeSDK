#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MASSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x3B784E0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MassData_TypeDefinitionIndex = 36020;

	struct alignas(4) B2MassData
	{
		::System::Single mass; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 center; // 0x14
		::System::Single rotationalInertia; // 0x1C

		::System::Void _ctor(::System::Single a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MASSDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
