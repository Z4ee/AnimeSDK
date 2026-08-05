#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/DeviceType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Resolution.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/UnityEngine/ScreenOrientation.h"
#include "unitysdk/UnityEngine/SystemLanguage.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_APPUTILS_ADD_ONCLOUDPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1D581170)
#define FOUNDATION_APPUTILS_ADD_ONSCREENPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D583AE0)
#define FOUNDATION_APPUTILS_ADD_ONSYSTEMINFOPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D585BD0)
#define FOUNDATION_APPUTILS_ADD_ONSYSTEMLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0x1D588240)
#define FOUNDATION_APPUTILS_GETAPPLICATIONPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581330)
#define FOUNDATION_APPUTILS_GETSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1D584580)
#define FOUNDATION_APPUTILS_GETSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D584370)
#define FOUNDATION_APPUTILS_GETSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1D584820)
#define FOUNDATION_APPUTILS_GETSCREENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D583CA0)
#define FOUNDATION_APPUTILS_GETSCREENSAFEAREA_OFFSET UNITYSDK_OFFSET(0x1D583F10)
#define FOUNDATION_APPUTILS_GETSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x1D584160)
#define FOUNDATION_APPUTILS_GETSYSTEMDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1D5863A0)
#define FOUNDATION_APPUTILS_GETSYSTEMDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1D586190)
#define FOUNDATION_APPUTILS_GETSYSTEMDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1D585D90)
#define FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1D5865B0)
#define FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1D5867C0)
#define FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1D586A10)
#define FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1D586C20)
#define FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D586E30)
#define FOUNDATION_APPUTILS_GETSYSTEMINFOOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D585F80)
#define FOUNDATION_APPUTILS_GETSYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D588400)
#define FOUNDATION_APPUTILS_GETSYSTEMPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1D587010)
#define FOUNDATION_APPUTILS_GETSYSTEMPROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1D5871F0)
#define FOUNDATION_APPUTILS_GETSYSTEMPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1D5873D0)
#define FOUNDATION_APPUTILS_GETSYSTEMSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D5875E0)
#define FOUNDATION_APPUTILS_GET_CLOUDDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1D587940)
#define FOUNDATION_APPUTILS_GET_CLOUDDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1D587880)
#define FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1D587A00)
#define FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1D587AC0)
#define FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1D587B80)
#define FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1D587C40)
#define FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D587D00)
#define FOUNDATION_APPUTILS_GET_CLOUDISRICHTAPEFFECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D5880C0)
#define FOUNDATION_APPUTILS_GET_CLOUDISVIBRATOREFFECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D588180)
#define FOUNDATION_APPUTILS_GET_CLOUDOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D5877C0)
#define FOUNDATION_APPUTILS_GET_CLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582D20)
#define FOUNDATION_APPUTILS_GET_CLOUDPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1D587DC0)
#define FOUNDATION_APPUTILS_GET_CLOUDPROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1D587E80)
#define FOUNDATION_APPUTILS_GET_CLOUDPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1D587F40)
#define FOUNDATION_APPUTILS_GET_CLOUDSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1D584A30)
#define FOUNDATION_APPUTILS_GET_CLOUDSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D584BB0)
#define FOUNDATION_APPUTILS_GET_CLOUDSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1D584E10)
#define FOUNDATION_APPUTILS_GET_CLOUDSCREENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D584C70)
#define FOUNDATION_APPUTILS_GET_CLOUDSCREENSAFEAREA_OFFSET UNITYSDK_OFFSET(0x1D584D50)
#define FOUNDATION_APPUTILS_GET_CLOUDSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x1D584AF0)
#define FOUNDATION_APPUTILS_GET_CLOUDSYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D588610)
#define FOUNDATION_APPUTILS_GET_CLOUDSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D588000)
#define FOUNDATION_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583260)
#define FOUNDATION_APPUTILS_GET_ISCLOUDCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582EA0)
#define FOUNDATION_APPUTILS_GET_ISCLOUDGAMING_OFFSET UNITYSDK_OFFSET(0x1D581530)
#define FOUNDATION_APPUTILS_GET_ISCLOUDIOSORMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5833E0)
#define FOUNDATION_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583320)
#define FOUNDATION_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582DE0)
#define FOUNDATION_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5831A0)
#define FOUNDATION_APPUTILS_GET_ISCLOUDPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582F60)
#define FOUNDATION_APPUTILS_GET_ISCLOUDXBOXPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5830E0)
#define FOUNDATION_APPUTILS_GET_ISCLOUDXBOXPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583020)
#define FOUNDATION_APPUTILS_GET_ISMICROSOFTGDKDEFINED_OFFSET UNITYSDK_OFFSET(0x1D580F50)
#define FOUNDATION_APPUTILS_GET_ISMICROSOFTGDKSUPPORT_OFFSET UNITYSDK_OFFSET(0x1D580F60)
#define FOUNDATION_APPUTILS_GET_ISUNITYANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5838A0)
#define FOUNDATION_APPUTILS_GET_ISUNITYCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581A70)
#define FOUNDATION_APPUTILS_GET_ISUNITYEDITOR_OFFSET UNITYSDK_OFFSET(0x1D5834A0)
#define FOUNDATION_APPUTILS_GET_ISUNITYIOSORMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583A20)
#define FOUNDATION_APPUTILS_GET_ISUNITYIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583960)
#define FOUNDATION_APPUTILS_GET_ISUNITYMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581810)
#define FOUNDATION_APPUTILS_GET_ISUNITYPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5837E0)
#define FOUNDATION_APPUTILS_GET_ISUNITYPS4PLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583570)
#define FOUNDATION_APPUTILS_GET_ISUNITYPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5834B0)
#define FOUNDATION_APPUTILS_GET_ISUNITYXBOXPCHANDHELDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5836F0)
#define FOUNDATION_APPUTILS_GET_ISUNITYXBOXPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581030)
#define FOUNDATION_APPUTILS_GET_ISUNITYXBOXPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583630)
#define FOUNDATION_APPUTILS_GET_UNITYPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5815D0)
#define FOUNDATION_APPUTILS_GET_UNITYSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1D5847C0)
#define FOUNDATION_APPUTILS_GET_UNITYSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D584570)
#define FOUNDATION_APPUTILS_GET_UNITYSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1D584A20)
#define FOUNDATION_APPUTILS_GET_UNITYSCREENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D583ED0)
#define FOUNDATION_APPUTILS_GET_UNITYSCREENSAFEAREA_OFFSET UNITYSDK_OFFSET(0x1D584130)
#define FOUNDATION_APPUTILS_GET_UNITYSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x1D584360)
#define FOUNDATION_APPUTILS_GET_UNITYSYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D588600)
#define FOUNDATION_APPUTILS_ISANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582660)
#define FOUNDATION_APPUTILS_ISCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581850)
#define FOUNDATION_APPUTILS_ISIOSORMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582AE0)
#define FOUNDATION_APPUTILS_ISIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5828A0)
#define FOUNDATION_APPUTILS_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5815E0)
#define FOUNDATION_APPUTILS_ISPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582420)
#define FOUNDATION_APPUTILS_ISPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581AA0)
#define FOUNDATION_APPUTILS_ISXBOXORXBOXPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582120)
#define FOUNDATION_APPUTILS_ISXBOXPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581F20)
#define FOUNDATION_APPUTILS_ISXBOXPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D581CE0)
#define FOUNDATION_APPUTILS_REMOVE_ONCLOUDPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1D581250)
#define FOUNDATION_APPUTILS_REMOVE_ONSCREENPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D583BC0)
#define FOUNDATION_APPUTILS_REMOVE_ONSYSTEMINFOPARAMSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D585CB0)
#define FOUNDATION_APPUTILS_REMOVE_ONSYSTEMLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0x1D588320)
#define FOUNDATION_APPUTILS_RESETCLOUDPLATFORMVALUES_OFFSET UNITYSDK_OFFSET(0x1D588840)
#define FOUNDATION_APPUTILS_RESETSAFEAREA_OFFSET UNITYSDK_OFFSET(0x1D589770)
#define FOUNDATION_APPUTILS_RESETSCREENVALUES_OFFSET UNITYSDK_OFFSET(0x1D589410)
#define FOUNDATION_APPUTILS_RESETSYSTEMINFOVALUES_OFFSET UNITYSDK_OFFSET(0x1D589840)
#define FOUNDATION_APPUTILS_RESETSYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D58A420)
#define FOUNDATION_APPUTILS_RESETUNITYPLATFORMVALUES_OFFSET UNITYSDK_OFFSET(0x1D5890B0)
#define FOUNDATION_APPUTILS_SCALEINCHDELTATOAXIS_OFFSET UNITYSDK_OFFSET(0x1D585750)
#define FOUNDATION_APPUTILS_SCALEINCHDELTATOSCREEN_OFFSET UNITYSDK_OFFSET(0x1D585310)
#define FOUNDATION_APPUTILS_SCALESCREENDELTATOINCH_OFFSET UNITYSDK_OFFSET(0x1D584ED0)
#define FOUNDATION_APPUTILS_SET_CLOUDDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1D5879A0)
#define FOUNDATION_APPUTILS_SET_CLOUDDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1D5878E0)
#define FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1D587A60)
#define FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1D587B20)
#define FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1D587BE0)
#define FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1D587CA0)
#define FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D587D60)
#define FOUNDATION_APPUTILS_SET_CLOUDISRICHTAPEFFECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D588120)
#define FOUNDATION_APPUTILS_SET_CLOUDISVIBRATOREFFECTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D5881E0)
#define FOUNDATION_APPUTILS_SET_CLOUDOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D587820)
#define FOUNDATION_APPUTILS_SET_CLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582D80)
#define FOUNDATION_APPUTILS_SET_CLOUDPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1D587E20)
#define FOUNDATION_APPUTILS_SET_CLOUDPROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1D587EE0)
#define FOUNDATION_APPUTILS_SET_CLOUDPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1D587FA0)
#define FOUNDATION_APPUTILS_SET_CLOUDSCREENDPI_OFFSET UNITYSDK_OFFSET(0x1D584A90)
#define FOUNDATION_APPUTILS_SET_CLOUDSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D584C10)
#define FOUNDATION_APPUTILS_SET_CLOUDSCREENORIENTATION_OFFSET UNITYSDK_OFFSET(0x1D584E70)
#define FOUNDATION_APPUTILS_SET_CLOUDSCREENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D584CE0)
#define FOUNDATION_APPUTILS_SET_CLOUDSCREENSAFEAREA_OFFSET UNITYSDK_OFFSET(0x1D584DB0)
#define FOUNDATION_APPUTILS_SET_CLOUDSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0x1D584B50)
#define FOUNDATION_APPUTILS_SET_CLOUDSYSTEMLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1D588670)
#define FOUNDATION_APPUTILS_SET_CLOUDSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D588060)
#define FOUNDATION_APPUTILS_SET_ISCLOUDANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5832C0)
#define FOUNDATION_APPUTILS_SET_ISCLOUDCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582F00)
#define FOUNDATION_APPUTILS_SET_ISCLOUDIOSORMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583440)
#define FOUNDATION_APPUTILS_SET_ISCLOUDIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583380)
#define FOUNDATION_APPUTILS_SET_ISCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582E40)
#define FOUNDATION_APPUTILS_SET_ISCLOUDPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583200)
#define FOUNDATION_APPUTILS_SET_ISCLOUDPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x1D582FC0)
#define FOUNDATION_APPUTILS_SET_ISCLOUDXBOXPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583140)
#define FOUNDATION_APPUTILS_SET_ISCLOUDXBOXPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583080)
#define FOUNDATION_APPUTILS_SET_ISUNITYANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583900)
#define FOUNDATION_APPUTILS_SET_ISUNITYIOSORMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583A80)
#define FOUNDATION_APPUTILS_SET_ISUNITYIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5839C0)
#define FOUNDATION_APPUTILS_SET_ISUNITYPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583840)
#define FOUNDATION_APPUTILS_SET_ISUNITYPS4PLATFORM_OFFSET UNITYSDK_OFFSET(0x1D5835D0)
#define FOUNDATION_APPUTILS_SET_ISUNITYPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583510)
#define FOUNDATION_APPUTILS_SET_ISUNITYXBOXPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D583690)
#define FOUNDATION_APPUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5886D0)

namespace Foundation
{
	inline static constexpr unsigned int AppUtils_TypeDefinitionIndex = 7804;

	class AppUtils : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OnSystemInfoParamsChanged()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E00);
		}
		static ::System::String** StaticGet__CloudGraphicsDeviceName_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E08);
		}
		static ::System::String** StaticGet__CloudGraphicsDeviceVersion_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E10);
		}
		static ::System::String** StaticGet__CloudProcessorType_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E18);
		}
		static ::System::Action** StaticGet_OnScreenParamsChanged()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E20);
		}
		static ::System::Action** StaticGet_OnSystemLanguageChanged()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E28);
		}
		static ::System::String** StaticGet__CloudGraphicsDeviceType_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E30);
		}
		static ::System::String** StaticGet__CloudDeviceName_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E38);
		}
		static ::System::String** StaticGet__CloudGraphicsDeviceVendor_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E40);
		}
		static ::System::String** StaticGet__CloudDeviceModel_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E48);
		}
		static ::System::Action_1<::Foundation::NapPlatform>** StaticGet_OnCloudPlatformChanged()
		{
			return (::System::Action_1<::Foundation::NapPlatform>**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E50);
		}
		static ::System::String** StaticGet__CloudOperatingSystem_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x6E58);
		}
		static ::System::Int32* StaticGet__CloudScreenWidth_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3740);
		}
		static ::System::Int32* StaticGet__CloudScreenHeight_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3744);
		}
		static ::System::Int32* StaticGet__CloudGraphicsMemorySize_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3748);
		}
		static ::System::Boolean* StaticGet__IsCloudXBoxPCPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x374C);
		}
		static ::System::Boolean* StaticGet__IsUnityPS4Platform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x374D);
		}
		static ::System::Boolean* StaticGet__IsUnityIOSOrMacPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x374E);
		}
		static ::System::Boolean* StaticGet__IsUnityIOSPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x374F);
		}
		static ::System::Boolean* StaticGet__IsCloudPS5Platform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3750);
		}
		static ::System::Boolean* StaticGet__IsUnityPCPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3751);
		}
		static ::System::Boolean* StaticGet__IsCloudIOSOrMacPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3752);
		}
		static ::UnityEngine::Rect* StaticGet__CloudScreenSafeArea_k__BackingField()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3754);
		}
		static ::UnityEngine::SystemLanguage* StaticGet__CloudSystemLanguage_k__BackingField()
		{
			return (::UnityEngine::SystemLanguage*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3764);
		}
		static ::System::Boolean* StaticGet__IsUnityPS5Platform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3768);
		}
		static ::System::Boolean* StaticGet__IsCloudAndroidPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3769);
		}
		static ::System::Boolean* StaticGet__IsCloudConsolePlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x376A);
		}
		static ::System::Boolean* StaticGet__IsCloudMobilePlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x376B);
		}
		static ::UnityEngine::ScreenOrientation* StaticGet__CloudScreenOrientation_k__BackingField()
		{
			return (::UnityEngine::ScreenOrientation*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x376C);
		}
		static ::System::Boolean* StaticGet__IsUnityAndroidPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3770);
		}
		static ::System::Boolean* StaticGet__CloudIsVibratorEffectSupported_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3771);
		}
		static ::System::Boolean* StaticGet__IsCloudPCPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3772);
		}
		static ::System::Boolean* StaticGet_DebugGM_ForceShowDpiCalcu()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3773);
		}
		static ::System::Single* StaticGet__CloudScreenDpi_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3774);
		}
		static ::System::Int32* StaticGet__CloudProcessorCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3778);
		}
		static ::UnityEngine::Resolution* StaticGet__CloudScreenResolution_k__BackingField()
		{
			return (::UnityEngine::Resolution*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x377C);
		}
		static ::System::Boolean* StaticGet__CloudIsRichtapEffectSupported_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3788);
		}
		static ::System::Boolean* StaticGet__IsCloudXBoxPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3789);
		}
		static ::System::Boolean* StaticGet__IsUnityXBoxPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x378A);
		}
		static ::System::Boolean* StaticGet__IsCloudIOSPlatform_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x378B);
		}
		static ::Foundation::NapPlatform* StaticGet__CloudPlatform_k__BackingField()
		{
			return (::Foundation::NapPlatform*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x378C);
		}
		static ::System::Int32* StaticGet__CloudSystemMemorySize_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3790);
		}
		static ::System::Int32* StaticGet__CloudProcessorFrequency_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AppUtils_TypeDefinitionIndex)->GetStaticField(0x3794);
		}
		// static const ::System::Single FALLBACK_UNITY_DPI; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsMicrosoftGdkDefined()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISMICROSOFTGDKDEFINED_OFFSET))();
		}

		static ::System::Boolean get_IsMicrosoftGdkSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISMICROSOFTGDKSUPPORT_OFFSET))();
		}

		static ::System::Void add_OnCloudPlatformChanged(::System::Action_1<::Foundation::NapPlatform>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::Foundation::NapPlatform>*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ADD_ONCLOUDPLATFORMCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_OnCloudPlatformChanged(::System::Action_1<::Foundation::NapPlatform>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::Foundation::NapPlatform>*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_REMOVE_ONCLOUDPLATFORMCHANGED_OFFSET))(value);
		}

		static ::Foundation::NapPlatform GetApplicationPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::Foundation::NapPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETAPPLICATIONPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsMobilePlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISMOBILEPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsConsolePlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISCONSOLEPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsPS5Platform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISPS5PLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsXBoxPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISXBOXPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsXBoxPCPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISXBOXPCPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsXBoxOrXBoxPCPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISXBOXORXBOXPCPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsPCPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISPCPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsAndroidPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISANDROIDPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsIOSPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISIOSPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Boolean IsIOSOrMacPlatform(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ISIOSORMACPLATFORM_OFFSET))(checkCloudGamePlatform);
		}

		static ::Foundation::NapPlatform get_CloudPlatform()
		{
			return ((::Foundation::NapPlatform(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDPLATFORM_OFFSET))();
		}

		static ::System::Void set_CloudPlatform(::Foundation::NapPlatform value)
		{
			return ((::System::Void(*)(::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDPLATFORM_OFFSET))(value);
		}

		static ::UnityEngine::RuntimePlatform get_UnityPlatform()
		{
			return ((::UnityEngine::RuntimePlatform(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudGaming()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDGAMING_OFFSET))();
		}

		static ::System::Boolean get_IsCloudMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudMobilePlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDMOBILEPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudConsolePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDCONSOLEPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudConsolePlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDCONSOLEPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudPS5Platform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDPS5PLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudPS5Platform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDPS5PLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudXBoxPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDXBOXPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudXBoxPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDXBOXPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudXBoxPCPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDXBOXPCPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudXBoxPCPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDXBOXPCPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudPCPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudPCPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDPCPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudAndroidPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudAndroidPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDANDROIDPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudIOSPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudIOSPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDIOSPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsCloudIOSOrMacPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISCLOUDIOSORMACPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsCloudIOSOrMacPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISCLOUDIOSORMACPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsUnityEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYEDITOR_OFFSET))();
		}

		static ::System::Boolean get_IsUnityMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsUnityConsolePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYCONSOLEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsUnityPS5Platform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYPS5PLATFORM_OFFSET))();
		}

		static ::System::Void set_IsUnityPS5Platform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISUNITYPS5PLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsUnityPS4Platform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYPS4PLATFORM_OFFSET))();
		}

		static ::System::Void set_IsUnityPS4Platform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISUNITYPS4PLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsUnityXBoxPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYXBOXPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsUnityXBoxPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISUNITYXBOXPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsUnityXBoxPCPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYXBOXPCPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsUnityXBoxPCHandheldPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYXBOXPCHANDHELDPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsUnityPCPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYPCPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsUnityPCPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISUNITYPCPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsUnityAndroidPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYANDROIDPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsUnityAndroidPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISUNITYANDROIDPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsUnityIOSPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYIOSPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsUnityIOSPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISUNITYIOSPLATFORM_OFFSET))(value);
		}

		static ::System::Boolean get_IsUnityIOSOrMacPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_ISUNITYIOSORMACPLATFORM_OFFSET))();
		}

		static ::System::Void set_IsUnityIOSOrMacPlatform(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_ISUNITYIOSORMACPLATFORM_OFFSET))(value);
		}

		static ::System::Void add_OnScreenParamsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ADD_ONSCREENPARAMSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_OnScreenParamsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_REMOVE_ONSCREENPARAMSCHANGED_OFFSET))(value);
		}

		static ::UnityEngine::Resolution GetScreenResolution(::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::Resolution(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSCREENRESOLUTION_OFFSET))(checkCloudGamePlatform);
		}

		static ::UnityEngine::Rect GetScreenSafeArea(::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::Rect(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSCREENSAFEAREA_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Int32 GetScreenWidth(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSCREENWIDTH_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Int32 GetScreenHeight(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSCREENHEIGHT_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Single GetScreenDpi(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSCREENDPI_OFFSET))(checkCloudGamePlatform);
		}

		static ::UnityEngine::ScreenOrientation GetScreenOrientation(::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::ScreenOrientation(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSCREENORIENTATION_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Single get_UnityScreenDpi()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYSCREENDPI_OFFSET))();
		}

		static ::System::Int32 get_UnityScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYSCREENWIDTH_OFFSET))();
		}

		static ::System::Int32 get_UnityScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYSCREENHEIGHT_OFFSET))();
		}

		static ::UnityEngine::Resolution get_UnityScreenResolution()
		{
			return ((::UnityEngine::Resolution(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYSCREENRESOLUTION_OFFSET))();
		}

		static ::UnityEngine::Rect get_UnityScreenSafeArea()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYSCREENSAFEAREA_OFFSET))();
		}

		static ::UnityEngine::ScreenOrientation get_UnityScreenOrientation()
		{
			return ((::UnityEngine::ScreenOrientation(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYSCREENORIENTATION_OFFSET))();
		}

		static ::System::Single get_CloudScreenDpi()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSCREENDPI_OFFSET))();
		}

		static ::System::Void set_CloudScreenDpi(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSCREENDPI_OFFSET))(value);
		}

		static ::System::Int32 get_CloudScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSCREENWIDTH_OFFSET))();
		}

		static ::System::Void set_CloudScreenWidth(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSCREENWIDTH_OFFSET))(value);
		}

		static ::System::Int32 get_CloudScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSCREENHEIGHT_OFFSET))();
		}

		static ::System::Void set_CloudScreenHeight(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSCREENHEIGHT_OFFSET))(value);
		}

		static ::UnityEngine::Resolution get_CloudScreenResolution()
		{
			return ((::UnityEngine::Resolution(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSCREENRESOLUTION_OFFSET))();
		}

		static ::System::Void set_CloudScreenResolution(::UnityEngine::Resolution value)
		{
			return ((::System::Void(*)(::UnityEngine::Resolution))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSCREENRESOLUTION_OFFSET))(value);
		}

		static ::UnityEngine::Rect get_CloudScreenSafeArea()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSCREENSAFEAREA_OFFSET))();
		}

		static ::System::Void set_CloudScreenSafeArea(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSCREENSAFEAREA_OFFSET))(value);
		}

		static ::UnityEngine::ScreenOrientation get_CloudScreenOrientation()
		{
			return ((::UnityEngine::ScreenOrientation(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSCREENORIENTATION_OFFSET))();
		}

		static ::System::Void set_CloudScreenOrientation(::UnityEngine::ScreenOrientation value)
		{
			return ((::System::Void(*)(::UnityEngine::ScreenOrientation))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSCREENORIENTATION_OFFSET))(value);
		}

		static ::UnityEngine::Vector2 ScaleScreenDeltaToInch(::UnityEngine::Vector2 screenDelta, ::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SCALESCREENDELTATOINCH_OFFSET))(screenDelta, checkCloudGamePlatform);
		}

		static ::UnityEngine::Vector2 ScaleInchDeltaToScreen(::UnityEngine::Vector2 inchDelta, ::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SCALEINCHDELTATOSCREEN_OFFSET))(inchDelta, checkCloudGamePlatform);
		}

		static ::UnityEngine::Vector2 ScaleInchDeltaToAxis(::UnityEngine::Vector2 inchDelta, ::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SCALEINCHDELTATOAXIS_OFFSET))(inchDelta, checkCloudGamePlatform);
		}

		static ::System::Void add_OnSystemInfoParamsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ADD_ONSYSTEMINFOPARAMSCHANGED_OFFSET))(value);
		}

		static ::System::Void remove_OnSystemInfoParamsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_REMOVE_ONSYSTEMINFOPARAMSCHANGED_OFFSET))(value);
		}

		static ::UnityEngine::DeviceType GetSystemDeviceType(::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::DeviceType(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMDEVICETYPE_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemInfoOperatingSystem(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMINFOOPERATINGSYSTEM_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemDeviceName(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMDEVICENAME_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemDeviceModel(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMDEVICEMODEL_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemGraphicsDeviceName(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICENAME_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemGraphicsDeviceType(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICETYPE_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemGraphicsDeviceVendor(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICEVENDOR_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemGraphicsDeviceVersion(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSDEVICEVERSION_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Int32 GetSystemGraphicsMemorySize(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMGRAPHICSMEMORYSIZE_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Int32 GetSystemProcessorCount(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMPROCESSORCOUNT_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Int32 GetSystemProcessorFrequency(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMPROCESSORFREQUENCY_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* GetSystemProcessorType(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMPROCESSORTYPE_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::Int32 GetSystemSystemMemorySize(::System::Boolean checkCloudGamePlatform)
		{
			return ((::System::Int32(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMSYSTEMMEMORYSIZE_OFFSET))(checkCloudGamePlatform);
		}

		static ::System::String* get_CloudOperatingSystem()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDOPERATINGSYSTEM_OFFSET))();
		}

		static ::System::Void set_CloudOperatingSystem(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDOPERATINGSYSTEM_OFFSET))(value);
		}

		static ::System::String* get_CloudDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDDEVICENAME_OFFSET))();
		}

		static ::System::Void set_CloudDeviceName(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDDEVICENAME_OFFSET))(value);
		}

		static ::System::String* get_CloudDeviceModel()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDDEVICEMODEL_OFFSET))();
		}

		static ::System::Void set_CloudDeviceModel(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDDEVICEMODEL_OFFSET))(value);
		}

		static ::System::String* get_CloudGraphicsDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICENAME_OFFSET))();
		}

		static ::System::Void set_CloudGraphicsDeviceName(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICENAME_OFFSET))(value);
		}

		static ::System::String* get_CloudGraphicsDeviceType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICETYPE_OFFSET))();
		}

		static ::System::Void set_CloudGraphicsDeviceType(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICETYPE_OFFSET))(value);
		}

		static ::System::String* get_CloudGraphicsDeviceVendor()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICEVENDOR_OFFSET))();
		}

		static ::System::Void set_CloudGraphicsDeviceVendor(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICEVENDOR_OFFSET))(value);
		}

		static ::System::String* get_CloudGraphicsDeviceVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSDEVICEVERSION_OFFSET))();
		}

		static ::System::Void set_CloudGraphicsDeviceVersion(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSDEVICEVERSION_OFFSET))(value);
		}

		static ::System::Int32 get_CloudGraphicsMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDGRAPHICSMEMORYSIZE_OFFSET))();
		}

		static ::System::Void set_CloudGraphicsMemorySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDGRAPHICSMEMORYSIZE_OFFSET))(value);
		}

		static ::System::Int32 get_CloudProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDPROCESSORCOUNT_OFFSET))();
		}

		static ::System::Void set_CloudProcessorCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDPROCESSORCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_CloudProcessorFrequency()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDPROCESSORFREQUENCY_OFFSET))();
		}

		static ::System::Void set_CloudProcessorFrequency(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDPROCESSORFREQUENCY_OFFSET))(value);
		}

		static ::System::String* get_CloudProcessorType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDPROCESSORTYPE_OFFSET))();
		}

		static ::System::Void set_CloudProcessorType(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDPROCESSORTYPE_OFFSET))(value);
		}

		static ::System::Int32 get_CloudSystemMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSYSTEMMEMORYSIZE_OFFSET))();
		}

		static ::System::Void set_CloudSystemMemorySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSYSTEMMEMORYSIZE_OFFSET))(value);
		}

		static ::System::Boolean get_CloudIsRichtapEffectSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDISRICHTAPEFFECTSUPPORTED_OFFSET))();
		}

		static ::System::Void set_CloudIsRichtapEffectSupported(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDISRICHTAPEFFECTSUPPORTED_OFFSET))(value);
		}

		static ::System::Boolean get_CloudIsVibratorEffectSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDISVIBRATOREFFECTSUPPORTED_OFFSET))();
		}

		static ::System::Void set_CloudIsVibratorEffectSupported(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDISVIBRATOREFFECTSUPPORTED_OFFSET))(value);
		}

		static ::System::Void add_OnSystemLanguageChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_ADD_ONSYSTEMLANGUAGECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_OnSystemLanguageChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_REMOVE_ONSYSTEMLANGUAGECHANGED_OFFSET))(value);
		}

		static ::UnityEngine::SystemLanguage GetSystemLanguage(::System::Boolean checkCloudGamePlatform)
		{
			return ((::UnityEngine::SystemLanguage(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GETSYSTEMLANGUAGE_OFFSET))(checkCloudGamePlatform);
		}

		static ::UnityEngine::SystemLanguage get_UnitySystemLanguage()
		{
			return ((::UnityEngine::SystemLanguage(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_UNITYSYSTEMLANGUAGE_OFFSET))();
		}

		static ::UnityEngine::SystemLanguage get_CloudSystemLanguage()
		{
			return ((::UnityEngine::SystemLanguage(*)())((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_GET_CLOUDSYSTEMLANGUAGE_OFFSET))();
		}

		static ::System::Void set_CloudSystemLanguage(::UnityEngine::SystemLanguage value)
		{
			return ((::System::Void(*)(::UnityEngine::SystemLanguage))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_SET_CLOUDSYSTEMLANGUAGE_OFFSET))(value);
		}

		static ::System::Void ResetCloudPlatformValues(::System::Boolean isStaticInit)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_RESETCLOUDPLATFORMVALUES_OFFSET))(isStaticInit);
		}

		static ::System::Void ResetUnityPlatformValues(::System::Boolean isStaticInit)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_RESETUNITYPLATFORMVALUES_OFFSET))(isStaticInit);
		}

		static ::System::Void ResetScreenValues(::System::Single user_screen_dpi, ::System::Int32 user_screen_width, ::System::Int32 user_screen_height, ::System::Single user_safe_area_x, ::System::Single user_safe_area_y, ::System::Single user_safe_area_width, ::System::Single user_safe_area_height)
		{
			return ((::System::Void(*)(::System::Single, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_RESETSCREENVALUES_OFFSET))(user_screen_dpi, user_screen_width, user_screen_height, user_safe_area_x, user_safe_area_y, user_safe_area_width, user_safe_area_height);
		}

		static ::System::Void ResetSafeArea(::System::Single x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 heigt)
		{
			return ((::System::Void(*)(::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_RESETSAFEAREA_OFFSET))(x, y, width, heigt);
		}

		static ::System::Void ResetSystemInfoValues(::System::String* operatingSystem, ::System::String* deviceName, ::System::String* deviceModel, ::System::String* graphicsDeviceName, ::System::String* graphicsDeviceType, ::System::String* graphicsDeviceVendor, ::System::String* graphicsDeviceVersion, ::System::Int32 graphicsMemorySize, ::System::Int32 processorCount, ::System::Int32 processorFrequency, ::System::String* processorType, ::System::Int32 systemMemorySize, ::System::Boolean isRichtapEffectSupported, ::System::Boolean isVibratorEffectSupported)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_RESETSYSTEMINFOVALUES_OFFSET))(operatingSystem, deviceName, deviceModel, graphicsDeviceName, graphicsDeviceType, graphicsDeviceVendor, graphicsDeviceVersion, graphicsMemorySize, processorCount, processorFrequency, processorType, systemMemorySize, isRichtapEffectSupported, isVibratorEffectSupported);
		}

		static ::System::Void ResetSystemLanguage(::UnityEngine::SystemLanguage language)
		{
			return ((::System::Void(*)(::UnityEngine::SystemLanguage))((::PBYTE)hIl2Cpp + FOUNDATION_APPUTILS_RESETSYSTEMLANGUAGE_OFFSET))(language);
		}
	};
}
