#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XftWeapon/XWeaponTrail.h"

#define MOLEMOLE_BATTLE_XWEAPONTRAILCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D56B440)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int XWeaponTrailCustom_TypeDefinitionIndex = 39298;

	class XWeaponTrailCustom : public ::XftWeapon::XWeaponTrail
	{
	public:
		::System::Single CloseDuration; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_XWEAPONTRAILCUSTOM__CTOR_OFFSET))(this);
		}
	};
}
