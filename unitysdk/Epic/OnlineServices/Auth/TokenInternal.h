#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthTokenType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class Token; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BEE80)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x9BE860)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9BE730)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_APP_OFFSET UNITYSDK_OFFSET(0x9BE470)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x775AC0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x9BE5D0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x9BE9C0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x9B8B70)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x9BECA0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x9BEC80)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x9BEB20)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9BEE10)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x9BE910)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9BE7A0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_APP_OFFSET UNITYSDK_OFFSET(0x9BE520)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x775AE0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x9BE680)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x9BEA70)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x9B8B80)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9BEE00)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x9BED50)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x9BEC90)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x9BEBD0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int TokenInternal_TypeDefinitionIndex = 36192;

	struct alignas(8) TokenInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_App; // 0x18
		::System::IntPtr m_ClientId; // 0x20
		::System::IntPtr m_AccountId; // 0x28
		::System::IntPtr m_AccessToken; // 0x30
		::System::Double m_ExpiresIn; // 0x38
		::System::IntPtr m_ExpiresAt; // 0x40
		::Epic::OnlineServices::Auth::AuthTokenType m_AuthType; // 0x48
		::System::IntPtr m_RefreshToken; // 0x50
		::System::Double m_RefreshExpiresIn; // 0x58
		::System::IntPtr m_RefreshExpiresAt; // 0x60

		::System::String* get_App()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_APP_OFFSET))(this);
		}

		::System::Void set_App(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_APP_OFFSET))(this, value);
		}

		::System::String* get_ClientId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_CLIENTID_OFFSET))(this);
		}

		::System::Void set_ClientId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_CLIENTID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::String* get_AccessToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCESSTOKEN_OFFSET))(this);
		}

		::System::Void set_AccessToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCESSTOKEN_OFFSET))(this, value);
		}

		::System::Double get_ExpiresIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESIN_OFFSET))(this);
		}

		::System::Void set_ExpiresIn(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESIN_OFFSET))(this, value);
		}

		::System::String* get_ExpiresAt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESAT_OFFSET))(this);
		}

		::System::Void set_ExpiresAt(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESAT_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Auth::AuthTokenType get_AuthType()
		{
			return ((::Epic::OnlineServices::Auth::AuthTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_AUTHTYPE_OFFSET))(this);
		}

		::System::Void set_AuthType(::Epic::OnlineServices::Auth::AuthTokenType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthTokenType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_AUTHTYPE_OFFSET))(this, value);
		}

		::System::String* get_RefreshToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHTOKEN_OFFSET))(this);
		}

		::System::Void set_RefreshToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHTOKEN_OFFSET))(this, value);
		}

		::System::Double get_RefreshExpiresIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESIN_OFFSET))(this);
		}

		::System::Void set_RefreshExpiresIn(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESIN_OFFSET))(this, value);
		}

		::System::String* get_RefreshExpiresAt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESAT_OFFSET))(this);
		}

		::System::Void set_RefreshExpiresAt(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESAT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::Token* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Token*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
