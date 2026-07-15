#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/ClientCredentialsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_GET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1C230570)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_GET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1C230590)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_1_OFFSET UNITYSDK_OFFSET(0x1C230990)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTID_OFFSET UNITYSDK_OFFSET(0x1C230580)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTSECRET_OFFSET UNITYSDK_OFFSET(0x1C2305A0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_OFFSET UNITYSDK_OFFSET(0x1C2305B0)
#define EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C230AB0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int ClientCredentials_TypeDefinitionIndex = 44227;

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

		::System::Void set_ClientId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTID_OFFSET))(this, a1);
		}

		::System::String* get_ClientSecret()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_GET_CLIENTSECRET_OFFSET))(this);
		}

		::System::Void set_ClientSecret(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_CLIENTSECRET_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Platform::ClientCredentialsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Platform::ClientCredentialsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_CLIENTCREDENTIALS_SET_1_OFFSET))(this, a1);
		}
	};
}
