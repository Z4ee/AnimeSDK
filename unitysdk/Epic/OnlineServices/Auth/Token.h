#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthTokenType.h"
#include "unitysdk/Epic/OnlineServices/Auth/TokenInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BBC0370)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1BBC0350)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_APP_OFFSET UNITYSDK_OFFSET(0x1BBC0310)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x1BBC03D0)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1BBC0330)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x1BBC03B0)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x1BBC0390)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x1BBC0430)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x1BBC0410)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_GET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x1BBC03F0)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_1_OFFSET UNITYSDK_OFFSET(0x1BBC11D0)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_ACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BBC0380)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1BBC0360)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_APP_OFFSET UNITYSDK_OFFSET(0x1BBC0320)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_AUTHTYPE_OFFSET UNITYSDK_OFFSET(0x1BBC03E0)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1BBC0340)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_EXPIRESAT_OFFSET UNITYSDK_OFFSET(0x1BBC03C0)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_EXPIRESIN_OFFSET UNITYSDK_OFFSET(0x1BBC03A0)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_OFFSET UNITYSDK_OFFSET(0x1BBC0450)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_REFRESHEXPIRESAT_OFFSET UNITYSDK_OFFSET(0x1BBC0440)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_REFRESHEXPIRESIN_OFFSET UNITYSDK_OFFSET(0x1BBC0420)
#define EPIC_ONLINESERVICES_AUTH_TOKEN_SET_REFRESHTOKEN_OFFSET UNITYSDK_OFFSET(0x1BBC0400)
#define EPIC_ONLINESERVICES_AUTH_TOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC1330)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 44073;

	class Token : public ::System::Object
	{
	public:
		::System::String* _AccessToken_k__BackingField; // 0x10
		::System::String* _RefreshExpiresAt_k__BackingField; // 0x18
		::System::String* _ExpiresAt_k__BackingField; // 0x20
		::System::String* _RefreshToken_k__BackingField; // 0x28
		::System::String* _ClientId_k__BackingField; // 0x30
		::System::String* _App_k__BackingField; // 0x38
		::Epic::OnlineServices::EpicAccountId* _AccountId_k__BackingField; // 0x40
		::System::Double _ExpiresIn_k__BackingField; // 0x48
		::Epic::OnlineServices::Auth::AuthTokenType _AuthType_k__BackingField; // 0x50
		::System::Double _RefreshExpiresIn_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN__CTOR_OFFSET))(this);
		}

		::System::String* get_App()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_APP_OFFSET))(this);
		}

		::System::Void set_App(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_APP_OFFSET))(this, a1);
		}

		::System::String* get_ClientId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_CLIENTID_OFFSET))(this);
		}

		::System::Void set_ClientId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_CLIENTID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_AccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_AccessToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_ACCESSTOKEN_OFFSET))(this);
		}

		::System::Void set_AccessToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_ACCESSTOKEN_OFFSET))(this, a1);
		}

		::System::Double get_ExpiresIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_EXPIRESIN_OFFSET))(this);
		}

		::System::Void set_ExpiresIn(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_EXPIRESIN_OFFSET))(this, a1);
		}

		::System::String* get_ExpiresAt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_EXPIRESAT_OFFSET))(this);
		}

		::System::Void set_ExpiresAt(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_EXPIRESAT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::AuthTokenType get_AuthType()
		{
			return ((::Epic::OnlineServices::Auth::AuthTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_AUTHTYPE_OFFSET))(this);
		}

		::System::Void set_AuthType(::Epic::OnlineServices::Auth::AuthTokenType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthTokenType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_AUTHTYPE_OFFSET))(this, a1);
		}

		::System::String* get_RefreshToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_REFRESHTOKEN_OFFSET))(this);
		}

		::System::Void set_RefreshToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_REFRESHTOKEN_OFFSET))(this, a1);
		}

		::System::Double get_RefreshExpiresIn()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_REFRESHEXPIRESIN_OFFSET))(this);
		}

		::System::Void set_RefreshExpiresIn(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_REFRESHEXPIRESIN_OFFSET))(this, a1);
		}

		::System::String* get_RefreshExpiresAt()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_GET_REFRESHEXPIRESAT_OFFSET))(this);
		}

		::System::Void set_RefreshExpiresAt(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_REFRESHEXPIRESAT_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::TokenInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::TokenInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_TOKEN_SET_1_OFFSET))(this, a1);
		}
	};
}
