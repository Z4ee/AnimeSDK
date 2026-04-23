#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerDespawnOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAED0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xAE60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_DESPAWNEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x8D10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9650)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerDespawnOptionsInternal_TypeDefinitionIndex = 42481;

	struct alignas(8) LogPlayerDespawnOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_DespawnedPlayerHandle; // 0x18

		::System::Void set_DespawnedPlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_DESPAWNEDPLAYERHANDLE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERDESPAWNOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
