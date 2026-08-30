#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FloatW.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2W__CTOR_OFFSET UNITYSDK_OFFSET(0x6BB430)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Vec2W_TypeDefinitionIndex = 36117;

	struct alignas(4) B2Vec2W
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW X; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW Y; // 0x20

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2VEC2W__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
