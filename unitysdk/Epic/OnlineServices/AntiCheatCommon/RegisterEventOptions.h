#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventParamDef; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x838D430)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x838D450)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x838D470)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_PARAMDEFS_OFFSET UNITYSDK_OFFSET(0x838D490)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x838D440)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x838D460)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x838D480)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_PARAMDEFS_OFFSET UNITYSDK_OFFSET(0x838D4A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x838D4B0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int RegisterEventOptions_TypeDefinitionIndex = 36678;

	class RegisterEventOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>* _ParamDefs_k__BackingField; // 0x10
		::System::String* _EventName_k__BackingField; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType _EventType_k__BackingField; // 0x20
		::System::UInt32 _EventId_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EventId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTID_OFFSET))(this, value);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void set_EventName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType get_EventType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void set_EventType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>* get_ParamDefs()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_PARAMDEFS_OFFSET))(this);
		}

		::System::Void set_ParamDefs(::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_PARAMDEFS_OFFSET))(this, value);
		}
	};
}
