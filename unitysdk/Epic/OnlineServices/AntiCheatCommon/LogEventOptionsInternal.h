#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPair; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x984E70)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x984E60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x462A80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x984D20)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x984C00)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventOptionsInternal_TypeDefinitionIndex = 36912;

	struct alignas(8) LogEventOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::System::UInt32 m_EventId; // 0x20
		::System::UInt32 m_ParamsCount; // 0x24
		::System::IntPtr m_Params; // 0x28

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::Void set_EventId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Void set_Params(::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_PARAMS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
