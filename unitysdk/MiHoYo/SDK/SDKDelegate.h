#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SDKDelegate_AsbPathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_CheckHttpDnsPlusEnableDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_DeviceFPRefreshDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_DownloadDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GeNetworkAdapterDescriptionDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDeviceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDeviceFPDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetMacAddressDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkAdapterListDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetRamRemainDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_HttpRequestByHttpDnsPlusDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_HttpRequestBytHttpDnsDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_InputFieldDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_IsEditorDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_IsInStackTopDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadFileDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LogDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_NotificationDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameControlReceiveDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameRoleUpdateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroscopeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnHideNativeUIDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnShowNativeUIDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ResourcePathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SecuritySetLoginResultDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SetAPMAgeGateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ShowTextDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UnLoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UseRuntimeFontDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewAnimationEnable; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewJoypadCloseEnable; }

#define MIHOYO_SDK_SDKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1841F2A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_TypeDefinitionIndex = 7718;

	class SDKDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SDKDelegate_HttpRequestByHttpDnsPlusDelegate** StaticGet_HttpRequestByHttpDnsPlus()
		{
			return (::MiHoYo::SDK::SDKDelegate_HttpRequestByHttpDnsPlusDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAF80);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnHideNativeUIDelegate** StaticGet_OnHideNativeUI()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnHideNativeUIDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAF88);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebEventDelegate** StaticGet_OnGetWebEvent()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebEventDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAF90);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnShowNativeUIDelegate** StaticGet_OnShowNativeUI()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnShowNativeUIDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAF98);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable** StaticGet_OnWebViewJoypadCloseEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFA0);
		}
		static ::MiHoYo::SDK::SDKDelegate_DeviceFPRefreshDelegate** StaticGet_OnDeviceFPRefresh()
		{
			return (::MiHoYo::SDK::SDKDelegate_DeviceFPRefreshDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFA8);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate** StaticGet_GetDriveTotalSpace()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFB0);
		}
		static ::MiHoYo::SDK::SDKDelegate_ShowTextDelegate** StaticGet_MiHoYoSDKShowTextNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_ShowTextDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFB8);
		}
		static ::MiHoYo::SDK::SDKDelegate_IsInStackTopDelegate** StaticGet_IsInStackTop()
		{
			return (::MiHoYo::SDK::SDKDelegate_IsInStackTopDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFC0);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate** StaticGet_GetRamRemain()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFC8);
		}
		static ::MiHoYo::SDK::SDKDelegate_LogDelegate** StaticGet_MiHoYoSDKLogNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_LogDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFD0);
		}
		static ::MiHoYo::SDK::SDKDelegate_InputFieldDelegate** StaticGet_MiHoYoSDKAddInputField()
		{
			return (::MiHoYo::SDK::SDKDelegate_InputFieldDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFD8);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDeviceDelegate** StaticGet_OnGetDevice()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDeviceDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFE0);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate** StaticGet_OnGameControlReceive()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFE8);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate** StaticGet_GetDriveTotalFreeSpace()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFF0);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate** StaticGet_OnGyroscope()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xAFF8);
		}
		static ::MiHoYo::SDK::SDKDelegate_LoadFileDelegate** StaticGet_LoadFile()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadFileDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB000);
		}
		static ::MiHoYo::SDK::SDKDelegate_HttpRequestBytHttpDnsDelegate** StaticGet_HttpRequestBytHttpDns()
		{
			return (::MiHoYo::SDK::SDKDelegate_HttpRequestBytHttpDnsDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB008);
		}
		static ::MiHoYo::SDK::SDKDelegate_DownloadDelegate** StaticGet_MiHoYoSDKDownloadNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_DownloadDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB010);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate** StaticGet_GetDiskFreeSpace()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB018);
		}
		static ::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate** StaticGet_SecuritySetLoginResult()
		{
			return (::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB020);
		}
		static ::MiHoYo::SDK::SDKDelegate_AsbPathDelegate** StaticGet_OnGetAsbPath()
		{
			return (::MiHoYo::SDK::SDKDelegate_AsbPathDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB028);
		}
		static ::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate** StaticGet_UseRuntimeFontHandler()
		{
			return (::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB030);
		}
		static ::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate** StaticGet_OnGetResourcePath()
		{
			return (::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB038);
		}
		static ::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate** StaticGet_UnLoadAsset()
		{
			return (::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB040);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate** StaticGet_GetNetworkType()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB048);
		}
		static ::MiHoYo::SDK::SDKDelegate_NotificationDelegate** StaticGet_MiHoYoSDKNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_NotificationDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB050);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate** StaticGet_OnGameRoleUpdate()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB058);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate** StaticGet_GetMacAddress()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB060);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDeviceFPDelegate** StaticGet_OnGetDeviceFP()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDeviceFPDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB068);
		}
		static ::MiHoYo::SDK::SDKDelegate_CheckHttpDnsPlusEnableDelegate** StaticGet_CheckHttpDnsPlusEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_CheckHttpDnsPlusEnableDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB070);
		}
		static ::MiHoYo::SDK::SDKDelegate_IsEditorDelegate** StaticGet_IsEditor()
		{
			return (::MiHoYo::SDK::SDKDelegate_IsEditorDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB078);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate** StaticGet_GetDiskType()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB080);
		}
		static ::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate** StaticGet_OnGyroEvent()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB088);
		}
		static ::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate** StaticGet_GeNetworkAdapterDescription()
		{
			return (::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB090);
		}
		static ::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate** StaticGet_LoadAsset()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB098);
		}
		static ::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate** StaticGet_SetAPMAgeGate()
		{
			return (::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB0A0);
		}
		static ::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate** StaticGet_GetNetworkAdapterList()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB0A8);
		}
		static ::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable** StaticGet_OnWebViewAnimationEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable**)Il2CppClass::FromTypeDefinitionIndex(SDKDelegate_TypeDefinitionIndex)->GetStaticField(0xB0B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
