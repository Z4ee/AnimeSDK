#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C2B0B70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1C2BA7A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C2BA710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BA470)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyState_TypeDefinitionIndex = 35911;

	class B2BodyState : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 deltaPosition; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot deltaRotation; // 0x18
		::System::UInt32 flags; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 linearVelocity; // 0x24
		::System::Single angularVelocity; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE__CTOR_OFFSET))(this);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState* Create(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE_CREATE_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE_CLEAR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYSTATE_COPYFROM_OFFSET))(this, a1);
		}
	};
}
