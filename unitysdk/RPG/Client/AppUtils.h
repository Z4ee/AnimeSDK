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

#define RPG_CLIENT_APPUTILS_CLEARCHECKSUMRESULTS_OFFSET UNITYSDK_OFFSET(0x9D36070)
#define RPG_CLIENT_APPUTILS_CULTURECHECK_OFFSET UNITYSDK_OFFSET(0x9D360E0)
#define RPG_CLIENT_APPUTILS_GETANDROIDSOCNAME_OFFSET UNITYSDK_OFFSET(0x9D34E80)
#define RPG_CLIENT_APPUTILS_GETCHECKSUMBYINDEX_OFFSET UNITYSDK_OFFSET(0x9D35C00)
#define RPG_CLIENT_APPUTILS_GETCPS_OFFSET UNITYSDK_OFFSET(0x9D36580)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFOWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x9D335F0)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x9D333B0)
#define RPG_CLIENT_APPUTILS_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x9D349E0)
#define RPG_CLIENT_APPUTILS_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9D33310)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x9D34EC0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x9D34A30)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x9D34A70)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x9D34B30)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x9D34B70)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x9D34F00)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x9D34BB0)
#define RPG_CLIENT_APPUTILS_GETLOCALTIMEZONE_OFFSET UNITYSDK_OFFSET(0x9D35A60)
#define RPG_CLIENT_APPUTILS_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x9D34990)
#define RPG_CLIENT_APPUTILS_GETPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x9D33350)
#define RPG_CLIENT_APPUTILS_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x9D34BF0)
#define RPG_CLIENT_APPUTILS_GETPROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9D34CB0)
#define RPG_CLIENT_APPUTILS_GETPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x9D34D70)
#define RPG_CLIENT_APPUTILS_GETRESOLUTION_OFFSET UNITYSDK_OFFSET(0x9D35B30)
#define RPG_CLIENT_APPUTILS_GETRPGDEVICEID_OFFSET UNITYSDK_OFFSET(0x9D36350)
#define RPG_CLIENT_APPUTILS_GETSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x9D34DC0)
#define RPG_CLIENT_APPUTILS_GETVIDEOSETTING_OFFSET UNITYSDK_OFFSET(0x9D34F40)
#define RPG_CLIENT_APPUTILS_GET_DPI_OFFSET UNITYSDK_OFFSET(0x9D31020)
#define RPG_CLIENT_APPUTILS_GET_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x9D31A80)
#define RPG_CLIENT_APPUTILS_GET_ISANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31BE0)
#define RPG_CLIENT_APPUTILS_GET_ISAPPLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31C10)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31DF0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31E20)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D329E0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D327C0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D32A10)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D30E80)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEGAMEPAD_OFFSET UNITYSDK_OFFSET(0x9D32D70)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEKEYBOARDMOUSE_OFFSET UNITYSDK_OFFSET(0x9D32BA0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSETOUCH_OFFSET UNITYSDK_OFFSET(0x9D32DD0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBANDROID_OFFSET UNITYSDK_OFFSET(0x9D326A0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBIOS_OFFSET UNITYSDK_OFFSET(0x9D326D0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9D32790)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBMAC_OFFSET UNITYSDK_OFFSET(0x9D32730)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPC_OFFSET UNITYSDK_OFFSET(0x9D32700)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D324D0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBTOUCH_OFFSET UNITYSDK_OFFSET(0x9D32760)
#define RPG_CLIENT_APPUTILS_GET_ISDEBUG_OFFSET UNITYSDK_OFFSET(0x9D36B30)
#define RPG_CLIENT_APPUTILS_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x9D31B50)
#define RPG_CLIENT_APPUTILS_GET_ISMACEDITOR_OFFSET UNITYSDK_OFFSET(0x9D31BC0)
#define RPG_CLIENT_APPUTILS_GET_ISMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31D10)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEORCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D32950)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31C40)
#define RPG_CLIENT_APPUTILS_GET_ISNETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9D31E50)
#define RPG_CLIENT_APPUTILS_GET_ISOVERSEA_OFFSET UNITYSDK_OFFSET(0x9D36B60)
#define RPG_CLIENT_APPUTILS_GET_ISPCLAYOUT_OFFSET UNITYSDK_OFFSET(0x9D32A40)
#define RPG_CLIENT_APPUTILS_GET_ISPROFILE_OFFSET UNITYSDK_OFFSET(0x9D36B40)
#define RPG_CLIENT_APPUTILS_GET_ISPS4PLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31DB0)
#define RPG_CLIENT_APPUTILS_GET_ISPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31DD0)
#define RPG_CLIENT_APPUTILS_GET_ISPSPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31D30)
#define RPG_CLIENT_APPUTILS_GET_ISRELEASE_OFFSET UNITYSDK_OFFSET(0x9D36B50)
#define RPG_CLIENT_APPUTILS_GET_ISWIFI_OFFSET UNITYSDK_OFFSET(0x9D31E70)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSEDITOR_OFFSET UNITYSDK_OFFSET(0x9D31BA0)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSPLATFORM_OFFSET UNITYSDK_OFFSET(0x9D31CE0)
#define RPG_CLIENT_APPUTILS_GET_NETWORKREACHABILITY_OFFSET UNITYSDK_OFFSET(0x9D31EA0)
#define RPG_CLIENT_APPUTILS_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x9D32F80)
#define RPG_CLIENT_APPUTILS_GET_SUPPORTMETALFX_OFFSET UNITYSDK_OFFSET(0x9D31EB0)
#define RPG_CLIENT_APPUTILS_GET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x9D36A50)
#define RPG_CLIENT_APPUTILS_INITPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x9D31F10)
#define RPG_CLIENT_APPUTILS_LAUNCHCHECKSUMTHREAD_OFFSET UNITYSDK_OFFSET(0x9D35D00)
#define RPG_CLIENT_APPUTILS_QUERYURLCNAME_OFFSET UNITYSDK_OFFSET(0x9D313A0)
#define RPG_CLIENT_APPUTILS_REDIRECTTOTAPTAP_OFFSET UNITYSDK_OFFSET(0x9D366D0)
#define RPG_CLIENT_APPUTILS_REPLACELOCALTIME_OFFSET UNITYSDK_OFFSET(0x9D31650)
#define RPG_CLIENT_APPUTILS_RESETDPI_OFFSET UNITYSDK_OFFSET(0x9D31330)
#define RPG_CLIENT_APPUTILS_RESETUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x9D36800)
#define RPG_CLIENT_APPUTILS_SETDEVICEFINGERPRINT_OFFSET UNITYSDK_OFFSET(0x9D32E30)
#define RPG_CLIENT_APPUTILS_SETRAWCULTUREINFO_OFFSET UNITYSDK_OFFSET(0x9D362C0)
#define RPG_CLIENT_APPUTILS_SETSERIALNUMBERDIRTY_OFFSET UNITYSDK_OFFSET(0x9D32F20)
#define RPG_CLIENT_APPUTILS_SET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x9D36B00)
#define RPG_CLIENT_APPUTILS_WAITCHECKSUMCOMPUTE_OFFSET UNITYSDK_OFFSET(0x9D35EE0)
#define RPG_CLIENT_APPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D36710)
#define RPG_CLIENT_APPUTILS__CLOUDINIT_OFFSET UNITYSDK_OFFSET(0x9D30BF0)
#define RPG_CLIENT_APPUTILS__GETDPI_OFFSET UNITYSDK_OFFSET(0x9D30B90)
#define RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYSCREENRATIO_OFFSET UNITYSDK_OFFSET(0x9D369E0)
#define RPG_CLIENT_APPUTILS__INITDPISETTING_OFFSET UNITYSDK_OFFSET(0x9D30A90)
#define RPG_CLIENT_APPUTILS__INITUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x9D36840)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils_TypeDefinitionIndex = 54673;

	class AppUtils : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_RawCultureInfo()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x5FD0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_TimeRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x5FD8);
		}
		static ::System::String** StaticGet_mSerialNumber()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x5FE0);
		}
		static ::System::Threading::Thread** StaticGet_checksumComputeThread()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x5FE8);
		}
		static ::System::String** StaticGet_DeviceFingerPrint()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x5FF0);
		}
		static ::System::String** StaticGet_LOCALZONE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x5FF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_checksumResults()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6000);
		}
		static ::System::String** StaticGet_LOCALTIMEZONE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6008);
		}
		static ::System::Int32* StaticGet__OrigDeviceWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E20);
		}
		static ::System::Boolean* StaticGet__IsUiAdaptiveDeviceTypeInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E24);
		}
		static ::System::Boolean* StaticGet_IsSerialNumberDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E25);
		}
		static ::System::Int32* StaticGet__LastDeviceHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E28);
		}
		static ::System::Single* StaticGet__dpi()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E2C);
		}
		static ::Enum_3_7D0231C413D78CFA* StaticGet__PlatformType()
		{
			return (::Enum_3_7D0231C413D78CFA*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E30);
		}
		static ::RPG::GameCore::UIAdaptiveDeviceType* StaticGet__uiAdaptiveDeviceType()
		{
			return (::RPG::GameCore::UIAdaptiveDeviceType*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E34);
		}
		static ::System::Int32* StaticGet__LastDeviceWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E38);
		}
		static ::System::Int32* StaticGet__OrigDeviceHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E3C);
		}
		static ::System::Single* StaticGet__ScreenRatioPad()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E40);
		}
		static ::System::Single* StaticGet_DefaultBezelLessScreenMaxIndent()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x2E44);
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
