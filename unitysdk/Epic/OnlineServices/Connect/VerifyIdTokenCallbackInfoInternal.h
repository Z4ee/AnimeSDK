#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x1E140)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x35060)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x34E30)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_DEVICETYPE_OFFSET UNITYSDK_OFFSET(0x351C0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_ISACCOUNTINFOPRESENT_OFFSET UNITYSDK_OFFSET(0x34FB0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x35110)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x34F40)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int VerifyIdTokenCallbackInfoInternal_TypeDefinitionIndex = 36523;

	struct alignas(8) VerifyIdTokenCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_ProductUserId; // 0x20
		::System::Int32 m_IsAccountInfoPresent; // 0x28
		::Epic::OnlineServices::ExternalAccountType m_AccountIdType; // 0x2C
		::System::IntPtr m_AccountId; // 0x30
		::System::IntPtr m_Platform; // 0x38
		::System::IntPtr m_DeviceType; // 0x40

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Boolean get_IsAccountInfoPresent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_ISACCOUNTINFOPRESENT_OFFSET))(this);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_PLATFORM_OFFSET))(this);
		}

		::System::String* get_DeviceType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENCALLBACKINFOINTERNAL_GET_DEVICETYPE_OFFSET))(this);
		}
	};
}
