#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class WeaponInfo; }

#define MOLEMOLE_CONFIG_CONFIGUIWEAPON_KEYVALUEINFO_WG__CTOR_OFFSET UNITYSDK_OFFSET(0x1424F030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIWeapon_KeyValueInfo_WG_TypeDefinitionIndex = 74992;

	class ConfigUIWeapon_KeyValueInfo_WG : public ::System::Object
	{
	public:
		::System::Int32 keyInst; // 0x10
		::MoleMole::Config::WeaponInfo* valueInst; // 0x18

		::System::Void _ctor(::System::Int32 _keyInst, ::MoleMole::Config::WeaponInfo* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::WeaponInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPON_KEYVALUEINFO_WG__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
