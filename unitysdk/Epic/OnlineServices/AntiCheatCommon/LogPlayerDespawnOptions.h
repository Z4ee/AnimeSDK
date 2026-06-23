#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONS_GET_DESPAWNEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1CE661A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONS_SET_DESPAWNEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1CE661B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE661C0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerDespawnOptions_TypeDefinitionIndex = 36262;

	class LogPlayerDespawnOptions : public ::System::Object
	{
	public:
		::System::IntPtr _DespawnedPlayerHandle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_DespawnedPlayerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONS_GET_DESPAWNEDPLAYERHANDLE_OFFSET))(this);
		}

		::System::Void set_DespawnedPlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONS_SET_DESPAWNEDPLAYERHANDLE_OFFSET))(this, value);
		}
	};
}
