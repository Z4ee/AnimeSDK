#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1C2C15C0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_EXTERNALACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1C2C15A0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2C1580)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1C2C15D0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_EXTERNALACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1C2C15B0)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2C1590)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C15E0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByExternalAccountOptions_TypeDefinitionIndex = 35557;

	class QueryUserInfoByExternalAccountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _ExternalAccountId_k__BackingField; // 0x18
		::Epic::OnlineServices::ExternalAccountType _AccountType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_ExternalAccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_EXTERNALACCOUNTID_OFFSET))(this);
		}

		::System::Void set_ExternalAccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_EXTERNALACCOUNTID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_ACCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_AccountType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_ACCOUNTTYPE_OFFSET))(this, value);
		}
	};
}
