#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/UserInfo/UserInfoDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1D280E50)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D280E70)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1D280EB0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D280E90)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1D280E30)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_1_OFFSET UNITYSDK_OFFSET(0x1D2814A0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1D280E60)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D280E80)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1D280EC0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_OFFSET UNITYSDK_OFFSET(0x1D280ED0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D280EA0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1D280E40)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2815F0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int UserInfoData_TypeDefinitionIndex = 34904;

	class UserInfoData : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _UserId_k__BackingField; // 0x10
		::System::String* _DisplayName_k__BackingField; // 0x18
		::System::String* _Nickname_k__BackingField; // 0x20
		::System::String* _PreferredLanguage_k__BackingField; // 0x28
		::System::String* _Country_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_UserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_Country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_Country(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_COUNTRY_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_PreferredLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_PREFERREDLANGUAGE_OFFSET))(this);
		}

		::System::Void set_PreferredLanguage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_PREFERREDLANGUAGE_OFFSET))(this, value);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_Nickname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoDataInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_1_OFFSET))(this, other);
		}
	};
}
