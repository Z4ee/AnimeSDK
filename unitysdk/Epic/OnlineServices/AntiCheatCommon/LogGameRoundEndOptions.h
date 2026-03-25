#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONS_GET_WINNINGTEAMID_OFFSET UNITYSDK_OFFSET(0x8388130)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONS_SET_WINNINGTEAMID_OFFSET UNITYSDK_OFFSET(0x8388140)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8388150)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogGameRoundEndOptions_TypeDefinitionIndex = 36650;

	class LogGameRoundEndOptions : public ::System::Object
	{
	public:
		::System::UInt32 _WinningTeamId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WinningTeamId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONS_GET_WINNINGTEAMID_OFFSET))(this);
		}

		::System::Void set_WinningTeamId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONS_SET_WINNINGTEAMID_OFFSET))(this, value);
		}
	};
}
