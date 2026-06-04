#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xA109370)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_EXTERNALACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA109350)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA109330)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xA109380)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_EXTERNALACCOUNTID_OFFSET UNITYSDK_OFFSET(0xA109360)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA109340)
#define EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA109390)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int QueryUserInfoByExternalAccountOptions_TypeDefinitionIndex = 41919;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_ExternalAccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_EXTERNALACCOUNTID_OFFSET))(this);
		}

		::System::Void set_ExternalAccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_EXTERNALACCOUNTID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_GET_ACCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_AccountType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_QUERYUSERINFOBYEXTERNALACCOUNTOPTIONS_SET_ACCOUNTTYPE_OFFSET))(this, a1);
		}
	};
}
