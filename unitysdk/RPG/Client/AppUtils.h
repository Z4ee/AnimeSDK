#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D0231C413D78CFA.h"
#include "unitysdk/RPG/Client/AppUtils_CNameData.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeString.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text::RegularExpressions { class Regex; }
namespace System::Threading { class Thread; }

#define RPG_CLIENT_APPUTILS_CLEARCHECKSUMRESULTS_OFFSET UNITYSDK_OFFSET(0x90D44F0)
#define RPG_CLIENT_APPUTILS_CULTURECHECK_OFFSET UNITYSDK_OFFSET(0x90D4560)
#define RPG_CLIENT_APPUTILS_GETANDROIDSOCNAME_OFFSET UNITYSDK_OFFSET(0x90D3300)
#define RPG_CLIENT_APPUTILS_GETCHECKSUMBYINDEX_OFFSET UNITYSDK_OFFSET(0x90D4080)
#define RPG_CLIENT_APPUTILS_GETCPS_OFFSET UNITYSDK_OFFSET(0x90D4A00)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFOWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x90D1A40)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x90D1800)
#define RPG_CLIENT_APPUTILS_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x90D2E30)
#define RPG_CLIENT_APPUTILS_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x90D1760)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x90D3340)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x90D2E80)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x90D2EC0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x90D2FB0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x90D2FF0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x90D3380)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x90D3030)
#define RPG_CLIENT_APPUTILS_GETLOCALTIMEZONE_OFFSET UNITYSDK_OFFSET(0x90D3EE0)
#define RPG_CLIENT_APPUTILS_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x90D2DE0)
#define RPG_CLIENT_APPUTILS_GETPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x90D17A0)
#define RPG_CLIENT_APPUTILS_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x90D3070)
#define RPG_CLIENT_APPUTILS_GETPROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x90D3130)
#define RPG_CLIENT_APPUTILS_GETPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x90D31F0)
#define RPG_CLIENT_APPUTILS_GETRESOLUTION_OFFSET UNITYSDK_OFFSET(0x90D3FB0)
#define RPG_CLIENT_APPUTILS_GETRPGDEVICEID_OFFSET UNITYSDK_OFFSET(0x90D47D0)
#define RPG_CLIENT_APPUTILS_GETSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x90D3240)
#define RPG_CLIENT_APPUTILS_GETVIDEOSETTING_OFFSET UNITYSDK_OFFSET(0x90D33C0)
#define RPG_CLIENT_APPUTILS_GET_DPI_OFFSET UNITYSDK_OFFSET(0x90CF3F0)
#define RPG_CLIENT_APPUTILS_GET_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x90CFED0)
#define RPG_CLIENT_APPUTILS_GET_ISANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0030)
#define RPG_CLIENT_APPUTILS_GET_ISAPPLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0060)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0240)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0270)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0E30)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0C10)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0E60)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x90CF250)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEGAMEPAD_OFFSET UNITYSDK_OFFSET(0x90D11C0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEKEYBOARDMOUSE_OFFSET UNITYSDK_OFFSET(0x90D0FF0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSETOUCH_OFFSET UNITYSDK_OFFSET(0x90D1220)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBANDROID_OFFSET UNITYSDK_OFFSET(0x90D0AF0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBIOS_OFFSET UNITYSDK_OFFSET(0x90D0B20)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBKEYBOARD_OFFSET UNITYSDK_OFFSET(0x90D0BE0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBMAC_OFFSET UNITYSDK_OFFSET(0x90D0B80)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPC_OFFSET UNITYSDK_OFFSET(0x90D0B50)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0920)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBTOUCH_OFFSET UNITYSDK_OFFSET(0x90D0BB0)
#define RPG_CLIENT_APPUTILS_GET_ISDEBUG_OFFSET UNITYSDK_OFFSET(0x90D4FC0)
#define RPG_CLIENT_APPUTILS_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x90CFFA0)
#define RPG_CLIENT_APPUTILS_GET_ISMACEDITOR_OFFSET UNITYSDK_OFFSET(0x90D0010)
#define RPG_CLIENT_APPUTILS_GET_ISMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0160)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEORCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0DA0)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0090)
#define RPG_CLIENT_APPUTILS_GET_ISNETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x90D02A0)
#define RPG_CLIENT_APPUTILS_GET_ISOVERSEA_OFFSET UNITYSDK_OFFSET(0x90D4FF0)
#define RPG_CLIENT_APPUTILS_GET_ISPCLAYOUT_OFFSET UNITYSDK_OFFSET(0x90D0E90)
#define RPG_CLIENT_APPUTILS_GET_ISPROFILE_OFFSET UNITYSDK_OFFSET(0x90D4FD0)
#define RPG_CLIENT_APPUTILS_GET_ISPS4PLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0200)
#define RPG_CLIENT_APPUTILS_GET_ISPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0220)
#define RPG_CLIENT_APPUTILS_GET_ISPSPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0180)
#define RPG_CLIENT_APPUTILS_GET_ISRELEASE_OFFSET UNITYSDK_OFFSET(0x90D4FE0)
#define RPG_CLIENT_APPUTILS_GET_ISWIFI_OFFSET UNITYSDK_OFFSET(0x90D02C0)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSEDITOR_OFFSET UNITYSDK_OFFSET(0x90CFFF0)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSPLATFORM_OFFSET UNITYSDK_OFFSET(0x90D0130)
#define RPG_CLIENT_APPUTILS_GET_NETWORKREACHABILITY_OFFSET UNITYSDK_OFFSET(0x90D02F0)
#define RPG_CLIENT_APPUTILS_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x90D13D0)
#define RPG_CLIENT_APPUTILS_GET_SUPPORTMETALFX_OFFSET UNITYSDK_OFFSET(0x90D0300)
#define RPG_CLIENT_APPUTILS_GET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x90D4EE0)
#define RPG_CLIENT_APPUTILS_INITPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x90D0360)
#define RPG_CLIENT_APPUTILS_LAUNCHCHECKSUMTHREAD_OFFSET UNITYSDK_OFFSET(0x90D4180)
#define RPG_CLIENT_APPUTILS_QUERYURLCNAME_OFFSET UNITYSDK_OFFSET(0x90CF770)
#define RPG_CLIENT_APPUTILS_REDIRECTTOTAPTAP_OFFSET UNITYSDK_OFFSET(0x90D4B50)
#define RPG_CLIENT_APPUTILS_REPLACELOCALTIME_OFFSET UNITYSDK_OFFSET(0x90CFAA0)
#define RPG_CLIENT_APPUTILS_RESETDPI_OFFSET UNITYSDK_OFFSET(0x90CF700)
#define RPG_CLIENT_APPUTILS_RESETUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x90D4C90)
#define RPG_CLIENT_APPUTILS_SETDEVICEFINGERPRINT_OFFSET UNITYSDK_OFFSET(0x90D1280)
#define RPG_CLIENT_APPUTILS_SETRAWCULTUREINFO_OFFSET UNITYSDK_OFFSET(0x90D4740)
#define RPG_CLIENT_APPUTILS_SETSERIALNUMBERDIRTY_OFFSET UNITYSDK_OFFSET(0x90D1370)
#define RPG_CLIENT_APPUTILS_SET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x90D4F90)
#define RPG_CLIENT_APPUTILS_WAITCHECKSUMCOMPUTE_OFFSET UNITYSDK_OFFSET(0x90D4360)
#define RPG_CLIENT_APPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x90D4B90)
#define RPG_CLIENT_APPUTILS__CLOUDINIT_OFFSET UNITYSDK_OFFSET(0x90CEFC0)
#define RPG_CLIENT_APPUTILS__GETDPI_OFFSET UNITYSDK_OFFSET(0x90CEF60)
#define RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYSCREENRATIO_OFFSET UNITYSDK_OFFSET(0x90D4E70)
#define RPG_CLIENT_APPUTILS__INITDPISETTING_OFFSET UNITYSDK_OFFSET(0x90CEE60)
#define RPG_CLIENT_APPUTILS__INITUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x90D4CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils_TypeDefinitionIndex = 47930;

	class AppUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_LOCALTIMEZONE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD3D0);
		}
		static ::System::String** StaticGet_mSerialNumber()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD3D8);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_TimeRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD3E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_checksumResults()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD3E8);
		}
		static ::System::Globalization::CultureInfo** StaticGet_RawCultureInfo()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD3F0);
		}
		static ::System::String** StaticGet_DeviceFingerPrint()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD3F8);
		}
		static ::System::Threading::Thread** StaticGet_checksumComputeThread()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD400);
		}
		static ::System::String** StaticGet_LOCALZONE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0xD408);
		}
		static ::Enum_3_7D0231C413D78CFA* StaticGet__PlatformType()
		{
			return (::Enum_3_7D0231C413D78CFA*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AE0);
		}
		static ::System::Single* StaticGet__dpi()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AE4);
		}
		static ::System::Int32* StaticGet__LastDeviceHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AE8);
		}
		static ::System::Int32* StaticGet__OrigDeviceWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AEC);
		}
		static ::RPG::GameCore::UIAdaptiveDeviceType* StaticGet__uiAdaptiveDeviceType()
		{
			return (::RPG::GameCore::UIAdaptiveDeviceType*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AF0);
		}
		static ::System::Single* StaticGet_DefaultBezelLessScreenMaxIndent()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AF4);
		}
		static ::System::Boolean* StaticGet_IsSerialNumberDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AF8);
		}
		static ::System::Boolean* StaticGet__IsUiAdaptiveDeviceTypeInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AF9);
		}
		static ::System::Single* StaticGet__ScreenRatioPad()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4AFC);
		}
		static ::System::Int32* StaticGet__LastDeviceWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4B00);
		}
		static ::System::Int32* StaticGet__OrigDeviceHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4B04);
		}
		// static const ::System::Single DEFAULT_DPI; // 0x0
		// static const ::System::String* taptap_game_appID; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void _InitDPISetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__INITDPISETTING_OFFSET))();
		}

		static ::System::Single _GetDpi()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__GETDPI_OFFSET))();
		}

		static ::System::Void _CloudInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__CLOUDINIT_OFFSET))();
		}

		static ::System::Single get_Dpi()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_DPI_OFFSET))();
		}

		static ::System::Void ResetDpi()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_RESETDPI_OFFSET))();
		}

		static ::RPG::Client::AppUtils_CNameData QueryUrlCName(::System::String* url)
		{
			return ((::RPG::Client::AppUtils_CNameData(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_QUERYURLCNAME_OFFSET))(url);
		}

		static ::System::String* ReplaceLocalTime(::System::String* timestr)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_REPLACELOCALTIME_OFFSET))(timestr);
		}

		static ::System::String* get_GetPlatformName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_GETPLATFORMNAME_OFFSET))();
		}

		static ::System::Boolean get_IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISEDITOR_OFFSET))();
		}

		static ::System::Boolean get_IsWindowsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISWINDOWSEDITOR_OFFSET))();
		}

		static ::System::Boolean get_IsMacEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMACEDITOR_OFFSET))();
		}

		static ::System::Boolean get_IsAndroidPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISANDROIDPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsApplePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISAPPLEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsWindowsPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISWINDOWSPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsMacPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMACPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPSPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPSPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPS4Platform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPS4PLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPS5Platform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPS5PLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudAndroidPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudIOSPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsNetAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISNETAVAILABLE_OFFSET))();
		}

		static ::System::Boolean get_IsWifi()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISWIFI_OFFSET))();
		}

		static ::UnityEngine::NetworkReachability get_NetworkReachability()
		{
			return ((::UnityEngine::NetworkReachability(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_NETWORKREACHABILITY_OFFSET))();
		}

		static ::System::Boolean get_SupportMetalFX()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_SUPPORTMETALFX_OFFSET))();
		}

		static ::System::Boolean get_IsCloudPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDPLATFORM_OFFSET))();
		}

		static ::System::Void InitPlatformType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_INITPLATFORMTYPE_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsMobileOrCloudMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMOBILEORCLOUDMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebAndroid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBANDROID_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebIOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBIOS_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebPC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPC_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebMac()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBMAC_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebTouch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBTOUCH_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebKeyboard()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBKEYBOARD_OFFSET))();
		}

		static ::System::Boolean get_IsCloudMacPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDMACPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudPCPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPCLayout()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPCLAYOUT_OFFSET))();
		}

		static ::System::Boolean get_IsCloudUseTouch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDUSETOUCH_OFFSET))();
		}

		static ::System::Boolean get_IsCloudUseKeyboardMouse()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEKEYBOARDMOUSE_OFFSET))();
		}

		static ::System::Boolean get_IsCloudUseGamePad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEGAMEPAD_OFFSET))();
		}

		static ::System::Void SetDeviceFingerPrint(::System::String* print)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETDEVICEFINGERPRINT_OFFSET))(print);
		}

		static ::System::Void SetSerialNumberDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETSERIALNUMBERDIRTY_OFFSET))();
		}

		static ::System::String* get_SerialNumber()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_SERIALNUMBER_OFFSET))();
		}

		static ::Enum_3_7D0231C413D78CFA GetPlatformType()
		{
			return ((::Enum_3_7D0231C413D78CFA(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPLATFORMTYPE_OFFSET))();
		}

		static ::System::String* GetDeviceInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEINFO_OFFSET))();
		}

		static ::UnityEngine::NativeString GetDeviceInfoWithNativeString()
		{
			return ((::UnityEngine::NativeString(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEINFOWITHNATIVESTRING_OFFSET))();
		}

		static ::System::String* GetVideoSetting()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETVIDEOSETTING_OFFSET))();
		}

		static ::System::String* GetLocalTimeZone()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETLOCALTIMEZONE_OFFSET))();
		}

		static ::System::String* GetOperatingSystem()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETOPERATINGSYSTEM_OFFSET))();
		}

		static ::System::Int32 GetGraphicsDeviceID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEID_OFFSET))();
		}

		static ::System::String* GetDeviceModel()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEMODEL_OFFSET))();
		}

		static ::System::Int32 GetGraphicShaderLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSHADERLEVEL_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICENAME_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICETYPE_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceVendor()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVENDOR_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVERSION_OFFSET))();
		}

		static ::System::Int32 GetGraphicsMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSMEMORYSIZE_OFFSET))();
		}

		static ::System::Int32 GetProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPROCESSORCOUNT_OFFSET))();
		}

		static ::System::Int32 GetProcessorFrequency()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPROCESSORFREQUENCY_OFFSET))();
		}

		static ::System::String* GetProcessorType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPROCESSORTYPE_OFFSET))();
		}

		static ::System::Int32 GetSystemMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETSYSTEMMEMORYSIZE_OFFSET))();
		}

		static ::System::String* GetDeviceUniqueIdentifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEUNIQUEIDENTIFIER_OFFSET))();
		}

		static ::System::String* GetResolution()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETRESOLUTION_OFFSET))();
		}

		static ::System::String* GetCheckSumByIndex(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETCHECKSUMBYINDEX_OFFSET))(index);
		}

		static ::System::Void launchChecksumThread()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_LAUNCHCHECKSUMTHREAD_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* waitChecksumCompute()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_WAITCHECKSUMCOMPUTE_OFFSET))();
		}

		static ::System::Void clearChecksumResults()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_CLEARCHECKSUMRESULTS_OFFSET))();
		}

		static ::System::String* GetAndroidSoCName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETANDROIDSOCNAME_OFFSET))();
		}

		static ::System::Void CultureCheck()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_CULTURECHECK_OFFSET))();
		}

		static ::System::Void SetRawCultureInfo(::System::String* cultureCode)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETRAWCULTUREINFO_OFFSET))(cultureCode);
		}

		static ::System::String* GetRPGDeviceID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETRPGDEVICEID_OFFSET))();
		}

		static ::System::String* GetCps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETCPS_OFFSET))();
		}

		static ::System::Boolean RedirectToTaptap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_REDIRECTTOTAPTAP_OFFSET))();
		}

		static ::System::Boolean ResetUIAdaptiveDeviceType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_RESETUIADAPTIVEDEVICETYPE_OFFSET))();
		}

		static ::System::Void _InitUIAdaptiveDeviceType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__INITUIADAPTIVEDEVICETYPE_OFFSET))();
		}

		static ::RPG::GameCore::UIAdaptiveDeviceType _GetUIAdaptiveDeviceTypeByScreenRatio(::System::Single ratio)
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceType(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYSCREENRATIO_OFFSET))(ratio);
		}

		static ::RPG::GameCore::UIAdaptiveDeviceType get_UIAdaptiveDeviceType()
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_UIADAPTIVEDEVICETYPE_OFFSET))();
		}

		static ::System::Void set_UIAdaptiveDeviceType(::RPG::GameCore::UIAdaptiveDeviceType value)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIAdaptiveDeviceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SET_UIADAPTIVEDEVICETYPE_OFFSET))(value);
		}

		static ::System::Boolean get_IsDebug()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISDEBUG_OFFSET))();
		}

		static ::System::Boolean get_IsProfile()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPROFILE_OFFSET))();
		}

		static ::System::Boolean get_IsRelease()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISRELEASE_OFFSET))();
		}

		static ::System::Boolean get_IsOverSea()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISOVERSEA_OFFSET))();
		}
	};
}
