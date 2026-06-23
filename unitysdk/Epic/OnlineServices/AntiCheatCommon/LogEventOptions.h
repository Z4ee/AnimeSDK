#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPair; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1B602F80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1B602FA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1B602FC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1B602F90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1B602FB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x1B602FD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B602FE0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventOptions_TypeDefinitionIndex = 36252;

	class LogEventOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>* _Params_k__BackingField; // 0x10
		::System::IntPtr _ClientHandle_k__BackingField; // 0x18
		::System::UInt32 _EventId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::UInt32 get_EventId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_SET_EVENTID_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>* get_Params()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_GET_PARAMS_OFFSET))(this);
		}

		::System::Void set_Params(::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONS_SET_PARAMS_OFFSET))(this, value);
		}
	};
}
