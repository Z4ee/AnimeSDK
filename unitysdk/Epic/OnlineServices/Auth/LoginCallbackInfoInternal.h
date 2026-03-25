#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class AccountFeatureRestrictedInfo; }
namespace Epic::OnlineServices::Auth { class PinGrantInfo; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_ACCOUNTFEATURERESTRICTEDINFO_OFFSET UNITYSDK_OFFSET(0x2C380)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x2C120)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x2C310)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x2C230)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_PINGRANTINFO_OFFSET UNITYSDK_OFFSET(0x2C2A0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_SELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2C3F0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginCallbackInfoInternal_TypeDefinitionIndex = 36551;

	struct alignas(8) LoginCallbackInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_PinGrantInfo; // 0x28
		::System::IntPtr m_ContinuanceToken; // 0x30
		::System::IntPtr m_AccountFeatureRestrictedInfo; // 0x38
		::System::IntPtr m_SelectedAccountId; // 0x40

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::PinGrantInfo* get_PinGrantInfo()
		{
			return ((::Epic::OnlineServices::Auth::PinGrantInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_PINGRANTINFO_OFFSET))(this);
		}

		::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken()
		{
			return ((::Epic::OnlineServices::ContinuanceToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_CONTINUANCETOKEN_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo* get_AccountFeatureRestrictedInfo()
		{
			return ((::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_ACCOUNTFEATURERESTRICTEDINFO_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_SelectedAccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFOINTERNAL_GET_SELECTEDACCOUNTID_OFFSET))(this);
		}
	};
}
