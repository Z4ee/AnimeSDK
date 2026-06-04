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

#define RPG_CLIENT_APPUTILS_CLEARCHECKSUMRESULTS_OFFSET UNITYSDK_OFFSET(0xB326100)
#define RPG_CLIENT_APPUTILS_CULTURECHECK_OFFSET UNITYSDK_OFFSET(0xB326170)
#define RPG_CLIENT_APPUTILS_GETANDROIDSOCNAME_OFFSET UNITYSDK_OFFSET(0xB324F60)
#define RPG_CLIENT_APPUTILS_GETCHECKSUMBYINDEX_OFFSET UNITYSDK_OFFSET(0xB325C90)
#define RPG_CLIENT_APPUTILS_GETCPS_OFFSET UNITYSDK_OFFSET(0xB326610)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFOWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0xB3237C0)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0xB323690)
#define RPG_CLIENT_APPUTILS_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0xB324AC0)
#define RPG_CLIENT_APPUTILS_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB3235F0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0xB324FA0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0xB324B10)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xB324B50)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0xB324C10)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0xB324C50)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0xB324FE0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xB324C90)
#define RPG_CLIENT_APPUTILS_GETLOCALTIMEZONE_OFFSET UNITYSDK_OFFSET(0xB325AF0)
#define RPG_CLIENT_APPUTILS_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xB324A70)
#define RPG_CLIENT_APPUTILS_GETPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0xB323630)
#define RPG_CLIENT_APPUTILS_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0xB324CD0)
#define RPG_CLIENT_APPUTILS_GETPROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0xB324D90)
#define RPG_CLIENT_APPUTILS_GETPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0xB324E50)
#define RPG_CLIENT_APPUTILS_GETRESOLUTION_OFFSET UNITYSDK_OFFSET(0xB325BC0)
#define RPG_CLIENT_APPUTILS_GETRPGDEVICEID_OFFSET UNITYSDK_OFFSET(0xB3263E0)
#define RPG_CLIENT_APPUTILS_GETSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xB324EA0)
#define RPG_CLIENT_APPUTILS_GETVIDEOSETTING_OFFSET UNITYSDK_OFFSET(0xB325020)
#define RPG_CLIENT_APPUTILS_GET_DPI_OFFSET UNITYSDK_OFFSET(0xB3213B0)
#define RPG_CLIENT_APPUTILS_GET_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0xB321DB0)
#define RPG_CLIENT_APPUTILS_GET_ISANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0xB321F10)
#define RPG_CLIENT_APPUTILS_GET_ISAPPLEPLATFORM_OFFSET UNITYSDK_OFFSET(0xB321F40)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322120)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322150)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMACPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322CC0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322AA0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322CF0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0xB321320)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEGAMEPAD_OFFSET UNITYSDK_OFFSET(0xB323050)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEKEYBOARDMOUSE_OFFSET UNITYSDK_OFFSET(0xB322E80)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSETOUCH_OFFSET UNITYSDK_OFFSET(0xB3230B0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBANDROID_OFFSET UNITYSDK_OFFSET(0xB322980)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBIOS_OFFSET UNITYSDK_OFFSET(0xB3229B0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBKEYBOARD_OFFSET UNITYSDK_OFFSET(0xB322A70)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBMAC_OFFSET UNITYSDK_OFFSET(0xB322A10)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPC_OFFSET UNITYSDK_OFFSET(0xB3229E0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPLATFORM_OFFSET UNITYSDK_OFFSET(0xB3227B0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBTOUCH_OFFSET UNITYSDK_OFFSET(0xB322A40)
#define RPG_CLIENT_APPUTILS_GET_ISDEBUG_OFFSET UNITYSDK_OFFSET(0xB326BD0)
#define RPG_CLIENT_APPUTILS_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0xB321E80)
#define RPG_CLIENT_APPUTILS_GET_ISMACEDITOR_OFFSET UNITYSDK_OFFSET(0xB321EF0)
#define RPG_CLIENT_APPUTILS_GET_ISMACPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322040)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEORCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322C30)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0xB321F70)
#define RPG_CLIENT_APPUTILS_GET_ISNETAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB322180)
#define RPG_CLIENT_APPUTILS_GET_ISOVERSEA_OFFSET UNITYSDK_OFFSET(0xB326C00)
#define RPG_CLIENT_APPUTILS_GET_ISPCLAYOUT_OFFSET UNITYSDK_OFFSET(0xB322D20)
#define RPG_CLIENT_APPUTILS_GET_ISPROFILE_OFFSET UNITYSDK_OFFSET(0xB326BE0)
#define RPG_CLIENT_APPUTILS_GET_ISPS4PLATFORM_OFFSET UNITYSDK_OFFSET(0xB3220E0)
#define RPG_CLIENT_APPUTILS_GET_ISPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0xB322100)
#define RPG_CLIENT_APPUTILS_GET_ISPSPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322060)
#define RPG_CLIENT_APPUTILS_GET_ISRELEASE_OFFSET UNITYSDK_OFFSET(0xB326BF0)
#define RPG_CLIENT_APPUTILS_GET_ISWIFI_OFFSET UNITYSDK_OFFSET(0xB3221A0)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSEDITOR_OFFSET UNITYSDK_OFFSET(0xB321ED0)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSPLATFORM_OFFSET UNITYSDK_OFFSET(0xB322010)
#define RPG_CLIENT_APPUTILS_GET_NETWORKREACHABILITY_OFFSET UNITYSDK_OFFSET(0xB3221D0)
#define RPG_CLIENT_APPUTILS_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0xB323260)
#define RPG_CLIENT_APPUTILS_GET_SUPPORTMETALFX_OFFSET UNITYSDK_OFFSET(0xB3221E0)
#define RPG_CLIENT_APPUTILS_GET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xB326AF0)
#define RPG_CLIENT_APPUTILS_INITPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0xB322240)
#define RPG_CLIENT_APPUTILS_LAUNCHCHECKSUMTHREAD_OFFSET UNITYSDK_OFFSET(0xB325D90)
#define RPG_CLIENT_APPUTILS_QUERYURLCNAME_OFFSET UNITYSDK_OFFSET(0xB321730)
#define RPG_CLIENT_APPUTILS_REDIRECTTOTAPTAP_OFFSET UNITYSDK_OFFSET(0xB326760)
#define RPG_CLIENT_APPUTILS_REPLACELOCALTIME_OFFSET UNITYSDK_OFFSET(0xB321980)
#define RPG_CLIENT_APPUTILS_RESETDPI_OFFSET UNITYSDK_OFFSET(0xB3216C0)
#define RPG_CLIENT_APPUTILS_RESETUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xB3268A0)
#define RPG_CLIENT_APPUTILS_SETDEVICEFINGERPRINT_OFFSET UNITYSDK_OFFSET(0xB323110)
#define RPG_CLIENT_APPUTILS_SETRAWCULTUREINFO_OFFSET UNITYSDK_OFFSET(0xB326350)
#define RPG_CLIENT_APPUTILS_SETSERIALNUMBERDIRTY_OFFSET UNITYSDK_OFFSET(0xB323200)
#define RPG_CLIENT_APPUTILS_SET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xB326BA0)
#define RPG_CLIENT_APPUTILS_WAITCHECKSUMCOMPUTE_OFFSET UNITYSDK_OFFSET(0xB325FA0)
#define RPG_CLIENT_APPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3267A0)
#define RPG_CLIENT_APPUTILS__CLOUDINIT_OFFSET UNITYSDK_OFFSET(0xB321260)
#define RPG_CLIENT_APPUTILS__GETDPI_OFFSET UNITYSDK_OFFSET(0xB321200)
#define RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYSCREENRATIO_OFFSET UNITYSDK_OFFSET(0xB326A80)
#define RPG_CLIENT_APPUTILS__INITDPISETTING_OFFSET UNITYSDK_OFFSET(0xB321100)
#define RPG_CLIENT_APPUTILS__INITUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0xB3268E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils_TypeDefinitionIndex = 55400;

	class AppUtils : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_RawCultureInfo()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x93D0);
		}
		static ::System::String** StaticGet_mSerialNumber()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x93D8);
		}
		static ::System::String** StaticGet_DeviceFingerPrint()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x93E0);
		}
		static ::System::String** StaticGet_LOCALTIMEZONE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x93E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_checksumResults()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x93F0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_TimeRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x93F8);
		}
		static ::System::Threading::Thread** StaticGet_checksumComputeThread()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x9400);
		}
		static ::System::String** StaticGet_LOCALZONE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x9408);
		}
		static ::System::Int32* StaticGet__OrigDeviceHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4180);
		}
		static ::System::Int32* StaticGet__LastDeviceWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4184);
		}
		static ::System::Single* StaticGet__ScreenRatioPad()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4188);
		}
		static ::Enum_3_7D0231C413D78CFA* StaticGet__PlatformType()
		{
			return (::Enum_3_7D0231C413D78CFA*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x418C);
		}
		static ::System::Single* StaticGet__dpi()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4190);
		}
		static ::System::Int32* StaticGet__LastDeviceHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4194);
		}
		static ::RPG::GameCore::UIAdaptiveDeviceType* StaticGet__uiAdaptiveDeviceType()
		{
			return (::RPG::GameCore::UIAdaptiveDeviceType*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x4198);
		}
		static ::System::Boolean* StaticGet_IsSerialNumberDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x419C);
		}
		static ::System::Boolean* StaticGet__IsUiAdaptiveDeviceTypeInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x419D);
		}
		static ::System::Int32* StaticGet__OrigDeviceWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x41A0);
		}
		static ::System::Single* StaticGet_DefaultBezelLessScreenMaxIndent()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x41A4);
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

		static ::RPG::Client::AppUtils_CNameData QueryUrlCName(::System::String* a1)
		{
			return ((::RPG::Client::AppUtils_CNameData(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_QUERYURLCNAME_OFFSET))(a1);
		}

		static ::System::String* ReplaceLocalTime(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_REPLACELOCALTIME_OFFSET))(a1);
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

		static ::System::Void SetDeviceFingerPrint(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETDEVICEFINGERPRINT_OFFSET))(a1);
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

		static ::System::String* GetCheckSumByIndex(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETCHECKSUMBYINDEX_OFFSET))(a1);
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

		static ::System::Void SetRawCultureInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETRAWCULTUREINFO_OFFSET))(a1);
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

		static ::RPG::GameCore::UIAdaptiveDeviceType _GetUIAdaptiveDeviceTypeByScreenRatio(::System::Single a1)
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceType(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYSCREENRATIO_OFFSET))(a1);
		}

		static ::RPG::GameCore::UIAdaptiveDeviceType get_UIAdaptiveDeviceType()
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_UIADAPTIVEDEVICETYPE_OFFSET))();
		}

		static ::System::Void set_UIAdaptiveDeviceType(::RPG::GameCore::UIAdaptiveDeviceType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIAdaptiveDeviceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SET_UIADAPTIVEDEVICETYPE_OFFSET))(a1);
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
