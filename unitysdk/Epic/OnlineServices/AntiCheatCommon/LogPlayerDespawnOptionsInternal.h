#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerDespawnOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB700)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xB680)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_DESPAWNEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x9500)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9E50)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerDespawnOptionsInternal_TypeDefinitionIndex = 46327;

	struct alignas(8) LogPlayerDespawnOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_DespawnedPlayerHandle; // 0x18

		::System::Void set_DespawnedPlayerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_DESPAWNEDPLAYERHANDLE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
