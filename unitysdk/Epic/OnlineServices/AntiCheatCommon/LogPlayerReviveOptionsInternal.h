#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerReviveOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB860)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xB7E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_REVIVEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x9500)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_REVIVERPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0xB7B0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerReviveOptionsInternal_TypeDefinitionIndex = 46329;

	struct alignas(8) LogPlayerReviveOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_RevivedPlayerHandle; // 0x18
		::System::IntPtr m_ReviverPlayerHandle; // 0x20

		::System::Void set_RevivedPlayerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_REVIVEDPLAYERHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_ReviverPlayerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_REVIVERPLAYERHANDLE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
