#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientAuthStatus.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x325D00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x9A9220)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x31CCF0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int OnClientAuthStatusChangedCallbackInfoInternal_TypeDefinitionIndex = 36940;

	struct alignas(8) OnClientAuthStatusChangedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus m_ClientAuthStatus; // 0x20

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus get_ClientAuthStatus()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTAUTHSTATUS_OFFSET))(this);
		}
	};
}
