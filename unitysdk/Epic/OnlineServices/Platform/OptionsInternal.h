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

#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B72A0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9B7230)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9B7100)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9B6D10)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_DEPLOYMENTID_OFFSET UNITYSDK_OFFSET(0x9B7040)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x9B6E30)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9B70F0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x9B6D80)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9B7220)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9B6EE0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0x9B6F90)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9B6BB0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x462A80)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x9B71B0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_SANDBOXID_OFFSET UNITYSDK_OFFSET(0x9B6C60)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_TICKBUDGETINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x96F200)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int OptionsInternal_TypeDefinitionIndex = 37011;

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

		::System::Void set_Reserved(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RESERVED_OFFSET))(this, value);
		}

		::System::Void set_ProductId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_PRODUCTID_OFFSET))(this, value);
		}

		::System::Void set_SandboxId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_SANDBOXID_OFFSET))(this, value);
		}

		::System::Void set_ClientCredentials(::Epic::OnlineServices::Platform::ClientCredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::ClientCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CLIENTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Void set_IsServer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ISSERVER_OFFSET))(this, value);
		}

		::System::Void set_EncryptionKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_ENCRYPTIONKEY_OFFSET))(this, value);
		}

		::System::Void set_OverrideCountryCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDECOUNTRYCODE_OFFSET))(this, value);
		}

		::System::Void set_OverrideLocaleCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OVERRIDELOCALECODE_OFFSET))(this, value);
		}

		::System::Void set_DeploymentId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_DEPLOYMENTID_OFFSET))(this, value);
		}

		::System::Void set_Flags(::Epic::OnlineServices::Platform::PlatformFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::PlatformFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Void set_CacheDirectory(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_CACHEDIRECTORY_OFFSET))(this, value);
		}

		::System::Void set_TickBudgetInMilliseconds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_TICKBUDGETINMILLISECONDS_OFFSET))(this, value);
		}

		::System::Void set_RTCOptions(::Epic::OnlineServices::Platform::RTCOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::RTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_RTCOPTIONS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::Options* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::Options*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
