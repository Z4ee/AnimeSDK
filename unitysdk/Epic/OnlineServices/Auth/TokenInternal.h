#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthTokenType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class Token; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x34510)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x33EC0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x33D90)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_APP_OFFSET UNITYSDK_OFFSET(0x33AD0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x2E760)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x33C30)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x34040)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x34020)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x34320)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x34300)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x341A0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x34490)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x33F70)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x33E00)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_APP_OFFSET UNITYSDK_OFFSET(0x33B80)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x2E770)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x33CE0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x340F0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x34030)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x34480)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x343D0)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x34310)
#define EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x34250)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int TokenInternal_TypeDefinitionIndex = 46256;

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

		::System::Void set_App(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_APP_OFFSET))(this, a1);
		}

		::System::String* get_ClientId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_CLIENTID_OFFSET))(this);
		}

		::System::Void set_ClientId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_CLIENTID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_AccessToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_ACCESSTOKEN_OFFSET))(this);
		}

		::System::Void set_AccessToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_ACCESSTOKEN_OFFSET))(this, a1);
		}

		::System::Double get_ExpiresIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESIN_OFFSET))(this);
		}

		::System::Void set_ExpiresIn(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESIN_OFFSET))(this, a1);
		}

		::System::String* get_ExpiresAt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_EXPIRESAT_OFFSET))(this);
		}

		::System::Void set_ExpiresAt(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_EXPIRESAT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::AuthTokenType get_AuthType()
		{
			return ((::Epic::OnlineServices::Auth::AuthTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_AUTHTYPE_OFFSET))(this);
		}

		::System::Void set_AuthType(::Epic::OnlineServices::Auth::AuthTokenType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthTokenType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_AUTHTYPE_OFFSET))(this, a1);
		}

		::System::String* get_RefreshToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHTOKEN_OFFSET))(this);
		}

		::System::Void set_RefreshToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHTOKEN_OFFSET))(this, a1);
		}

		::System::Double get_RefreshExpiresIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESIN_OFFSET))(this);
		}

		::System::Void set_RefreshExpiresIn(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESIN_OFFSET))(this, a1);
		}

		::System::String* get_RefreshExpiresAt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_GET_REFRESHEXPIRESAT_OFFSET))(this);
		}

		::System::Void set_RefreshExpiresAt(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_REFRESHEXPIRESAT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::Token* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Token*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKENINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
