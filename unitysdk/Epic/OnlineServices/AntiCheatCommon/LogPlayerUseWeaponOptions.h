#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseWeaponData; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS_GET_USEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x1BEEA1F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS_SET_USEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0x1BEEA200)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEEA210)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerUseWeaponOptions_TypeDefinitionIndex = 36276;

	class LogPlayerUseWeaponOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* _UseWeaponData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* get_UseWeaponData()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS_GET_USEWEAPONDATA_OFFSET))(this);
		}

		::System::Void set_UseWeaponData(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS_SET_USEWEAPONDATA_OFFSET))(this, value);
		}
	};
}
