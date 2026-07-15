#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SWEEP__CTOR_OFFSET UNITYSDK_OFFSET(0x2F01E40)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Sweep_TypeDefinitionIndex = 35238;

	struct alignas(4) B2Sweep
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCenter; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 c1; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 c2; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot q1; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot q2; // 0x30

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a4, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SWEEP__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
