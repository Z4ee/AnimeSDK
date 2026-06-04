#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/LoginStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x30520)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x6EF0)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x30630)
#define EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PREVSTATUS_OFFSET UNITYSDK_OFFSET(0x6EE0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginStatusChangedCallbackInfoInternal_TypeDefinitionIndex = 43185;

	struct alignas(8) LoginStatusChangedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::LoginStatus m_PrevStatus; // 0x20
		::Epic::OnlineServices::LoginStatus m_CurrentStatus; // 0x24

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus get_PrevStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PREVSTATUS_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CURRENTSTATUS_OFFSET))(this);
		}
	};
}
