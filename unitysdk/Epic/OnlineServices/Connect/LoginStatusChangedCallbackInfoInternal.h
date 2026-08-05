#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/LoginStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x960350)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x31D320)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x960460)
#define EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x325D00)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LoginStatusChangedCallbackInfoInternal_TypeDefinitionIndex = 36746;

	struct alignas(8) LoginStatusChangedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::LoginStatus m_PreviousStatus; // 0x20
		::Epic::OnlineServices::LoginStatus m_CurrentStatus; // 0x24

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus get_PreviousStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::Epic::OnlineServices::LoginStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::LoginStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINSTATUSCHANGEDCALLBACKINFOINTERNAL_GET_CURRENTSTATUS_OFFSET))(this);
		}
	};
}
