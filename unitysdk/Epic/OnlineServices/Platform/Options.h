#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/PlatformFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Platform { class ClientCredentials; }
namespace Epic::OnlineServices::Platform { class RTCOptions; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_CACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1A9D7F10)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_CLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A9D7E30)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_DEPLOYMENTID_OFFSET UNITYSDK_OFFSET(0x1A9D7ED0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_ENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1A9D7E70)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1A9D7EF0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1A9D7E50)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_OVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1A9D7E90)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_OVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0x1A9D7EB0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1A9D7DF0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_RESERVED_OFFSET UNITYSDK_OFFSET(0x1A9D7DD0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_RTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A9D7F50)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_SANDBOXID_OFFSET UNITYSDK_OFFSET(0x1A9D7E10)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_TICKBUDGETINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1A9D7F30)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_CACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1A9D7F20)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_CLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A9D7E40)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_DEPLOYMENTID_OFFSET UNITYSDK_OFFSET(0x1A9D7EE0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_ENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1A9D7E80)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1A9D7F00)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1A9D7E60)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_OVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1A9D7EA0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_OVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0x1A9D7EC0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1A9D7E00)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0x1A9D7DE0)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_RTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A9D7F60)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_SANDBOXID_OFFSET UNITYSDK_OFFSET(0x1A9D7E20)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_TICKBUDGETINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1A9D7F40)
#define EPIC_ONLINESERVICES_PLATFORM_OPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D7F70)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int Options_TypeDefinitionIndex = 34788;

	class Options : public ::System::Object
	{
	public:
		::System::String* _ProductId_k__BackingField; // 0x10
		::System::String* _DeploymentId_k__BackingField; // 0x18
		::System::String* _OverrideCountryCode_k__BackingField; // 0x20
		::System::String* _SandboxId_k__BackingField; // 0x28
		::Epic::OnlineServices::Platform::RTCOptions* _RTCOptions_k__BackingField; // 0x30
		::Epic::OnlineServices::Platform::ClientCredentials* _ClientCredentials_k__BackingField; // 0x38
		::System::String* _EncryptionKey_k__BackingField; // 0x40
		::System::String* _OverrideLocaleCode_k__BackingField; // 0x48
		::System::String* _CacheDirectory_k__BackingField; // 0x50
		::System::IntPtr _Reserved_k__BackingField; // 0x58
		::Epic::OnlineServices::Platform::PlatformFlags _Flags_k__BackingField; // 0x60
		::System::Boolean _IsServer_k__BackingField; // 0x68
		::System::UInt32 _TickBudgetInMilliseconds_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_Reserved()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_RESERVED_OFFSET))(this);
		}

		::System::Void set_Reserved(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_RESERVED_OFFSET))(this, value);
		}

		::System::String* get_ProductId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_PRODUCTID_OFFSET))(this, value);
		}

		::System::String* get_SandboxId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_SANDBOXID_OFFSET))(this);
		}

		::System::Void set_SandboxId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_SANDBOXID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Platform::ClientCredentials* get_ClientCredentials()
		{
			return ((::Epic::OnlineServices::Platform::ClientCredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_CLIENTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_ClientCredentials(::Epic::OnlineServices::Platform::ClientCredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::ClientCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_CLIENTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_IsServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_ISSERVER_OFFSET))(this);
		}

		::System::Void set_IsServer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_ISSERVER_OFFSET))(this, value);
		}

		::System::String* get_EncryptionKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_ENCRYPTIONKEY_OFFSET))(this);
		}

		::System::Void set_EncryptionKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_ENCRYPTIONKEY_OFFSET))(this, value);
		}

		::System::String* get_OverrideCountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_OVERRIDECOUNTRYCODE_OFFSET))(this);
		}

		::System::Void set_OverrideCountryCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_OVERRIDECOUNTRYCODE_OFFSET))(this, value);
		}

		::System::String* get_OverrideLocaleCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_OVERRIDELOCALECODE_OFFSET))(this);
		}

		::System::Void set_OverrideLocaleCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_OVERRIDELOCALECODE_OFFSET))(this, value);
		}

		::System::String* get_DeploymentId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_DEPLOYMENTID_OFFSET))(this);
		}

		::System::Void set_DeploymentId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_DEPLOYMENTID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Platform::PlatformFlags get_Flags()
		{
			return ((::Epic::OnlineServices::Platform::PlatformFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::Epic::OnlineServices::Platform::PlatformFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::PlatformFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_FLAGS_OFFSET))(this, value);
		}

		::System::String* get_CacheDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_CACHEDIRECTORY_OFFSET))(this);
		}

		::System::Void set_CacheDirectory(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_CACHEDIRECTORY_OFFSET))(this, value);
		}

		::System::UInt32 get_TickBudgetInMilliseconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_TICKBUDGETINMILLISECONDS_OFFSET))(this);
		}

		::System::Void set_TickBudgetInMilliseconds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_TICKBUDGETINMILLISECONDS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Platform::RTCOptions* get_RTCOptions()
		{
			return ((::Epic::OnlineServices::Platform::RTCOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_GET_RTCOPTIONS_OFFSET))(this);
		}

		::System::Void set_RTCOptions(::Epic::OnlineServices::Platform::RTCOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::RTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_OPTIONS_SET_RTCOPTIONS_OFFSET))(this, value);
		}
	};
}
