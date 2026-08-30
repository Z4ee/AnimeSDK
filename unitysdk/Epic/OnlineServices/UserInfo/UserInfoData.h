#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/UserInfo/UserInfoDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0xB171200)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xB171220)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xB171260)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0xB171240)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_USERID_OFFSET UNITYSDK_OFFSET(0xB1711E0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_1_OFFSET UNITYSDK_OFFSET(0xB171B80)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0xB171210)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xB171230)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xB171270)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_OFFSET UNITYSDK_OFFSET(0xB171280)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_PREFERREDLANGUAGE_OFFSET UNITYSDK_OFFSET(0xB171250)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_USERID_OFFSET UNITYSDK_OFFSET(0xB1711F0)
#define EPIC_ONLINESERVICES_USERINFO_USERINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB171CC0)

namespace Epic::OnlineServices::UserInfo
{
	inline static constexpr unsigned int UserInfoData_TypeDefinitionIndex = 44968;

	class UserInfoData : public ::System::Object
	{
	public:
		::System::String* _Country_k__BackingField; // 0x10
		::System::String* _DisplayName_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _UserId_k__BackingField; // 0x20
		::System::String* _PreferredLanguage_k__BackingField; // 0x28
		::System::String* _Nickname_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_UserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_Country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_Country(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_COUNTRY_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* get_PreferredLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_PREFERREDLANGUAGE_OFFSET))(this);
		}

		::System::Void set_PreferredLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_PREFERREDLANGUAGE_OFFSET))(this, a1);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_Nickname(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_NICKNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoDataInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::UserInfo::UserInfoDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_USERINFO_USERINFODATA_SET_1_OFFSET))(this, a1);
		}
	};
}
