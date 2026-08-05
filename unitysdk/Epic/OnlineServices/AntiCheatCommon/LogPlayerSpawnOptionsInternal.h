#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerSpawnOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA29A10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA29990)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x352890)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA29960)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_SPAWNEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x462A80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x5B0840)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerSpawnOptionsInternal_TypeDefinitionIndex = 36926;

	struct alignas(8) LogPlayerSpawnOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SpawnedPlayerHandle; // 0x18
		::System::UInt32 m_TeamId; // 0x20
		::System::UInt32 m_CharacterId; // 0x24

		::System::Void set_SpawnedPlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_SPAWNEDPLAYERHANDLE_OFFSET))(this, value);
		}

		::System::Void set_TeamId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_TEAMID_OFFSET))(this, value);
		}

		::System::Void set_CharacterId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_CHARACTERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
