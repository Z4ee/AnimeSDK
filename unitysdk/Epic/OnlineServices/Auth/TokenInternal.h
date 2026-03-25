#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthTokenType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class Token; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E220)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x2DBE0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2DAB0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_APP_OFFSET UNITYSDK_OFFSET(0x2D7F0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x29060)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x2D950)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x2DD60)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x2DD40)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x2E040)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x2E020)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x2DEC0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2E1B0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x2DC90)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x2DB20)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_APP_OFFSET UNITYSDK_OFFSET(0x2D8A0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x29070)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x2DA00)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x2DE10)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x2DD50)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2E1A0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x2E0F0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x2E030)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x2DF70)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int TokenInternal_TypeDefinitionIndex = 36584;

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
