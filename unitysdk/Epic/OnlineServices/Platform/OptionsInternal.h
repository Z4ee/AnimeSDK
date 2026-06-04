#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/ClientCredentialsInternal.h"
#include "unitysdk/Epic/OnlineServices/Platform/PlatformFlags.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class ClientCredentials; }
namespace Epic::OnlineServices::Platform { class Options; }
namespace Epic::OnlineServices::Platform { class RTCOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x60E10)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x60D90)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x60C60)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x60870)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_DEPLOYMENTID_OFFSET UNITYSDK_OFFSET(0x60BA0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x60990)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x60C50)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x608E0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x60D80)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x60A40)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0x60AF0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x60710)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x95B0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x60D10)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_SANDBOXID_OFFSET UNITYSDK_OFFSET(0x607C0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_TICKBUDGETINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xBFB0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int OptionsInternal_TypeDefinitionIndex = 43373;

	struct alignas(8) OptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Reserved; // 0x18
		::System::IntPtr m_ProductId; // 0x20
		::System::IntPtr m_SandboxId; // 0x28
		::Epic::OnlineServices::Platform::ClientCredentialsInternal m_ClientCredentials; // 0x30
		::System::Int32 m_IsServer; // 0x40
		::System::IntPtr m_EncryptionKey; // 0x48
		::System::IntPtr m_OverrideCountryCode; // 0x50
		::System::IntPtr m_OverrideLocaleCode; // 0x58
		::System::IntPtr m_DeploymentId; // 0x60
		::Epic::OnlineServices::Platform::PlatformFlags m_Flags; // 0x68
		::System::IntPtr m_CacheDirectory; // 0x70
		::System::UInt32 m_TickBudgetInMilliseconds; // 0x78
		::System::IntPtr m_RTCOptions; // 0x80

		::System::Void set_Reserved(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RESERVED_OFFSET))(this, a1);
		}

		::System::Void set_ProductId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_PRODUCTID_OFFSET))(this, a1);
		}

		::System::Void set_SandboxId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_SANDBOXID_OFFSET))(this, a1);
		}

		::System::Void set_ClientCredentials(::Epic::OnlineServices::Platform::ClientCredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::ClientCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CLIENTCREDENTIALS_OFFSET))(this, a1);
		}

		::System::Void set_IsServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ISSERVER_OFFSET))(this, a1);
		}

		::System::Void set_EncryptionKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ENCRYPTIONKEY_OFFSET))(this, a1);
		}

		::System::Void set_OverrideCountryCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDECOUNTRYCODE_OFFSET))(this, a1);
		}

		::System::Void set_OverrideLocaleCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDELOCALECODE_OFFSET))(this, a1);
		}

		::System::Void set_DeploymentId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_DEPLOYMENTID_OFFSET))(this, a1);
		}

		::System::Void set_Flags(::Epic::OnlineServices::Platform::PlatformFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::PlatformFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::Void set_CacheDirectory(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CACHEDIRECTORY_OFFSET))(this, a1);
		}

		::System::Void set_TickBudgetInMilliseconds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_TICKBUDGETINMILLISECONDS_OFFSET))(this, a1);
		}

		::System::Void set_RTCOptions(::Epic::OnlineServices::Platform::RTCOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::RTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RTCOPTIONS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::Options* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::Options*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
