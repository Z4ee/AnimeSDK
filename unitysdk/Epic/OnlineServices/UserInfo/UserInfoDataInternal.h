#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::UserInfo { class UserInfoData; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x24CA0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x24690)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x247F0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x24AB0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x24950)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_USERID_OFFSET UNITYSDK_OFFSET(0x24560)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x24C20)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x24740)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x248A0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x24B60)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x24C10)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x24A00)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_USERID_OFFSET UNITYSDK_OFFSET(0x245D0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int UserInfoDataInternal_TypeDefinitionIndex = 41926;

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

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_Country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_Country(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_COUNTRY_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* get_PreferredLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_PREFERREDLANGUAGE_OFFSET))(this);
		}

		::System::Void set_PreferredLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_PREFERREDLANGUAGE_OFFSET))(this, a1);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_Nickname(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::UserInfo::UserInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UserInfo::UserInfoData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATAINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
