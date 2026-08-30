#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2EXPLOSIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x82E340)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ExplosionContext_TypeDefinitionIndex = 35978;

	struct alignas(8) B2ExplosionContext
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 position; // 0x18
		::System::Single radius; // 0x20
		::System::Single falloff; // 0x24
		::System::Single impulsePerLength; // 0x28

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2EXPLOSIONCONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
