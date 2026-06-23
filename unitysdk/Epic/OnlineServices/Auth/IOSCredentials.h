#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/IOSCredentialsInternal.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginCredentialType.h"
#include "unitysdk/Epic/OnlineServices/ExternalCredentialType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class IOSCredentialsSystemAuthCredentialsOptions; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x1C4B8F30)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C4B8EB0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C4B8F10)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1C4B8ED0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C4B8EF0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_1_OFFSET UNITYSDK_OFFSET(0x1C4B9350)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x1C4B8F40)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C4B8EC0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_OFFSET UNITYSDK_OFFSET(0x1C4B8F50)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C4B8F20)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1C4B8EE0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C4B8F00)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B94A0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IOSCredentials_TypeDefinitionIndex = 36201;

	class IOSCredentials : public ::System::Object
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::System::String* _Token_k__BackingField; // 0x18
		::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions* _SystemAuthCredentialsOptions_k__BackingField; // 0x20
		::Epic::OnlineServices::ExternalCredentialType _ExternalType_k__BackingField; // 0x28
		::Epic::OnlineServices::Auth::LoginCredentialType _Type_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS__CTOR_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_TOKEN_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Auth::LoginCredentialType get_Type()
		{
			return ((::Epic::OnlineServices::Auth::LoginCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Auth::LoginCredentialType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_TYPE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions* get_SystemAuthCredentialsOptions()
		{
			return ((::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this);
		}

		::System::Void set_SystemAuthCredentialsOptions(::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalCredentialType get_ExternalType()
		{
			return ((::Epic::OnlineServices::ExternalCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_GET_EXTERNALTYPE_OFFSET))(this);
		}

		::System::Void set_ExternalType(::Epic::OnlineServices::ExternalCredentialType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_EXTERNALTYPE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::IOSCredentialsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::IOSCredentialsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALS_SET_1_OFFSET))(this, other);
		}
	};
}
