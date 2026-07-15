#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class ClientCredentials; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AAFA50)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x3AAF700)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x3AAF860)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAF9D0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x3AAF7B0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x3AAF910)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAF9C0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int ClientCredentialsInternal_TypeDefinitionIndex = 44228;

	struct alignas(8) ClientCredentialsInternal
	{
		::System::IntPtr m_ClientId; // 0x10
		::System::IntPtr m_ClientSecret; // 0x18

		::System::String* get_ClientId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTID_OFFSET))(this);
		}

		::System::Void set_ClientId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTID_OFFSET))(this, a1);
		}

		::System::String* get_ClientSecret()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_GET_CLIENTSECRET_OFFSET))(this);
		}

		::System::Void set_ClientSecret(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_CLIENTSECRET_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::ClientCredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::ClientCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
