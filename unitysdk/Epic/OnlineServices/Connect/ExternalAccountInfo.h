#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/ExternalAccountInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0xB3418F0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xB3418D0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xB3418B0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_LASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0xB341910)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0xB341890)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB342010)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0xB341900)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xB3418E0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xB3418C0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_LASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0xB341930)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_OFFSET UNITYSDK_OFFSET(0xB341940)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0xB3418A0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB342150)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int ExternalAccountInfo_TypeDefinitionIndex = 46132;

	class ExternalAccountInfo : public ::System::Object
	{
	public:
		::System::String* _DisplayName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ProductUserId_k__BackingField; // 0x18
		::System::String* _AccountId_k__BackingField; // 0x20
		::Epic::OnlineServices::ExternalAccountType _AccountIdType_k__BackingField; // 0x28
		::System::Nullable_1<::System::DateTimeOffset> _LastLoginTime_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_PRODUCTUSERID_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_ACCOUNTIDTYPE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::DateTimeOffset> get_LastLoginTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_GET_LASTLOGINTIME_OFFSET))(this);
		}

		::System::Void set_LastLoginTime(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_LASTLOGINTIME_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::ExternalAccountInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
