#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientAction.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientActionReason.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_ACTIONREASONCODE_OFFSET UNITYSDK_OFFSET(0x32EC50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_ACTIONREASONDETAILSSTRING_OFFSET UNITYSDK_OFFSET(0x9BDC60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTACTION_OFFSET UNITYSDK_OFFSET(0x2B7CC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x246290)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9BDB50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x2A99F0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int OnClientActionRequiredCallbackInfoInternal_TypeDefinitionIndex = 36279;

	struct alignas(8) OnClientActionRequiredCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction m_ClientAction; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason m_ActionReasonCode; // 0x24
		::System::IntPtr m_ActionReasonDetailsString; // 0x28

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction get_ClientAction()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_CLIENTACTION_OFFSET))(this);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason get_ActionReasonCode()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_ACTIONREASONCODE_OFFSET))(this);
		}

		::System::String* get_ActionReasonDetailsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFOINTERNAL_GET_ACTIONREASONDETAILSSTRING_OFFSET))(this);
		}
	};
}
