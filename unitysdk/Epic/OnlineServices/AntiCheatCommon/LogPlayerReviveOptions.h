#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_GET_REVIVEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E5AA8B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_GET_REVIVERPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E5AA8D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_SET_REVIVEDPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E5AA8C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_SET_REVIVERPLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x1E5AA8E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AA8F0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerReviveOptions_TypeDefinitionIndex = 36923;

	class LogPlayerReviveOptions : public ::System::Object
	{
	public:
		::System::IntPtr _ReviverPlayerHandle_k__BackingField; // 0x10
		::System::IntPtr _RevivedPlayerHandle_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_RevivedPlayerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_GET_REVIVEDPLAYERHANDLE_OFFSET))(this);
		}

		::System::Void set_RevivedPlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_SET_REVIVEDPLAYERHANDLE_OFFSET))(this, value);
		}

		::System::IntPtr get_ReviverPlayerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_GET_REVIVERPLAYERHANDLE_OFFSET))(this);
		}

		::System::Void set_ReviverPlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERREVIVEOPTIONS_SET_REVIVERPLAYERHANDLE_OFFSET))(this, value);
		}
	};
}
