#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/Epic/OnlineServices/UserInfo/ExternalUserInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1AE36630)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_GET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE36610)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1AE36650)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1AE36900)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1AE36640)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE36620)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1AE36660)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_OFFSET UNITYSDK_OFFSET(0x1AE36670)
#define EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE36C30)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int ExternalUserInfo_TypeDefinitionIndex = 33319;

	class ExternalUserInfo : public ::System::Object
	{
	public:
		::System::String* _DisplayName_k__BackingField; // 0x10
		::System::String* _AccountId_k__BackingField; // 0x18
		::Epic::OnlineServices::ExternalAccountType _AccountType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_GET_ACCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_AccountType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_ACCOUNTTYPE_OFFSET))(this, value);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UserInfo::ExternalUserInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_EXTERNALUSERINFO_SET_1_OFFSET))(this, other);
		}
	};
}
