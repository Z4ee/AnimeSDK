#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ExternalCredentialType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class Credentials; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AA1D0)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x9A9F90)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x325D00)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9AA1C0)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9AA0F0)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x9AA040)
#define EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x5B0840)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int CredentialsInternal_TypeDefinitionIndex = 36722;

	struct alignas(8) CredentialsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Token; // 0x18
		::Epic::OnlineServices::ExternalCredentialType m_Type; // 0x20

		::System::String* get_Token()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_TOKEN_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ExternalCredentialType get_Type()
		{
			return ((::Epic::OnlineServices::ExternalCredentialType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::ExternalCredentialType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ExternalCredentialType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_TYPE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::Credentials* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::Credentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_CREDENTIALSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
