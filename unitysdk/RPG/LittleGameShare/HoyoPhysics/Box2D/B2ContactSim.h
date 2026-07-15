#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0xB614DE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM__CTOR_OFFSET UNITYSDK_OFFSET(0xB615C10)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactSim_TypeDefinitionIndex = 35082;

	class B2ContactSim : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold manifold; // 0x10
		::System::Single restitution; // 0x80
		::System::Single invMassA; // 0x84
		::System::Int32 bodySimIndexB; // 0x88
		::System::Int32 shapeIdA; // 0x8C
		::System::Single friction; // 0x90
		::System::Single invMassB; // 0x94
		::System::UInt32 simFlags; // 0x98
		::System::Int32 bodySimIndexA; // 0x9C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache cache; // 0xA0
		::System::Single tangentSpeed; // 0xA8
		::System::Int32 shapeIdB; // 0xAC
		::System::Single invIB; // 0xB0
		::System::Single invIA; // 0xB4
		::System::Single rollingResistance; // 0xB8
		::System::Int32 contactId; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM_COPYFROM_OFFSET))(this, a1);
		}
	};
}
