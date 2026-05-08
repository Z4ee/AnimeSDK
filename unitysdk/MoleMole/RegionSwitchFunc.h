#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_REGIONSWITCHFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE7520)

namespace MoleMole
{
	inline static constexpr unsigned int RegionSwitchFunc_TypeDefinitionIndex = 71282;

	class RegionSwitchFunc : public ::System::Object
	{
	public:
		::System::Int32 disableExecuteAsync; // 0x10
		::System::Int32 disableSRPHelper; // 0x14
		::System::Int32 disableiOSShaderHibernation; // 0x18
		::System::Int32 disableiOSGPUBufferOpt; // 0x1C
		::System::Int32 disableSkinMeshStrip; // 0x20
		::System::Int32 disableAnimAllocatorOpt; // 0x24
		::System::Int32 disableTexStreamingVisbilityOpt; // 0x28
		::System::Int32 enableiOSShaderWarmupOnStartup; // 0x2C
		::System::Int32 disableSRPInstancing; // 0x30
		::System::Int32 disableObjectInstanceCache; // 0x34
		::System::Int32 disableMetalPSOCreateAsync; // 0x38
		::System::Int32 disableAsyncSRPSubmit; // 0x3C
		::System::Int32 disableStepPreloadMonster; // 0x40
		::System::Int32 disableAsyncUploadJob; // 0x44
		::System::Int32 disableLoadSceneParallel; // 0x48
		::System::Int32 disablePrepareRenderersOpt; // 0x4C
		::System::Int32 disableSDKWebViewOptimize; // 0x50
		::System::Int32 disableUINeonTransform; // 0x54
		::System::Int32 disableMetalShaderMemOpt; // 0x58
		::System::Int32 disableFlatbufferNativeArrayOpt; // 0x5C
		::System::Int32 enablePhyManagerJob; // 0x60
		::System::Int32 disableRayTracing; // 0x64
		::System::Int32 disableMeshLet; // 0x68
		::System::Int32 disableIOSMTLHeapOpt; // 0x6C
		::System::Int32 disableVKPSOJob; // 0x70
		::System::Int32 disableDriverInfo; // 0x74
		::System::Int32 perfSwitch1; // 0x78
		::System::Int32 perfSwitch2; // 0x7C
		::System::Int32 enableNoticeMobileConsole; // 0x80
		::System::Int32 enableGachaMobileConsole; // 0x84
		::System::Int32 enableNoticeMobileConsole_cloud; // 0x88
		::System::Int32 enableGachaMobileConsole_cloud; // 0x8C
		::System::Int32 forceExternalWebLinksInPC_cloud; // 0x90
		::System::Int32 forceExternalWebLinksInMac_cloud; // 0x94
		::System::Int32 isKcp; // 0x98
		::System::Int32 Disable_Audio_Download; // 0x9C
		::System::Int32 Play_The_Music; // 0xA0
		::System::Int32 Hide_download_progress; // 0xA4
		::System::Int32 Medium_Package_Play; // 0xA8
		::System::Int32 Hide_Download_complete_resources; // 0xAC
		::System::Int32 Hide_Download_resources_popups; // 0xB0
		::System::Int32 Close_Medium_Package_Download; // 0xB4
		::System::Int32 open_hotfix_popups; // 0xB8
		::System::Int32 Disable_Popup_Notification; // 0xBC
		::System::Int32 Force_Verify_all_assets; // 0xC0
		::System::Int32 Force_CleanExpire_next_boot; // 0xC4
		::System::Int32 EnableWaterMark; // 0xC8
		::System::String* mtrConfig; // 0xD0
		::System::Int32 enableOperationLog; // 0xD8
		::System::Int32 Turnoff_Push_notifications; // 0xDC
		::System::Int32 Disable_Frequent_attempts; // 0xE0
		::System::Int32 enablePerformanceLog; // 0xE4
		::System::Int32 Hide_Code_Login; // 0xE8
		::System::Int32 Disable_Diff_In_NormalUpdate; // 0xEC
		::System::Int32 Disable_Diff_InPredownload; // 0xF0
		::System::Int32 Disable_Delete_Redundant_Res; // 0xF4
		::System::Int32 Disable_Packages_Manage; // 0xF8
		::System::Int32 Enable_PC_Packages_Manage; // 0xFC
		::System::Int32 Enable_Base_Packages_Manage; // 0x100
		::System::Int32 Enable_Products_Cache; // 0x104
		::System::Int32 Disable_Report_RootSize; // 0x108
		::System::Int32 Force_Console_AllLangAudio; // 0x10C
		::System::Int32 Show_CloudGameEntrance; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REGIONSWITCHFUNC__CTOR_OFFSET))(this);
		}
	};
}
