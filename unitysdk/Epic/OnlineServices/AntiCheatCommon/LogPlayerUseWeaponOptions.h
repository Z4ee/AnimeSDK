#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseWeaponData; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS_GET_USEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0xB1333E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS_SET_USEWEAPONDATA_OFFSET UNITYSDK_OFFSET(0xB1333F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB133400)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerUseWeaponOptions_TypeDefinitionIndex = 46340;

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

		::System::Void set_UseWeaponData(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERUSEWEAPONOPTIONS_SET_USEWEAPONDATA_OFFSET))(this, a1);
		}
	};
}
