#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalAccountType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class ExternalAccountInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x915E10)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x361C30)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x915B20)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9159C0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_LASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0x915C80)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x915890)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x915DA0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_ACCOUNTIDTYPE_OFFSET UNITYSDK_OFFSET(0x8326D0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x915BD0)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x915A70)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_LASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0x915D00)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x915D90)
#define EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_PRODUCTUSERID_OFFSET UNITYSDK_OFFSET(0x915900)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int ExternalAccountInfoInternal_TypeDefinitionIndex = 36069;

	struct alignas(8) ExternalAccountInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ProductUserId; // 0x18
		::System::IntPtr m_DisplayName; // 0x20
		::System::IntPtr m_AccountId; // 0x28
		::Epic::OnlineServices::ExternalAccountType m_AccountIdType; // 0x30
		::System::Int64 m_LastLoginTime; // 0x38

		::Epic::OnlineServices::ProductUserId* get_ProductUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_PRODUCTUSERID_OFFSET))(this);
		}

		::System::Void set_ProductUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_PRODUCTUSERID_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalAccountType get_AccountIdType()
		{
			return ((::Epic::OnlineServices::ExternalAccountType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_ACCOUNTIDTYPE_OFFSET))(this);
		}

		::System::Void set_AccountIdType(::Epic::OnlineServices::ExternalAccountType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalAccountType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_ACCOUNTIDTYPE_OFFSET))(this, value);
		}

		/*
		::System::Nullable_1<::System::DateTimeOffset> get_LastLoginTime()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_GET_LASTLOGINTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_LastLoginTime(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_LASTLOGINTIME_OFFSET))(this, value);
		}
		*/

		::System::Void Set(::Epic::OnlineServices::Connect::ExternalAccountInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::ExternalAccountInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_EXTERNALACCOUNTINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
