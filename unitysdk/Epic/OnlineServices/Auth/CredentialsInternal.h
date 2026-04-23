#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginCredentialType.h"
#include "unitysdk/Epic/OnlineServices/ExternalCredentialType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class Credentials; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10540)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x104B0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x101E0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0x104A0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x10340)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x5E00)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x104D0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0xBA10)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x10290)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x104C0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0xB390)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x103F0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBC50)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int CredentialsInternal_TypeDefinitionIndex = 42364;

	struct alignas(8) CredentialsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Id; // 0x18
		::System::IntPtr m_Token; // 0x20
		::Epic::OnlineServices::Auth::LoginCredentialType m_Type; // 0x28
		::System::IntPtr m_SystemAuthCredentialsOptions; // 0x30
		::Epic::OnlineServices::ExternalCredentialType m_ExternalType; // 0x38

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_TOKEN_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Auth::LoginCredentialType get_Type()
		{
			return ((::Epic::OnlineServices::Auth::LoginCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Auth::LoginCredentialType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_TYPE_OFFSET))(this, value);
		}

		::System::IntPtr get_SystemAuthCredentialsOptions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this);
		}

		::System::Void set_SystemAuthCredentialsOptions(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalCredentialType get_ExternalType()
		{
			return ((::Epic::OnlineServices::ExternalCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_GET_EXTERNALTYPE_OFFSET))(this);
		}

		::System::Void set_ExternalType(::Epic::OnlineServices::ExternalCredentialType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_EXTERNALTYPE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::Credentials* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Credentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
