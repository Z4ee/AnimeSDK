#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AntialiasingMode.h"
#include "unitysdk/RPG/Client/Platform.h"
#include "unitysdk/RPG/Client/RPGQualitySettingsBoolWrapper.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/Resolution.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CRPEnvDetailSettings; }
namespace RPG::Client { class CRPShadowSettings; }
namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class RPGQualitySettingsData; }
namespace RPG::Client { class RPGQualitySettingsModel; }
namespace RPG::Client { class RPGQualitySettingsPerPlatform; }
namespace RPG::Client { class RPGQualitySettingsPreset; }
namespace RPG::Client { class StreamingFeature; }
namespace RPG::GameCore { class DeviceInfo; }
namespace RPG::GameCore { class ForceGlesDevices; }
namespace RPG::GameCore { class ForceVulkanDevices; }
namespace RPG::GameCore { class GraphicsSettingJson; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYCHARACTERSETTINGS_OFFSET UNITYSDK_OFFSET(0xC6927F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYENVDETAILSETTINGS_OFFSET UNITYSDK_OFFSET(0xC692D40)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYGRAPHICSSETTINGSJSON_OFFSET UNITYSDK_OFFSET(0xC68FB30)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYLIGHTSETTINGS_OFFSET UNITYSDK_OFFSET(0xC692370)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYNPCSETTINGS_OFFSET UNITYSDK_OFFSET(0xC693EF0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYREFLECTIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xC6935D0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0xC68D040)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSFXSETTINGS_OFFSET UNITYSDK_OFFSET(0xC693AD0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADERWARMUPQUALITYLEVELS_OFFSET UNITYSDK_OFFSET(0xC6947D0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0xC692050)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSTREAMINGFEATURE_OFFSET UNITYSDK_OFFSET(0xC694410)
#define RPG_CLIENT_RPGQUALITYSETTINGS_APPLYWITHOUTSAVE_OFFSET UNITYSDK_OFFSET(0xC68E2E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CALCPCRENDERSCALE_OFFSET UNITYSDK_OFFSET(0xC68ADC0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CHECKFORCEGRAPHICSAPICONFIG_OFFSET UNITYSDK_OFFSET(0xC691400)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CHECKPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xC690330)
#define RPG_CLIENT_RPGQUALITYSETTINGS_CLAMPRENDERSCALE_OFFSET UNITYSDK_OFFSET(0xC690BE0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ENABLELOCALLIGHTSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0xC68F470)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ENSURECUSTOMSETTINGS_OFFSET UNITYSDK_OFFSET(0xC690930)
#define RPG_CLIENT_RPGQUALITYSETTINGS_FORCECLOSEHIZOC_OFFSET UNITYSDK_OFFSET(0xC68EAD0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETALLDEVICERESOLUTIONS_OFFSET UNITYSDK_OFFSET(0xC68C0C0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETCRPENVSETTINGSPRESETBYQUALITY_OFFSET UNITYSDK_OFFSET(0xC690AD0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xC68FD60)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPSRESOLUTION_OFFSET UNITYSDK_OFFSET(0xC68FE90)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0xC68B460)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDCPUNAME_OFFSET UNITYSDK_OFFSET(0xC691660)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDGPUNAME_OFFSET UNITYSDK_OFFSET(0xC691AF0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETPERPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0xC68BEF0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETPLATFORM_OFFSET UNITYSDK_OFFSET(0xC68A6E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETPRESETSETTINGS_OFFSET UNITYSDK_OFFSET(0xC68A730)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETREALPLATFORM_OFFSET UNITYSDK_OFFSET(0xC68B370)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GETSAMESETTINGPRESETGRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0xC68A530)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_AAMODE_OFFSET UNITYSDK_OFFSET(0xC68AB30)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_BLOOMQUALITY_OFFSET UNITYSDK_OFFSET(0xC68AB00)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_BUGGYCPUSKINNING_OFFSET UNITYSDK_OFFSET(0xC694CA0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_CHARACTERQUALITY_OFFSET UNITYSDK_OFFSET(0xC68AA40)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_DLSSQUALITY_OFFSET UNITYSDK_OFFSET(0xC68ABF0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEHALFRESTRANSPARENT_OFFSET UNITYSDK_OFFSET(0xC68AB90)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEMETALFXSU_OFFSET UNITYSDK_OFFSET(0xC68AB60)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLESELFSHADOW_OFFSET UNITYSDK_OFFSET(0xC68ABC0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEVSYNC_OFFSET UNITYSDK_OFFSET(0xC68A980)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENVDETAILQUALITY_OFFSET UNITYSDK_OFFSET(0xC68AA70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_FORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0xC68B300)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_FPS_OFFSET UNITYSDK_OFFSET(0xC68A920)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0xC694D80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_INITIALGRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0xC68AC50)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_ISSUPPORT120FPS_OFFSET UNITYSDK_OFFSET(0xC694EF0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_LIGHTQUALITY_OFFSET UNITYSDK_OFFSET(0xC68AA10)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_NATIVERESOLUTION_OFFSET UNITYSDK_OFFSET(0xC68AC70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PARTICLETRAILSMOOTHNESS_OFFSET UNITYSDK_OFFSET(0xC68AC20)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTIONS_OFFSET UNITYSDK_OFFSET(0xC68AC60)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xC6950B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERDEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0xC68B440)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0xC68B420)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERSCENESHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0xC694CE0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_REFLECTIONQUALITY_OFFSET UNITYSDK_OFFSET(0xC68AAA0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0xC68A950)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_RESOLUTIONQUALITY_OFFSET UNITYSDK_OFFSET(0xC68A9B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_RPGSTREAMINGFEATURE_OFFSET UNITYSDK_OFFSET(0xC694E60)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_SFXQUALITY_OFFSET UNITYSDK_OFFSET(0xC68AAD0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_SHADOWQUALITY_OFFSET UNITYSDK_OFFSET(0xC68A9E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_GET_WARMUPQUALITYLEVELS_OFFSET UNITYSDK_OFFSET(0xC694820)
#define RPG_CLIENT_RPGQUALITYSETTINGS_HANDLECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xC690460)
#define RPG_CLIENT_RPGQUALITYSETTINGS_INIT_OFFSET UNITYSDK_OFFSET(0xC681E30)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_1_OFFSET UNITYSDK_OFFSET(0xC690F80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_OFFSET UNITYSDK_OFFSET(0xC690C80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_LOADGRAPHICSSETTINGJSON_OFFSET UNITYSDK_OFFSET(0xC691440)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ONGRAPHICSETTINGCHANGED_OFFSET UNITYSDK_OFFSET(0xC68E350)
#define RPG_CLIENT_RPGQUALITYSETTINGS_ONRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xC694E80)
#define RPG_CLIENT_RPGQUALITYSETTINGS_POSTAPPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0xC690A90)
#define RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHCUSTOMCONDITIONCONSOLEVAR_OFFSET UNITYSDK_OFFSET(0xC694D90)
#define RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHSTREAMINGMIPMAPSMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0xC691C70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETALLSETTINGS_OFFSET UNITYSDK_OFFSET(0xC690230)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETCASCADE4SPLIT_OFFSET UNITYSDK_OFFSET(0xC68F9D0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETLOCALLIGHTSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0xC68F640)
#define RPG_CLIENT_RPGQUALITYSETTINGS_RESETPOSMCOUNT_OFFSET UNITYSDK_OFFSET(0xC694B50)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SAVE_OFFSET UNITYSDK_OFFSET(0xC68DC40)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SCREEN_SETRESOLUTION_OFFSET UNITYSDK_OFFSET(0xC68ACB0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SETCASCADE4SPLIT_OFFSET UNITYSDK_OFFSET(0xC68F790)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SETCHIMERAGAMEMODE_OFFSET UNITYSDK_OFFSET(0xC68F050)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_AAMODE_OFFSET UNITYSDK_OFFSET(0xC6954B0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_BLOOMQUALITY_OFFSET UNITYSDK_OFFSET(0xC695420)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_BUGGYCPUSKINNING_OFFSET UNITYSDK_OFFSET(0xC68FC00)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_CHARACTERQUALITY_OFFSET UNITYSDK_OFFSET(0xC695270)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_DLSSQUALITY_OFFSET UNITYSDK_OFFSET(0xC695660)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEHALFRESTRANSPARENT_OFFSET UNITYSDK_OFFSET(0xC6955A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEMETALFXSU_OFFSET UNITYSDK_OFFSET(0xC695540)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLESELFSHADOW_OFFSET UNITYSDK_OFFSET(0xC690A00)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEVSYNC_OFFSET UNITYSDK_OFFSET(0xC694F50)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENVDETAILQUALITY_OFFSET UNITYSDK_OFFSET(0xC695300)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_FORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0xC68B310)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_FPS_OFFSET UNITYSDK_OFFSET(0xC694770)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_GRAPHICSQUALITY_OFFSET UNITYSDK_OFFSET(0xC68FEF0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_LIGHTQUALITY_OFFSET UNITYSDK_OFFSET(0xC6951E0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_NATIVERESOLUTION_OFFSET UNITYSDK_OFFSET(0xC68AC90)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PARTICLETRAILSMOOTHNESS_OFFSET UNITYSDK_OFFSET(0xC695600)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PCRESOLUTION_OFFSET UNITYSDK_OFFSET(0xC6950C0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERDEVICESETTINGS_OFFSET UNITYSDK_OFFSET(0xC68B450)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERPLATFORMSETTINGS_OFFSET UNITYSDK_OFFSET(0xC68B430)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERSCENESHADOWDISTANCE_OFFSET UNITYSDK_OFFSET(0xC694CF0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_REFLECTIONQUALITY_OFFSET UNITYSDK_OFFSET(0xC695390)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0xC694FB0)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_RESOLUTIONQUALITY_OFFSET UNITYSDK_OFFSET(0xC695020)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_RPGSTREAMINGFEATURE_OFFSET UNITYSDK_OFFSET(0xC694E70)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_SFXQUALITY_OFFSET UNITYSDK_OFFSET(0xC690970)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SET_SHADOWQUALITY_OFFSET UNITYSDK_OFFSET(0xC695150)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHBATTLEMODE_OFFSET UNITYSDK_OFFSET(0xC68EC20)
#define RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHSTORYMODE_OFFSET UNITYSDK_OFFSET(0xC68E3A0)
#define RPG_CLIENT_RPGQUALITYSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC695700)
#define RPG_CLIENT_RPGQUALITYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xC6956F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS__GETSHADOWSETTINGS_OFFSET UNITYSDK_OFFSET(0xC6948F0)
#define RPG_CLIENT_RPGQUALITYSETTINGS__ISEQUALPRESETSETTING_OFFSET UNITYSDK_OFFSET(0xC68A810)
#define RPG_CLIENT_RPGQUALITYSETTINGS__NEEDLOWERRESOLUTION_OFFSET UNITYSDK_OFFSET(0xC691D40)
#define RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDEENVDETAILSETTINGSBYCMDLINEINPUT_OFFSET UNITYSDK_OFFSET(0xC6908C0)
#define RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYCMDLINEINPUT_OFFSET UNITYSDK_OFFSET(0xC68CC60)
#define RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYLOCALSAVEDATA_OFFSET UNITYSDK_OFFSET(0xC68C7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGQualitySettings_TypeDefinitionIndex = 63543;

	class RPGQualitySettings : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__gpuNamePostFixPattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x60F0);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Resolution>** StaticGet_m_UniqueDeviceResolutions()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Resolution>**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x60F8);
		}
		static ::RPG::GameCore::GraphicsSettingJson** StaticGet__graphicsSetting()
		{
			return (::RPG::GameCore::GraphicsSettingJson**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6100);
		}
		static ::RPG::Client::RPGQualitySettingsPerPlatform** StaticGet__PerPlatformSettings_k__BackingField()
		{
			return (::RPG::Client::RPGQualitySettingsPerPlatform**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6108);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__gpuNameRemovePattern()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6110);
		}
		static ::RPG::GameCore::DeviceInfo** StaticGet__PerDeviceSettings_k__BackingField()
		{
			return (::RPG::GameCore::DeviceInfo**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6118);
		}
		static ::RPG::Client::PCResolution** StaticGet_m_PCCurResolution()
		{
			return (::RPG::Client::PCResolution**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6120);
		}
		static ::System::String** StaticGet_PCMatchCPUName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6128);
		}
		static ::System::String** StaticGet_PCMatchGPUName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6130);
		}
		static ::RPG::Client::RPGQualitySettingsData** StaticGet_m_QualityData()
		{
			return (::RPG::Client::RPGQualitySettingsData**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6138);
		}
		static ::RPG::Client::PCResolution** StaticGet_m_PSResolution()
		{
			return (::RPG::Client::PCResolution**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6140);
		}
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_s_PlayerFastQuit()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6148);
		}
		static ::RPG::Client::RPGQualitySettingsModel** StaticGet_m_Model()
		{
			return (::RPG::Client::RPGQualitySettingsModel**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6158);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>** StaticGet__PCResolutions_k__BackingField()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6160);
		}
		static ::RPG::Client::StreamingFeature** StaticGet__RPGStreamingFeature_k__BackingField()
		{
			return (::RPG::Client::StreamingFeature**)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x6168);
		}
		static ::System::Int32* StaticGet__Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30C0);
		}
		static ::System::Int32* StaticGet_PCMatchGPUGrade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30C4);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableHiZOCBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30C8);
		}
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableLocalLightShadowCacheBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30CA);
		}
		static ::System::Boolean* StaticGet__FullScreen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30CC);
		}
		static ::System::Nullable_1<::UnityEngine::Vector3>* StaticGet__Cascade4SplitBefore()
		{
			return (::System::Nullable_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30D0);
		}
		static ::RPG::CustomRP::Quality* StaticGet_m_GraphicsQuality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30E0);
		}
		static ::RPG::CustomRP::Quality* StaticGet_m_InitialGraphicsQuality()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30E4);
		}
		static ::System::Int32* StaticGet__Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30E8);
		}
		static ::System::Single* StaticGet_m_PerSceneShadowDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30EC);
		}
		static ::RPG::Client::Platform* StaticGet_m_ForceChoosePlatform()
		{
			return (::RPG::Client::Platform*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30F0);
		}
		static ::RPG::CustomRP::Quality* StaticGet__LastValueForCustomConditionConsoleVar()
		{
			return (::RPG::CustomRP::Quality*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30F4);
		}
		static ::UnityEngine::Resolution* StaticGet__NativeResolution_k__BackingField()
		{
			return (::UnityEngine::Resolution*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x30F8);
		}
		static ::System::Single* StaticGet_m_PresetRenderScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x3104);
		}
		static ::System::Int32* StaticGet_PCMatchCPUGrade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x3108);
		}
		static ::System::Int32* StaticGet_PCMatchCommonGrade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGQualitySettings_TypeDefinitionIndex)->GetStaticField(0x310C);
		}
		// static const ::System::Int32 VERSION = 0xA; // 0x0
		// static const ::System::Int32 RESOLUTION_4K_WIDTH = 0xF00; // 0x0
		// static const ::System::Int32 RESOLUTION_4K_HEIGHT = 0x870; // 0x0
		// static const ::System::Int32 LOWER_RESOLUTION_ADRENO_DRIVER_MAIN_VERSION = 0x320; // 0x0
		// static const ::System::Int32 LOWER_RESOLUTION_ADRENO_DRIVER_SUB_VERSION = 0xE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__CCTOR_OFFSET))();
		}

		static ::RPG::CustomRP::Quality GetSameSettingPresetGraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETSAMESETTINGPRESETGRAPHICSQUALITY_OFFSET))();
		}

		static ::System::Boolean _IsEqualPresetSetting(::RPG::Client::RPGQualitySettingsModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RPGQualitySettingsModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__ISEQUALPRESETSETTING_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_InitialGraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_INITIALGRAPHICSQUALITY_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>* get_PCResolutions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PCResolution*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTIONS_OFFSET))();
		}

		static ::UnityEngine::Resolution get_NativeResolution()
		{
			return ((::UnityEngine::Resolution(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_NATIVERESOLUTION_OFFSET))();
		}

		static ::System::Void set_NativeResolution(::UnityEngine::Resolution a1)
		{
			return ((::System::Void(*)(::UnityEngine::Resolution))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_NATIVERESOLUTION_OFFSET))(a1);
		}

		static ::System::Void Screen_SetResolution(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SCREEN_SETRESOLUTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CalcPCRenderScale(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CALCPCRENDERSCALE_OFFSET))(a1);
		}

		static ::RPG::Client::Platform get_ForceChoosePlatform()
		{
			return ((::RPG::Client::Platform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_FORCECHOOSEPLATFORM_OFFSET))();
		}

		static ::System::Void set_ForceChoosePlatform(::RPG::Client::Platform a1)
		{
			return ((::System::Void(*)(::RPG::Client::Platform))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_FORCECHOOSEPLATFORM_OFFSET))(a1);
		}

		static ::RPG::Client::Platform GetRealPlatform()
		{
			return ((::RPG::Client::Platform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETREALPLATFORM_OFFSET))();
		}

		static ::RPG::Client::Platform GetPlatform()
		{
			return ((::RPG::Client::Platform(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETPLATFORM_OFFSET))();
		}

		static ::RPG::Client::RPGQualitySettingsPerPlatform* get_PerPlatformSettings()
		{
			return ((::RPG::Client::RPGQualitySettingsPerPlatform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERPLATFORMSETTINGS_OFFSET))();
		}

		static ::System::Void set_PerPlatformSettings(::RPG::Client::RPGQualitySettingsPerPlatform* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RPGQualitySettingsPerPlatform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERPLATFORMSETTINGS_OFFSET))(a1);
		}

		static ::RPG::GameCore::DeviceInfo* get_PerDeviceSettings()
		{
			return ((::RPG::GameCore::DeviceInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERDEVICESETTINGS_OFFSET))();
		}

		static ::System::Void set_PerDeviceSettings(::RPG::GameCore::DeviceInfo* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DeviceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERDEVICESETTINGS_OFFSET))(a1);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_INIT_OFFSET))();
		}

		static ::System::Void Save()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SAVE_OFFSET))();
		}

		static ::System::Void ApplyWithoutSave()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYWITHOUTSAVE_OFFSET))();
		}

		static ::System::Void SwitchStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHSTORYMODE_OFFSET))(a1);
		}

		static ::System::Void ForceCloseHiZOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_FORCECLOSEHIZOC_OFFSET))(a1);
		}

		static ::System::Void SwitchBattleMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SWITCHBATTLEMODE_OFFSET))(a1);
		}

		static ::System::Void SetChimeraGameMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SETCHIMERAGAMEMODE_OFFSET))(a1);
		}

		static ::System::Void EnableLocalLightShadowCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ENABLELOCALLIGHTSHADOWCACHE_OFFSET))(a1);
		}

		static ::System::Void SetCascade4Split(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SETCASCADE4SPLIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ResetLocalLightShadowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETLOCALLIGHTSHADOWCACHE_OFFSET))();
		}

		static ::System::Void ResetCascade4Split()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETCASCADE4SPLIT_OFFSET))();
		}

		static ::System::Void ApplyGraphicsSettingsJson()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYGRAPHICSSETTINGSJSON_OFFSET))();
		}

		static ::System::Void _OverrideSettingsByLocalSaveData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYLOCALSAVEDATA_OFFSET))();
		}

		static ::System::Void _OverrideSettingsByCmdLineInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDESETTINGSBYCMDLINEINPUT_OFFSET))();
		}

		static ::System::Void _OverrideEnvDetailSettingsByCmdLineInput()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__OVERRIDEENVDETAILSETTINGSBYCMDLINEINPUT_OFFSET))();
		}

		static ::System::Void EnsureCustomSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ENSURECUSTOMSETTINGS_OFFSET))();
		}

		static ::System::Void ResetAllSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETALLSETTINGS_OFFSET))();
		}

		static ::System::Void HandleCompatible()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_HANDLECOMPATIBLE_OFFSET))();
		}

		static ::System::Void PostApplySettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_POSTAPPLYSETTINGS_OFFSET))();
		}

		static ::RPG::Client::CRPEnvDetailSettings* GetCRPEnvSettingsPresetByQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::RPG::Client::CRPEnvDetailSettings*(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETCRPENVSETTINGSPRESETBYQUALITY_OFFSET))(a1);
		}

		static ::RPG::Client::RPGQualitySettingsPreset* GetPresetSettings()
		{
			return ((::RPG::Client::RPGQualitySettingsPreset*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETPRESETSETTINGS_OFFSET))();
		}

		static ::RPG::Client::RPGQualitySettingsPerPlatform* GetPerPlatformSettings()
		{
			return ((::RPG::Client::RPGQualitySettingsPerPlatform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETPERPLATFORMSETTINGS_OFFSET))();
		}

		static ::System::Void GetAllDeviceResolutions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETALLDEVICERESOLUTIONS_OFFSET))();
		}

		static ::RPG::Client::PCResolution* GetDefaultPCResolution()
		{
			return ((::RPG::Client::PCResolution*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPCRESOLUTION_OFFSET))();
		}

		static ::RPG::Client::PCResolution* GetDefaultPSResolution()
		{
			return ((::RPG::Client::PCResolution*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETDEFAULTPSRESOLUTION_OFFSET))();
		}

		static ::RPG::Client::PCResolution* CheckPCResolution(::RPG::Client::PCResolution* a1)
		{
			return ((::RPG::Client::PCResolution*(*)(::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CHECKPCRESOLUTION_OFFSET))(a1);
		}

		static ::System::Void ClampRenderScale()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CLAMPRENDERSCALE_OFFSET))();
		}

		static ::System::Boolean IsDeviceExists(::RPG::GameCore::ForceGlesDevices* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ForceGlesDevices*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsDeviceExists_1(::RPG::GameCore::ForceVulkanDevices* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ForceVulkanDevices*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ISDEVICEEXISTS_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CheckForceGraphicsAPIConfig(::RPG::GameCore::GraphicsSettingJson* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GraphicsSettingJson*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_CHECKFORCEGRAPHICSAPICONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::GraphicsSettingJson* LoadGraphicsSettingJson()
		{
			return ((::RPG::GameCore::GraphicsSettingJson*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_LOADGRAPHICSSETTINGJSON_OFFSET))();
		}

		static ::RPG::GameCore::DeviceInfo* GetDeviceInfo()
		{
			return ((::RPG::GameCore::DeviceInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETDEVICEINFO_OFFSET))();
		}

		static ::System::String* GetFormattedCPUName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDCPUNAME_OFFSET))();
		}

		static ::System::String* GetFormattedGPUName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GETFORMATTEDGPUNAME_OFFSET))();
		}

		static ::System::Void ApplySettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSETTINGS_OFFSET))();
		}

		static ::Il2CppArray<::System::Int32>* get_WarmupQualityLevels()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_WARMUPQUALITYLEVELS_OFFSET))();
		}

		static ::System::Void ApplyShaderWarmupQualityLevels()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADERWARMUPQUALITYLEVELS_OFFSET))();
		}

		static ::System::Boolean _NeedLowerResolution()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__NEEDLOWERRESOLUTION_OFFSET))();
		}

		static ::System::Void RefreshStreamingMipmapsMemoryBudget()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHSTREAMINGMIPMAPSMEMORYBUDGET_OFFSET))();
		}

		static ::System::Void ApplyShadowSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSHADOWSETTINGS_OFFSET))();
		}

		static ::RPG::Client::CRPShadowSettings* _GetShadowSettings()
		{
			return ((::RPG::Client::CRPShadowSettings*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS__GETSHADOWSETTINGS_OFFSET))();
		}

		static ::System::Void ResetPOSMCount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_RESETPOSMCOUNT_OFFSET))();
		}

		static ::System::Void ApplyLightSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYLIGHTSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyCharacterSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYCHARACTERSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyEnvDetailSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYENVDETAILSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyReflectionSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYREFLECTIONSETTINGS_OFFSET))();
		}

		static ::System::Void ApplySFXSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSFXSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyNPCSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYNPCSETTINGS_OFFSET))();
		}

		static ::System::Void ApplyStreamingFeature()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_APPLYSTREAMINGFEATURE_OFFSET))();
		}

		static ::System::Single get_PerSceneShadowDistance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PERSCENESHADOWDISTANCE_OFFSET))();
		}

		static ::System::Void set_PerSceneShadowDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PERSCENESHADOWDISTANCE_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_GraphicsQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_GRAPHICSQUALITY_OFFSET))();
		}

		static ::System::Void set_GraphicsQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_GRAPHICSQUALITY_OFFSET))(a1);
		}

		static ::RPG::Client::StreamingFeature* get_RPGStreamingFeature()
		{
			return ((::RPG::Client::StreamingFeature*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_RPGSTREAMINGFEATURE_OFFSET))();
		}

		static ::System::Void set_RPGStreamingFeature(::RPG::Client::StreamingFeature* a1)
		{
			return ((::System::Void(*)(::RPG::Client::StreamingFeature*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_RPGSTREAMINGFEATURE_OFFSET))(a1);
		}

		static ::System::Void OnGraphicSettingChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ONGRAPHICSETTINGCHANGED_OFFSET))();
		}

		static ::System::Void OnResolutionChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_ONRESOLUTIONCHANGED_OFFSET))();
		}

		static ::System::Boolean get_IsSupport120FPS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ISSUPPORT120FPS_OFFSET))();
		}

		static ::System::Int32 get_FPS()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_FPS_OFFSET))();
		}

		static ::System::Void set_FPS(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_FPS_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableVSync()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEVSYNC_OFFSET))();
		}

		static ::System::Void set_EnableVSync(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEVSYNC_OFFSET))(a1);
		}

		static ::System::Single get_RenderScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_RENDERSCALE_OFFSET))();
		}

		static ::System::Void set_RenderScale(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_RENDERSCALE_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_ResolutionQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_RESOLUTIONQUALITY_OFFSET))();
		}

		static ::System::Void set_ResolutionQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_RESOLUTIONQUALITY_OFFSET))(a1);
		}

		static ::RPG::Client::PCResolution* get_PCResolution()
		{
			return ((::RPG::Client::PCResolution*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PCRESOLUTION_OFFSET))();
		}

		static ::System::Void set_PCResolution(::RPG::Client::PCResolution* a1)
		{
			return ((::System::Void(*)(::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PCRESOLUTION_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_ShadowQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_SHADOWQUALITY_OFFSET))();
		}

		static ::System::Void set_ShadowQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_SHADOWQUALITY_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_LightQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_LIGHTQUALITY_OFFSET))();
		}

		static ::System::Void set_LightQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_LIGHTQUALITY_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_CharacterQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_CHARACTERQUALITY_OFFSET))();
		}

		static ::System::Void set_CharacterQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_CHARACTERQUALITY_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_EnvDetailQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENVDETAILQUALITY_OFFSET))();
		}

		static ::System::Void set_EnvDetailQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENVDETAILQUALITY_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_ReflectionQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_REFLECTIONQUALITY_OFFSET))();
		}

		static ::System::Void set_ReflectionQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_REFLECTIONQUALITY_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_SFXQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_SFXQUALITY_OFFSET))();
		}

		static ::System::Void set_SFXQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_SFXQUALITY_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_BloomQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_BLOOMQUALITY_OFFSET))();
		}

		static ::System::Void set_BloomQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_BLOOMQUALITY_OFFSET))(a1);
		}

		static ::RPG::Client::AntialiasingMode get_AAMode()
		{
			return ((::RPG::Client::AntialiasingMode(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_AAMODE_OFFSET))();
		}

		static ::System::Void set_AAMode(::RPG::Client::AntialiasingMode a1)
		{
			return ((::System::Void(*)(::RPG::Client::AntialiasingMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_AAMODE_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableMetalFXSU()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEMETALFXSU_OFFSET))();
		}

		static ::System::Void set_EnableMetalFXSU(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEMETALFXSU_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableHalfResTransparent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLEHALFRESTRANSPARENT_OFFSET))();
		}

		static ::System::Void set_EnableHalfResTransparent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLEHALFRESTRANSPARENT_OFFSET))(a1);
		}

		static ::System::Int32 get_ParticleTrailSmoothness()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_PARTICLETRAILSMOOTHNESS_OFFSET))();
		}

		static ::System::Void set_ParticleTrailSmoothness(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_PARTICLETRAILSMOOTHNESS_OFFSET))(a1);
		}

		static ::RPG::Client::RPGQualitySettingsBoolWrapper get_EnableSelfShadow()
		{
			return ((::RPG::Client::RPGQualitySettingsBoolWrapper(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_ENABLESELFSHADOW_OFFSET))();
		}

		static ::System::Void set_EnableSelfShadow(::RPG::Client::RPGQualitySettingsBoolWrapper a1)
		{
			return ((::System::Void(*)(::RPG::Client::RPGQualitySettingsBoolWrapper))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_ENABLESELFSHADOW_OFFSET))(a1);
		}

		static ::RPG::CustomRP::Quality get_DlssQuality()
		{
			return ((::RPG::CustomRP::Quality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_DLSSQUALITY_OFFSET))();
		}

		static ::System::Void set_DlssQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_DLSSQUALITY_OFFSET))(a1);
		}

		static ::System::Boolean get_BuggyCpuSkinning()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_GET_BUGGYCPUSKINNING_OFFSET))();
		}

		static ::System::Void set_BuggyCpuSkinning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_SET_BUGGYCPUSKINNING_OFFSET))(a1);
		}

		static ::System::Void RefreshCustomConditionConsoleVar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGQUALITYSETTINGS_REFRESHCUSTOMCONDITIONCONSOLEVAR_OFFSET))();
		}
	};
}
