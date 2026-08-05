#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogGameRoundEndOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA05D90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x961230)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_WINNINGTEAMID_OFFSET UNITYSDK_OFFSET(0x6329D0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogGameRoundEndOptionsInternal_TypeDefinitionIndex = 36918;

	struct alignas(4) LogGameRoundEndOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_WinningTeamId; // 0x14

		::System::Void set_WinningTeamId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_WINNINGTEAMID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDENDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
