#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/PlatformFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Platform { class ClientCredentials; }
namespace Epic::OnlineServices::Platform { class WindowsRTCOptions; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_CACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0xA31C050)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_CLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0xA31BF70)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_DEPLOYMENTID_OFFSET UNITYSDK_OFFSET(0xA31C010)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_ENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0xA31BFB0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA31C030)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0xA31BF90)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_OVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xA31BFD0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_OVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0xA31BFF0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xA31BF30)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_RESERVED_OFFSET UNITYSDK_OFFSET(0xA31BF10)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_RTCOPTIONS_OFFSET UNITYSDK_OFFSET(0xA31C090)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_SANDBOXID_OFFSET UNITYSDK_OFFSET(0xA31BF50)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_TICKBUDGETINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xA31C070)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_CACHEDIRECTORY_OFFSET UNITYSDK_OFFSET(0xA31C060)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_CLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0xA31BF80)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_DEPLOYMENTID_OFFSET UNITYSDK_OFFSET(0xA31C020)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_ENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0xA31BFC0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA31C040)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_ISSERVER_OFFSET UNITYSDK_OFFSET(0xA31BFA0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_OVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xA31BFE0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_OVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0xA31C000)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xA31BF40)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_RESERVED_OFFSET UNITYSDK_OFFSET(0xA31BF20)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_RTCOPTIONS_OFFSET UNITYSDK_OFFSET(0xA31C0A0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_SANDBOXID_OFFSET UNITYSDK_OFFSET(0xA31BF60)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_TICKBUDGETINMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xA31C080)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA31C0B0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int WindowsOptions_TypeDefinitionIndex = 43379;

	class WindowsOptions : public ::System::Object
	{
	public:
		::System::String* _CacheDirectory_k__BackingField; // 0x10
		::System::String* _SandboxId_k__BackingField; // 0x18
		::System::String* _ProductId_k__BackingField; // 0x20
		::Epic::OnlineServices::Platform::ClientCredentials* _ClientCredentials_k__BackingField; // 0x28
		::System::String* _OverrideLocaleCode_k__BackingField; // 0x30
		::System::String* _OverrideCountryCode_k__BackingField; // 0x38
		::System::String* _DeploymentId_k__BackingField; // 0x40
		::System::String* _EncryptionKey_k__BackingField; // 0x48
		::Epic::OnlineServices::Platform::WindowsRTCOptions* _RTCOptions_k__BackingField; // 0x50
		::Epic::OnlineServices::Platform::PlatformFlags _Flags_k__BackingField; // 0x58
		::System::IntPtr _Reserved_k__BackingField; // 0x60
		::System::UInt32 _TickBudgetInMilliseconds_k__BackingField; // 0x68
		::System::Boolean _IsServer_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_Reserved()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_RESERVED_OFFSET))(this);
		}

		::System::Void set_Reserved(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_RESERVED_OFFSET))(this, a1);
		}

		::System::String* get_ProductId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_PRODUCTID_OFFSET))(this, a1);
		}

		::System::String* get_SandboxId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_SANDBOXID_OFFSET))(this);
		}

		::System::Void set_SandboxId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_SANDBOXID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Platform::ClientCredentials* get_ClientCredentials()
		{
			return ((::Epic::OnlineServices::Platform::ClientCredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_CLIENTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_ClientCredentials(::Epic::OnlineServices::Platform::ClientCredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::ClientCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_CLIENTCREDENTIALS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_ISSERVER_OFFSET))(this);
		}

		::System::Void set_IsServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_ISSERVER_OFFSET))(this, a1);
		}

		::System::String* get_EncryptionKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_ENCRYPTIONKEY_OFFSET))(this);
		}

		::System::Void set_EncryptionKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_ENCRYPTIONKEY_OFFSET))(this, a1);
		}

		::System::String* get_OverrideCountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_OVERRIDECOUNTRYCODE_OFFSET))(this);
		}

		::System::Void set_OverrideCountryCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_OVERRIDECOUNTRYCODE_OFFSET))(this, a1);
		}

		::System::String* get_OverrideLocaleCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_OVERRIDELOCALECODE_OFFSET))(this);
		}

		::System::Void set_OverrideLocaleCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_OVERRIDELOCALECODE_OFFSET))(this, a1);
		}

		::System::String* get_DeploymentId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_DEPLOYMENTID_OFFSET))(this);
		}

		::System::Void set_DeploymentId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_DEPLOYMENTID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Platform::PlatformFlags get_Flags()
		{
			return ((::Epic::OnlineServices::Platform::PlatformFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::Epic::OnlineServices::Platform::PlatformFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::PlatformFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::String* get_CacheDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_CACHEDIRECTORY_OFFSET))(this);
		}

		::System::Void set_CacheDirectory(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_CACHEDIRECTORY_OFFSET))(this, a1);
		}

		::System::UInt32 get_TickBudgetInMilliseconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_TICKBUDGETINMILLISECONDS_OFFSET))(this);
		}

		::System::Void set_TickBudgetInMilliseconds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_TICKBUDGETINMILLISECONDS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Platform::WindowsRTCOptions* get_RTCOptions()
		{
			return ((::Epic::OnlineServices::Platform::WindowsRTCOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_GET_RTCOPTIONS_OFFSET))(this);
		}

		::System::Void set_RTCOptions(::Epic::OnlineServices::Platform::WindowsRTCOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::WindowsRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSOPTIONS_SET_RTCOPTIONS_OFFSET))(this, a1);
		}
	};
}
