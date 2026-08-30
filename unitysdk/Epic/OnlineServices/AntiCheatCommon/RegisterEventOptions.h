#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventParamDef; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB134C90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xB134CB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB134CD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_PARAMDEFS_OFFSET UNITYSDK_OFFSET(0xB134CF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB134CA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xB134CC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB134CE0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_PARAMDEFS_OFFSET UNITYSDK_OFFSET(0xB134D00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB134D10)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int RegisterEventOptions_TypeDefinitionIndex = 46350;

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

		::System::Void set_EventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void set_EventName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType get_EventType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void set_EventType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_EVENTTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>* get_ParamDefs()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_GET_PARAMDEFS_OFFSET))(this);
		}

		::System::Void set_ParamDefs(::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTOPTIONS_SET_PARAMDEFS_OFFSET))(this, a1);
		}
	};
}
