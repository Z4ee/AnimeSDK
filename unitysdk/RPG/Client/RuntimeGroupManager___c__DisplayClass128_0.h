#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDistrictDef; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC895310)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0___REMOVELOCALLEGACYDISTRICT_B__0_OFFSET UNITYSDK_OFFSET(0xC898150)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager___c__DisplayClass128_0_TypeDefinitionIndex = 58054;

	class RuntimeGroupManager___c__DisplayClass128_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveLocalLegacyDistrict_b__0(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0___REMOVELOCALLEGACYDISTRICT_B__0_OFFSET))(this, a1);
		}
	};
}
