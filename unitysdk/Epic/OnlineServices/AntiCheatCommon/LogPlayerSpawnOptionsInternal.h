#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerSpawnOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AA40F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AA4070)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x7C2360)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AA4040)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_SPAWNEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x38C6D30)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerSpawnOptionsInternal_TypeDefinitionIndex = 44149;

	struct alignas(8) LogPlayerSpawnOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SpawnedPlayerHandle; // 0x18
		::System::UInt32 m_TeamId; // 0x20
		::System::UInt32 m_CharacterId; // 0x24

		::System::Void set_SpawnedPlayerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_SPAWNEDPLAYERHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_TeamId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_TEAMID_OFFSET))(this, a1);
		}

		::System::Void set_CharacterId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_CHARACTERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERSPAWNOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
