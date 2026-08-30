#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2CF510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0xC2D9160)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D91F0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodySim_TypeDefinitionIndex = 35910;

	class B2BodySim : public ::System::Object
	{
	public:
		::System::Single invMass; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 force; // 0x14
		::System::Single invInertia; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform transform; // 0x20
		::System::Int32 bodyId; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 center; // 0x34
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 center0; // 0x3C
		::System::Single gravityScale; // 0x44
		::System::Single linearDamping; // 0x48
		::System::UInt32 flags; // 0x4C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 localCenter; // 0x50
		::System::Single angularDamping; // 0x58
		::System::Single minExtent; // 0x5C
		::System::Single torque; // 0x60
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot rotation0; // 0x64
		::System::Single maxExtent; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_CLEAR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSIM_COPYFROM_OFFSET))(this, a1);
		}
	};
}
