#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/ClientCredentialsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1D38CB70)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_GET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1D38CB90)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_1_OFFSET UNITYSDK_OFFSET(0x1D38CE30)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1D38CB80)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1D38CBA0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_OFFSET UNITYSDK_OFFSET(0x1D38CBB0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38D150)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int ClientCredentials_TypeDefinitionIndex = 37004;

	class ClientCredentials : public ::System::Object
	{
	public:
		::System::String* _ClientId_k__BackingField; // 0x10
		::System::String* _ClientSecret_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS__CTOR_OFFSET))(this);
		}

		::System::String* get_ClientId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_GET_CLIENTID_OFFSET))(this);
		}

		::System::Void set_ClientId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTID_OFFSET))(this, value);
		}

		::System::String* get_ClientSecret()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_GET_CLIENTSECRET_OFFSET))(this);
		}

		::System::Void set_ClientSecret(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTSECRET_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Platform::ClientCredentialsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Platform::ClientCredentialsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_1_OFFSET))(this, other);
		}
	};
}
