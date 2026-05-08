#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A4E4850)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1A4E4870)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A4E4860)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1A4E4880)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E4890)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int QueryIdTokenOptions_TypeDefinitionIndex = 34626;

	class QueryIdTokenOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _TargetAccountId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetAccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_GET_TARGETACCOUNTID_OFFSET))(this);
		}

		::System::Void set_TargetAccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENOPTIONS_SET_TARGETACCOUNTID_OFFSET))(this, value);
		}
	};
}
