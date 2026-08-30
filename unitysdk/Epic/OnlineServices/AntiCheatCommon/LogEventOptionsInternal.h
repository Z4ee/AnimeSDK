#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPair; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C39480)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C39470)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x869800)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x3A2C790)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C39330)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x3C39210)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventOptionsInternal_TypeDefinitionIndex = 46317;

	struct alignas(8) LogEventOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::System::UInt32 m_EventId; // 0x20
		::System::UInt32 m_ParamsCount; // 0x24
		::System::IntPtr m_Params; // 0x28

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_EventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::Void set_Params(::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_PARAMS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
