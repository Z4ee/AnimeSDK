#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class UserInfoData; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x241D0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x23BD0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x23D30)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x23FF0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x23E90)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x23AA0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x24160)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x23C80)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x23DE0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x240A0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x24150)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x23F40)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x23B10)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int UserInfoDataInternal_TypeDefinitionIndex = 35297;

	struct alignas(8) UserInfoDataInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_UserId; // 0x18
		::System::IntPtr m_Country; // 0x20
		::System::IntPtr m_DisplayName; // 0x28
		::System::IntPtr m_PreferredLanguage; // 0x30
		::System::IntPtr m_Nickname; // 0x38

		::Epic::OnlineServices::EpicAccountId* get_UserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_Country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_Country(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_COUNTRY_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_PreferredLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_PREFERREDLANGUAGE_OFFSET))(this);
		}

		::System::Void set_PreferredLanguage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_PREFERREDLANGUAGE_OFFSET))(this, value);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_Nickname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::UserInfoData* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::UserInfoData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
