#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventParamDef; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x930E40)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x930DD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x930BF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x577FD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x930DC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_PARAMDEFS_OFFSET UNITYSDK_OFFSET(0x930CA0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int RegisterEventOptionsInternal_TypeDefinitionIndex = 34724;

	struct alignas(8) RegisterEventOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_EventId; // 0x14
		::System::IntPtr m_EventName; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType m_EventType; // 0x20
		::System::UInt32 m_ParamDefsCount; // 0x24
		::System::IntPtr m_ParamDefs; // 0x28

		::System::Void set_EventId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Void set_EventName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_EVENTNAME_OFFSET))(this, value);
		}

		::System::Void set_EventType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_EVENTTYPE_OFFSET))(this, value);
		}

		::System::Void set_ParamDefs(::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_PARAMDEFS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
