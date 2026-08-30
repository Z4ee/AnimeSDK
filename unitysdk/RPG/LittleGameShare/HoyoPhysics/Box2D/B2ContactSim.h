#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Manifold.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SimplexCache.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0xC2DA110)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSIM__CTOR_OFFSET UNITYSDK_OFFSET(0xC2DAF00)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactSim_TypeDefinitionIndex = 35943;

	class B2ContactSim : public ::System::Object
	{
	public:
		::System::Int32 bodySimIndexA; // 0x10
		::System::Single restitution; // 0x14
		::System::Single friction; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SimplexCache cache; // 0x1C
		::System::Single tangentSpeed; // 0x24
		::System::Int32 contactId; // 0x28
		::System::Single invMassA; // 0x2C
		::System::Int32 shapeIdA; // 0x30
		::System::UInt32 simFlags; // 0x34
		::System::Int32 shapeIdB; // 0x38
		::System::Single invIA; // 0x3C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Manifold manifold; // 0x40
		::System::Int32 bodySimIndexB; // 0xB0
		::System::Single invIB; // 0xB4
		::System::Single rollingResistance; // 0xB8
		::System::Single invMassB; // 0xBC

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
