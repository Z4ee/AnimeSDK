#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginCredentialType.h"
#include "unitysdk/Epic/OnlineServices/ExternalCredentialType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class IOSCredentials; }
namespace Epic::OnlineServices::Auth { class IOSCredentialsSystemAuthCredentialsOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AAA210)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x7C2FF0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x3AA9DE0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0x3AAA0A0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x3AA9F40)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x7A7FB0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAA190)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_EXTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x394E4C0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x3AA9E90)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAA180)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET UNITYSDK_OFFSET(0x3AAA110)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x3AA9FF0)
#define EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x38ECC60)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IOSCredentialsInternal_TypeDefinitionIndex = 44084;

	struct alignas(8) IOSCredentialsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Id; // 0x18
		::System::IntPtr m_Token; // 0x20
		::Epic::OnlineServices::Auth::LoginCredentialType m_Type; // 0x28
		::System::IntPtr m_SystemAuthCredentialsOptions; // 0x30
		::Epic::OnlineServices::ExternalCredentialType m_ExternalType; // 0x38

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_TOKEN_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::LoginCredentialType get_Type()
		{
			return ((::Epic::OnlineServices::Auth::LoginCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Auth::LoginCredentialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_TYPE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions* get_SystemAuthCredentialsOptions()
		{
			return ((::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this);
		}

		::System::Void set_SystemAuthCredentialsOptions(::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSCredentialsSystemAuthCredentialsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_SYSTEMAUTHCREDENTIALSOPTIONS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ExternalCredentialType get_ExternalType()
		{
			return ((::Epic::OnlineServices::ExternalCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_GET_EXTERNALTYPE_OFFSET))(this);
		}

		::System::Void set_ExternalType(::Epic::OnlineServices::ExternalCredentialType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_EXTERNALTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::IOSCredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSCREDENTIALSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
