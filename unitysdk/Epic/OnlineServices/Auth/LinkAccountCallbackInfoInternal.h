#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class PinGrantInfo; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x979170)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x979280)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_PINGRANTINFO_OFFSET UNITYSDK_OFFSET(0x9792F0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_SELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x979360)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LinkAccountCallbackInfoInternal_TypeDefinitionIndex = 36154;

	struct alignas(8) LinkAccountCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_PinGrantInfo; // 0x28
		::System::IntPtr m_SelectedAccountId; // 0x30

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::PinGrantInfo* get_PinGrantInfo()
		{
			return ((::Epic::OnlineServices::Auth::PinGrantInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_PINGRANTINFO_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_SelectedAccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTCALLBACKINFOINTERNAL_GET_SELECTEDACCOUNTID_OFFSET))(this);
		}
	};
}
