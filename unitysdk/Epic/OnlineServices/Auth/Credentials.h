#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/CredentialsInternal.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginCredentialType.h"
#include "unitysdk/Epic/OnlineServices/ExternalCredentialType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0xA0D8610)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_ID_OFFSET UNITYSDK_OFFSET(0xA0D8590)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0xA0D85F0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0xA0D85B0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA0D85D0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_1_OFFSET UNITYSDK_OFFSET(0xA0D8B20)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0xA0D8620)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_ID_OFFSET UNITYSDK_OFFSET(0xA0D85A0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_OFFSET UNITYSDK_OFFSET(0xA0D8630)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0xA0D8600)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0xA0D85C0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA0D85E0)
#define EPIC_ONLINESERVICES_AUTH_CREDENTIALS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D8C60)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int Credentials_TypeDefinitionIndex = 43166;

	class Credentials : public ::System::Object
	{
	public:
		::System::String* _Token_k__BackingField; // 0x10
		::System::String* _Id_k__BackingField; // 0x18
		::Epic::OnlineServices::Auth::LoginCredentialType _Type_k__BackingField; // 0x20
		::Epic::OnlineServices::ExternalCredentialType _ExternalType_k__BackingField; // 0x24
		::System::IntPtr _SystemAuthCredentialsOptions_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS__CTOR_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TOKEN_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::LoginCredentialType get_Type()
		{
			return ((::Epic::OnlineServices::Auth::LoginCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Auth::LoginCredentialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_TYPE_OFFSET))(this, a1);
		}

		::System::IntPtr get_SystemAuthCredentialsOptions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this);
		}

		::System::Void set_SystemAuthCredentialsOptions(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalCredentialType get_ExternalType()
		{
			return ((::Epic::OnlineServices::ExternalCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_GET_EXTERNALTYPE_OFFSET))(this);
		}

		::System::Void set_ExternalType(::Epic::OnlineServices::ExternalCredentialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_EXTERNALTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::CredentialsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::CredentialsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_CREDENTIALS_SET_1_OFFSET))(this, a1);
		}
	};
}
