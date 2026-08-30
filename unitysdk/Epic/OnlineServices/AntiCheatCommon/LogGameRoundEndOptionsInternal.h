#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogGameRoundEndOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xB1B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2210)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_WINNINGTEAMID_OFFSET UNITYSDK_OFFSET(0x2200)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogGameRoundEndOptionsInternal_TypeDefinitionIndex = 46323;

	struct alignas(4) LogGameRoundEndOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_WinningTeamId; // 0x14

		::System::Void set_WinningTeamId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_WINNINGTEAMID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
