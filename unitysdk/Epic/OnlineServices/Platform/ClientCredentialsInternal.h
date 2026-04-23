#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class ClientCredentials; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5B040)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x5AD00)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x5AE60)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5AFD0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x5ADB0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x5AF10)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x5AFC0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int ClientCredentialsInternal_TypeDefinitionIndex = 42564;

	struct alignas(8) ClientCredentialsInternal
	{
		::System::IntPtr m_ClientId; // 0x10
		::System::IntPtr m_ClientSecret; // 0x18

		::System::String* get_ClientId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTID_OFFSET))(this);
		}

		::System::Void set_ClientId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTID_OFFSET))(this, value);
		}

		::System::String* get_ClientSecret()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTSECRET_OFFSET))(this);
		}

		::System::Void set_ClientSecret(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTSECRET_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::ClientCredentials* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::ClientCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
