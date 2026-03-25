#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8398590)
#define EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x83985A0)
#define EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83985B0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int CopyIdTokenOptions_TypeDefinitionIndex = 36533;

	class CopyIdTokenOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _AccountId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONS_SET_ACCOUNTID_OFFSET))(this, value);
		}
	};
}
