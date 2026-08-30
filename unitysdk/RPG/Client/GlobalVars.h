#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HideInteractiveUIReason.h"
#include "unitysdk/RPG/Client/StartUpReasonType.h"
#include "unitysdk/System/Object.h"

class Class_1_0C1B8B2E4F85A50B;
class Class_1_0CB6C61727512407;
class Class_1_0FE8866DA7E9C099;
class Class_1_1D3775522860A581;
class Class_1_21F37629863F4674;
class Class_1_293FF9D2EE901E33;
class Class_1_31B28970A5870409;
class Class_1_33B50469231C7D95;
class Class_1_34E3B780DA1AE78E;
class Class_1_3CDB3F9C4A1134B7;
class Class_1_40C8E2F7BA4DE994;
class Class_1_46C4AD3834C1EA18;
class Class_1_6041ED8E42CCA413;
class Class_1_7034D7C52E05781E;
class Class_1_7B4E9156998275BE;
class Class_1_88DC60C54E5C3B07;
class Class_1_8E325EC9057215AB;
class Class_1_94DB5F1FACA13068;
class Class_1_AB238635C71ABAA0;
class Class_1_B93C65313845AAEB;
class Class_1_C8FB696C4B9416C3;
class Class_1_CB35F14FEF4E91E1;
class Class_1_D2B8D50DD9833CFC;
class Class_1_D949B99CBE5E8045;
class Class_1_DB8D2359E085AA87;
class Class_1_E3ED3259960F0549;
class Class_1_E4577D40E9E78807;
class Class_1_E5AFA09D8E02FD08;
class Class_1_F0D462198B262603;
class Class_1_F11BD9383D17B528;
class Class_1_F5228F8C22090BDC;
class Class_1_F846C02FF2F1434D;
class Class_1_F91E67CF9C01D94B;
class Class_1_FDDA284A31AE5159;
class Class_2_04AC45AC06EB04C7;
class Class_2_204B0797FD6E1A9C;
class Class_2_6821B2280D711A52;
class Class_2_DE2B33861A1AE2C3;
class Class_3_86D599DC64D615CE;
namespace InControl { class InControlInputModule; }
namespace RPG::Client { class AssetMgr; }
namespace RPG::Client { class AudioManager; }
namespace RPG::Client { class CameraManager; }
namespace RPG::Client { class ClientOnlyCommonConfig; }
namespace RPG::Client { class DialogueManager; }
namespace RPG::Client { class EffectPluginManager; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class GameFlowManager; }
namespace RPG::Client { class GamePhaseManager; }
namespace RPG::Client { class GamePlayLockManager; }
namespace RPG::Client { class GlobalConfigManager; }
namespace RPG::Client { class GyroManager; }
namespace RPG::Client { class IFixGlobalExtendMemberManager; }
namespace RPG::Client { class InControlActionsManager; }
namespace RPG::Client { class InputSettingKeyConflictManager; }
namespace RPG::Client { class LoadingManager; }
namespace RPG::Client { class LocalizationManager; }
namespace RPG::Client { class LuaSystem; }
namespace RPG::Client { class ModuleManager; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PSManager; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PlayGoManager; }
namespace RPG::Client { class PreDownloadManager; }
namespace RPG::Client { class RPGSDKAccountManager; }
namespace RPG::Client { class RenderOptionsManager; }
namespace RPG::Client { class ResolutionController; }
namespace RPG::Client { class SettingManager; }
namespace RPG::Client { class SimulateSpeedController; }
namespace RPG::Client { class TextmapDownloadManager; }
namespace RPG::Client { class TimeManager; }
namespace RPG::Client { class TimerManager; }
namespace RPG::Client { class UIManager; }
namespace RPG::Client { class VietNam18DialogContext; }
namespace RPG::GameCore { class VersionData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Version; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GLOBALVARS_ASYNCINITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0xD11B030)
#define RPG_CLIENT_GLOBALVARS_CHECKPACKAGEREINSTALL_OFFSET UNITYSDK_OFFSET(0xD1182A0)
#define RPG_CLIENT_GLOBALVARS_CLEARHIDEINTERACTIVEUIREASONS_OFFSET UNITYSDK_OFFSET(0xD11E4C0)
#define RPG_CLIENT_GLOBALVARS_CLEAROLDINSTALLFILES_OFFSET UNITYSDK_OFFSET(0xD11E6D0)
#define RPG_CLIENT_GLOBALVARS_GETINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xD11F230)
#define RPG_CLIENT_GLOBALVARS_GETLASTPACKAGEVERSION_OFFSET UNITYSDK_OFFSET(0xD11F050)
#define RPG_CLIENT_GLOBALVARS_GET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0xD11F660)
#define RPG_CLIENT_GLOBALVARS_GET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0xD11F720)
#define RPG_CLIENT_GLOBALVARS_GET_S_FPSCOUNTER_OFFSET UNITYSDK_OFFSET(0xD11F360)
#define RPG_CLIENT_GLOBALVARS_GET_S_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0xD11E440)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD11F3B0)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEEDREAL_OFFSET UNITYSDK_OFFSET(0xD11F5A0)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xD11F420)
#define RPG_CLIENT_GLOBALVARS_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0xD11E160)
#define RPG_CLIENT_GLOBALVARS_INITBASEANDSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0xD11B0C0)
#define RPG_CLIENT_GLOBALVARS_INITBASECONFIGSTEP_OFFSET UNITYSDK_OFFSET(0xD117F90)
#define RPG_CLIENT_GLOBALVARS_INITCONFIGMANAGER_OFFSET UNITYSDK_OFFSET(0xD118660)
#define RPG_CLIENT_GLOBALVARS_INITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0xD11A980)
#define RPG_CLIENT_GLOBALVARS_INITMOTIONMANAGER_OFFSET UNITYSDK_OFFSET(0xD11E080)
#define RPG_CLIENT_GLOBALVARS_INITSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0xD118750)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODCHECKRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0xD11E610)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODOPEN_OFFSET UNITYSDK_OFFSET(0xD11E580)
#define RPG_CLIENT_GLOBALVARS_REMOVETMPINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xD11ED80)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSIONTMP_OFFSET UNITYSDK_OFFSET(0xD11ED20)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xD11E670)
#define RPG_CLIENT_GLOBALVARS_SET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0xD11F6A0)
#define RPG_CLIENT_GLOBALVARS_SET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0xD11F760)
#define RPG_CLIENT_GLOBALVARS_SET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD11F3E0)
#define RPG_CLIENT_GLOBALVARS_SHADERWARMUP_OFFSET UNITYSDK_OFFSET(0xD11B130)
#define RPG_CLIENT_GLOBALVARS_TESTERMPTY_OFFSET UNITYSDK_OFFSET(0xD117F50)
#define RPG_CLIENT_GLOBALVARS_UNINITGLOBALVARS_OFFSET UNITYSDK_OFFSET(0xD11B3A0)
#define RPG_CLIENT_GLOBALVARS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD117DE0)
#define RPG_CLIENT_GLOBALVARS__INITDICONTAINER_OFFSET UNITYSDK_OFFSET(0xD11A820)
#define RPG_CLIENT_GLOBALVARS__INITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD11A0D0)
#define RPG_CLIENT_GLOBALVARS__RELEASEGLOBALRESOURCES_OFFSET UNITYSDK_OFFSET(0xD11B2F0)
#define RPG_CLIENT_GLOBALVARS__SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xD11E870)
#define RPG_CLIENT_GLOBALVARS__SHOULDCLEARPERISISTENTDIR_OFFSET UNITYSDK_OFFSET(0xD11EE00)
#define RPG_CLIENT_GLOBALVARS__UNINITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD11E040)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalVars_TypeDefinitionIndex = 61385;

	class GlobalVars : public ::System::Object
	{
	public:
		static ::RPG::Client::LuaSystem** StaticGet_s_LuaSystem()
		{
			return (::RPG::Client::LuaSystem**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x18F0);
		}
		static ::RPG::Client::TimerManager** StaticGet_s_TimerManager()
		{
			return (::RPG::Client::TimerManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x18F8);
		}
		static ::RPG::Client::GlobalConfigManager** StaticGet_s_ConfigManager()
		{
			return (::RPG::Client::GlobalConfigManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1900);
		}
		static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_s_ClientOnlyCommonConfig()
		{
			return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1908);
		}
		static ::RPG::Client::UIManager** StaticGet_s_UIManager()
		{
			return (::RPG::Client::UIManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1910);
		}
		static ::RPG::Client::CameraManager** StaticGet_s_CameraManager()
		{
			return (::RPG::Client::CameraManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1918);
		}
		static ::Class_1_1D3775522860A581** StaticGet_s_CharacterEffectManager()
		{
			return (::Class_1_1D3775522860A581**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1920);
		}
		static ::UnityEngine::GameObject** StaticGet_s_EasytouchGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1928);
		}
		static ::Class_1_3CDB3F9C4A1134B7** StaticGet_s_TAMonoTickManager()
		{
			return (::Class_1_3CDB3F9C4A1134B7**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1930);
		}
		static ::UnityEngine::Transform** StaticGet_s_BillboardRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1938);
		}
		static ::Class_1_CB35F14FEF4E91E1** StaticGet_s_TimelineManager()
		{
			return (::Class_1_CB35F14FEF4E91E1**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1940);
		}
		static ::RPG::Client::LocalizationManager** StaticGet_s_LocalizationManager()
		{
			return (::RPG::Client::LocalizationManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1948);
		}
		static ::Class_2_204B0797FD6E1A9C** StaticGet_s_StackCameraManager()
		{
			return (::Class_2_204B0797FD6E1A9C**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1950);
		}
		static ::Class_1_7B4E9156998275BE** StaticGet_s_DiContainer()
		{
			return (::Class_1_7B4E9156998275BE**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1958);
		}
		static ::Class_1_E5AFA09D8E02FD08** StaticGet_s_ShaderWarmupManager()
		{
			return (::Class_1_E5AFA09D8E02FD08**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1960);
		}
		static ::Class_1_0C1B8B2E4F85A50B** StaticGet_s_LuaHotfixManager()
		{
			return (::Class_1_0C1B8B2E4F85A50B**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1968);
		}
		static ::RPG::Client::SettingManager** StaticGet_s_SettingManager()
		{
			return (::RPG::Client::SettingManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1970);
		}
		static ::RPG::Client::GameFlowManager** StaticGet_s_GameFlowManager()
		{
			return (::RPG::Client::GameFlowManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1978);
		}
		static ::RPG::GameCore::VersionData** StaticGet_s_VersionData()
		{
			return (::RPG::GameCore::VersionData**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1980);
		}
		static ::RPG::Client::IFixGlobalExtendMemberManager** StaticGet_s_IFixGlobalExtendMemberManager()
		{
			return (::RPG::Client::IFixGlobalExtendMemberManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1988);
		}
		static ::RPG::Client::EffectPluginManager** StaticGet_s_EffectPluginManager()
		{
			return (::RPG::Client::EffectPluginManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1990);
		}
		static ::UnityEngine::GameObject** StaticGet_s_WwiseInitializerGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1998);
		}
		static ::UnityEngine::Camera** StaticGet_s_MainCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19A0);
		}
		static ::Class_1_F11BD9383D17B528** StaticGet_s_Tween()
		{
			return (::Class_1_F11BD9383D17B528**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19A8);
		}
		static ::Class_1_21F37629863F4674** StaticGet_s_VirtualServerManager()
		{
			return (::Class_1_21F37629863F4674**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19B0);
		}
		static ::Class_1_F846C02FF2F1434D** StaticGet_s_MaterialGroupCbManager()
		{
			return (::Class_1_F846C02FF2F1434D**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19B8);
		}
		static ::UnityEngine::Transform** StaticGet_s_CharacterCache()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19C0);
		}
		static ::Class_1_AB238635C71ABAA0** StaticGet_s_ShaderPropertyTransitionManager()
		{
			return (::Class_1_AB238635C71ABAA0**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19C8);
		}
		static ::RPG::Client::NetworkManager** StaticGet_s_NetworkManager()
		{
			return (::RPG::Client::NetworkManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19D0);
		}
		static ::Class_1_94DB5F1FACA13068** StaticGet_s_DynamicOptimizeCenter()
		{
			return (::Class_1_94DB5F1FACA13068**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19D8);
		}
		static ::Class_1_F91E67CF9C01D94B** StaticGet_s_MotionManager()
		{
			return (::Class_1_F91E67CF9C01D94B**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19E0);
		}
		static ::RPG::Client::PlayGoManager** StaticGet_s_PlayGoManager()
		{
			return (::RPG::Client::PlayGoManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19E8);
		}
		static ::Class_1_8E325EC9057215AB** StaticGet_s_ThreadSchedulerManager()
		{
			return (::Class_1_8E325EC9057215AB**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19F0);
		}
		static ::UnityEngine::Canvas** StaticGet_s_Canvas3D()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x19F8);
		}
		static ::RPG::Client::TextmapDownloadManager** StaticGet_s_TextDownloadManager()
		{
			return (::RPG::Client::TextmapDownloadManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A00);
		}
		static ::RPG::Client::TimeManager** StaticGet_s_TimeManager()
		{
			return (::RPG::Client::TimeManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A08);
		}
		static ::UnityEngine::GameObject** StaticGet_s_EventSystemGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A10);
		}
		static ::Class_1_DB8D2359E085AA87** StaticGet_s_VideoManager()
		{
			return (::Class_1_DB8D2359E085AA87**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A18);
		}
		static ::RPG::Client::SimulateSpeedController** StaticGet__s_SimulationController_k__BackingField()
		{
			return (::RPG::Client::SimulateSpeedController**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A20);
		}
		static ::UnityEngine::Camera** StaticGet_s_UICamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A28);
		}
		static ::UnityEngine::Canvas** StaticGet_s_PageCanvas()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A30);
		}
		static ::RPG::Client::GamePlayLockManager** StaticGet_s_GamePlayLockManager()
		{
			return (::RPG::Client::GamePlayLockManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A38);
		}
		static ::RPG::Client::PipelineCameraEngine** StaticGet_s_PipelineCamera()
		{
			return (::RPG::Client::PipelineCameraEngine**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A40);
		}
		static ::UnityEngine::Camera** StaticGet_s_UI3DCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A48);
		}
		static ::Class_2_6821B2280D711A52** StaticGet_DebugInfoWidgetContext()
		{
			return (::Class_2_6821B2280D711A52**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A50);
		}
		static ::Class_1_293FF9D2EE901E33** StaticGet_s_GoPoolMgr()
		{
			return (::Class_1_293FF9D2EE901E33**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A58);
		}
		static ::UnityEngine::Transform** StaticGet_s_UICache()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A60);
		}
		static ::Class_1_F0D462198B262603** StaticGet_s_RdrMatCacheMgr()
		{
			return (::Class_1_F0D462198B262603**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A68);
		}
		static ::Class_1_E4577D40E9E78807** StaticGet_s_MultiplayerManager()
		{
			return (::Class_1_E4577D40E9E78807**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A70);
		}
		static ::Class_3_86D599DC64D615CE** StaticGet_s_GamePlayAssetLoader()
		{
			return (::Class_3_86D599DC64D615CE**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A78);
		}
		static ::UnityEngine::Transform** StaticGet_s_UI3DRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A80);
		}
		static ::Class_1_0FE8866DA7E9C099** StaticGet_s_RuntimeAtlasManager()
		{
			return (::Class_1_0FE8866DA7E9C099**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A88);
		}
		static ::Class_1_B93C65313845AAEB** StaticGet_s_CustomLateUpdateManager()
		{
			return (::Class_1_B93C65313845AAEB**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A90);
		}
		static ::RPG::Client::GamePhaseManager** StaticGet_s_GamePhaseManager()
		{
			return (::RPG::Client::GamePhaseManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1A98);
		}
		static ::Class_1_D949B99CBE5E8045** StaticGet_s_IFixPatchManager()
		{
			return (::Class_1_D949B99CBE5E8045**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AA0);
		}
		static ::InControl::InControlInputModule** StaticGet_s_InControlInputModule()
		{
			return (::InControl::InControlInputModule**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AA8);
		}
		static ::Class_1_7034D7C52E05781E** StaticGet_s_EntityTickLodManager()
		{
			return (::Class_1_7034D7C52E05781E**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AB0);
		}
		static ::RPG::Client::AudioManager** StaticGet_s_AudioManager()
		{
			return (::RPG::Client::AudioManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AB8);
		}
		static ::RPG::Client::EnvironmentSystem** StaticGet_s_EnvironmentSystem()
		{
			return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AC0);
		}
		static ::RPG::Client::PreDownloadManager** StaticGet_s_PreDownloadManager()
		{
			return (::RPG::Client::PreDownloadManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AC8);
		}
		static ::Class_2_DE2B33861A1AE2C3** StaticGet_LongPressHintDialogContext()
		{
			return (::Class_2_DE2B33861A1AE2C3**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AD0);
		}
		static ::Class_1_F5228F8C22090BDC** StaticGet_s_FollowPointMappingManager()
		{
			return (::Class_1_F5228F8C22090BDC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AD8);
		}
		static ::UnityEngine::Transform** StaticGet_s_UIRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AE0);
		}
		static ::Class_2_04AC45AC06EB04C7** StaticGet_BetaHintDialogContext()
		{
			return (::Class_2_04AC45AC06EB04C7**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AE8);
		}
		static ::Class_1_D2B8D50DD9833CFC** StaticGet_s_MainCameraOccluder()
		{
			return (::Class_1_D2B8D50DD9833CFC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AF0);
		}
		static ::RPG::Client::PSManager** StaticGet_s_PSManager()
		{
			return (::RPG::Client::PSManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1AF8);
		}
		static ::Class_1_E3ED3259960F0549** StaticGet_s_ProfilerManager()
		{
			return (::Class_1_E3ED3259960F0549**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B00);
		}
		static ::RPG::Client::InControlActionsManager** StaticGet_s_InControlActionsManager()
		{
			return (::RPG::Client::InControlActionsManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B08);
		}
		static ::RPG::Client::RenderOptionsManager** StaticGet_s_RenderOptionsManager()
		{
			return (::RPG::Client::RenderOptionsManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B10);
		}
		static ::Class_1_34E3B780DA1AE78E** StaticGet_s_MaterialBlockEffectManager()
		{
			return (::Class_1_34E3B780DA1AE78E**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B18);
		}
		static ::RPG::Client::InputSettingKeyConflictManager** StaticGet_s_InputSettingKeyConflictManager()
		{
			return (::RPG::Client::InputSettingKeyConflictManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B20);
		}
		static ::Class_1_C8FB696C4B9416C3** StaticGet_s_EmotionLateUpdateManager()
		{
			return (::Class_1_C8FB696C4B9416C3**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B28);
		}
		static ::RPG::Client::VietNam18DialogContext** StaticGet_VietNam18DialogContext()
		{
			return (::RPG::Client::VietNam18DialogContext**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B30);
		}
		static ::RPG::Client::AssetMgr** StaticGet_s_AssetMgr()
		{
			return (::RPG::Client::AssetMgr**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B38);
		}
		static ::Class_1_88DC60C54E5C3B07** StaticGet_s_PhaseModeManager()
		{
			return (::Class_1_88DC60C54E5C3B07**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B40);
		}
		static ::RPG::Client::MonoEffectManager** StaticGet_s_MonoEffectManager()
		{
			return (::RPG::Client::MonoEffectManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B48);
		}
		static ::Class_1_40C8E2F7BA4DE994** StaticGet_s_ThirdPartSDKManager()
		{
			return (::Class_1_40C8E2F7BA4DE994**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B50);
		}
		static ::UnityEngine::GameObject** StaticGet_s_MainGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B58);
		}
		static ::RPG::Client::LoadingManager** StaticGet_s_LoadingManager()
		{
			return (::RPG::Client::LoadingManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B60);
		}
		static ::RPG::Client::ResolutionController** StaticGet_s_ResolutionController()
		{
			return (::RPG::Client::ResolutionController**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B68);
		}
		static ::Class_1_6041ED8E42CCA413** StaticGet_s_CRPCameraManager()
		{
			return (::Class_1_6041ED8E42CCA413**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B70);
		}
		static ::Class_1_0CB6C61727512407** StaticGet_s_RogueManager()
		{
			return (::Class_1_0CB6C61727512407**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B78);
		}
		static ::RPG::Client::RPGSDKAccountManager** StaticGet_s_AccountManager()
		{
			return (::RPG::Client::RPGSDKAccountManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B80);
		}
		static ::Class_1_FDDA284A31AE5159** StaticGet_s_AttachPointManager()
		{
			return (::Class_1_FDDA284A31AE5159**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B88);
		}
		static ::RPG::Client::GyroManager** StaticGet_s_GyroManager()
		{
			return (::RPG::Client::GyroManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B90);
		}
		static ::Class_1_46C4AD3834C1EA18** StaticGet_s_CloudSupporter()
		{
			return (::Class_1_46C4AD3834C1EA18**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1B98);
		}
		static ::Class_1_D2B8D50DD9833CFC** StaticGet_s_UI3DCameraOccluder()
		{
			return (::Class_1_D2B8D50DD9833CFC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1BA0);
		}
		static ::RPG::Client::DialogueManager** StaticGet_s_DialogueManager()
		{
			return (::RPG::Client::DialogueManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1BA8);
		}
		static ::Class_1_31B28970A5870409** StaticGet_s_AsyncProcessor()
		{
			return (::Class_1_31B28970A5870409**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1BB0);
		}
		static ::RPG::Client::ModuleManager** StaticGet_s_ModuleManager()
		{
			return (::RPG::Client::ModuleManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1BB8);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>** StaticGet__HideInteractiveUIReasons()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1BC0);
		}
		static ::System::Single* StaticGet_s_LogoUIDisplayedTimestamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x980);
		}
		static ::System::Single* StaticGet_s_LogicFrameInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x984);
		}
		static ::System::Boolean* StaticGet_s_Inited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x988);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickBalance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x989);
		}
		static ::System::Boolean* StaticGet__BaselineMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x98A);
		}
		static ::RPG::Client::StartUpReasonType* StaticGet_StartUpReasonType()
		{
			return (::RPG::Client::StartUpReasonType*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x98C);
		}
		static ::System::Int32* StaticGet_s_CustomUpdatePreloadTimeMs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x990);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLodByGM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x994);
		}
		static ::System::Boolean* StaticGet_s_ShowLevelSelectUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x995);
		}
		static ::System::Boolean* StaticGet_s_UseLogicFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x996);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLod()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x997);
		}
		static ::System::Int32* StaticGet__DebugRandomCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x998);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLodCheckRendererVisible()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x99C);
		}
		static ::System::Boolean* StaticGet_s_UseMapRotation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x99D);
		}
		static ::System::Boolean* StaticGet_s_ReinstallPackage()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x99E);
		}
		static ::System::Boolean* StaticGet__s_BattleClientOnlyRandom_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x99F);
		}
		static ::System::Int32* StaticGet_s_LogicFrameRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x9A0);
		}
		static ::System::Single* StaticGet_s_FirstUIDisplayedTimestamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x9A4);
		}
		// static const ::System::String* installVersionFileName; // 0x0
		// static const ::System::String* installVersionTmpFileName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__CCTOR_OFFSET))();
		}

		static ::System::Void TestERmpty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_TESTERMPTY_OFFSET))();
		}

		static ::System::Void InitBaseConfigStep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITBASECONFIGSTEP_OFFSET))();
		}

		static ::System::Void InitConfigManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITCONFIGMANAGER_OFFSET))();
		}

		static ::System::Void InitStartupStep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITSTARTUPSTEP_OFFSET))();
		}

		static ::System::Void InitEnterGameStep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITENTERGAMESTEP_OFFSET))(a1);
		}

		static ::System::Collections::IEnumerator* AsyncInitEnterGameStep(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_ASYNCINITENTERGAMESTEP_OFFSET))(a1);
		}

		static ::System::Void InitBaseAndStartupStep()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITBASEANDSTARTUPSTEP_OFFSET))();
		}

		static ::System::Void ShaderWarmup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SHADERWARMUP_OFFSET))();
		}

		static ::System::Void _ReleaseGlobalResources()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__RELEASEGLOBALRESOURCES_OFFSET))();
		}

		static ::System::Void UninitGlobalVars(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_UNINITGLOBALVARS_OFFSET))(a1);
		}

		static ::System::Void InitMotionManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITMOTIONMANAGER_OFFSET))();
		}

		static ::System::Void HideInteractiveUI(::System::Boolean a1, ::RPG::Client::HideInteractiveUIReason a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::HideInteractiveUIReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_HIDEINTERACTIVEUI_OFFSET))(a1, a2);
		}

		static ::System::Void ClearHideInteractiveUIReasons()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CLEARHIDEINTERACTIVEUIREASONS_OFFSET))();
		}

		static ::System::Boolean IsEntityTickLodOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODOPEN_OFFSET))();
		}

		static ::System::Boolean IsEntityTickLodCheckRendererVisible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODCHECKRENDERERVISIBLE_OFFSET))();
		}

		static ::System::Void _InitUnityGameObject()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__INITUNITYGAMEOBJECT_OFFSET))();
		}

		static ::System::Void _UnInitUnityGameObject(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__UNINITUNITYGAMEOBJECT_OFFSET))(a1);
		}

		static ::System::Void CheckPackageReinstall()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CHECKPACKAGEREINSTALL_OFFSET))();
		}

		static ::System::String* SaveInstallVersion(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSION_OFFSET))(a1);
		}

		static ::System::String* SaveInstallVersionTmp(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSIONTMP_OFFSET))(a1);
		}

		static ::System::String* _SaveInstallVersion(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__SAVEINSTALLVERSION_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveTmpInstallVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_REMOVETMPINSTALLVERSION_OFFSET))(a1);
		}

		static ::System::Boolean _ShouldClearPerisistentDir()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__SHOULDCLEARPERISISTENTDIR_OFFSET))();
		}

		static ::System::Void ClearOldInstallFiles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CLEAROLDINSTALLFILES_OFFSET))();
		}

		static ::System::Version* GetLastPackageVersion()
		{
			return ((::System::Version*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GETLASTPACKAGEVERSION_OFFSET))();
		}

		static ::System::String* GetInstallVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GETINSTALLVERSION_OFFSET))();
		}

		static ::System::Void _InitDiContainer(::Class_1_7B4E9156998275BE* a1)
		{
			return ((::System::Void(*)(::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__INITDICONTAINER_OFFSET))(a1);
		}

		static ::Class_1_33B50469231C7D95* get_s_FpsCounter()
		{
			return ((::Class_1_33B50469231C7D95*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_FPSCOUNTER_OFFSET))();
		}

		static ::RPG::Client::SimulateSpeedController* get_s_SimulationController()
		{
			return ((::RPG::Client::SimulateSpeedController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONCONTROLLER_OFFSET))();
		}

		static ::System::Void set_s_SimulationController(::RPG::Client::SimulateSpeedController* a1)
		{
			return ((::System::Void(*)(::RPG::Client::SimulateSpeedController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_SIMULATIONCONTROLLER_OFFSET))(a1);
		}

		static ::System::Single get_s_SimulationSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEED_OFFSET))();
		}

		static ::System::Single get_s_SimulationSpeedReal()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEEDREAL_OFFSET))();
		}

		static ::System::Boolean get_s_HideInteractiveUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_HIDEINTERACTIVEUI_OFFSET))();
		}

		static ::System::Boolean get_s_BaselineMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_BASELINEMODE_OFFSET))();
		}

		static ::System::Void set_s_BaselineMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_BASELINEMODE_OFFSET))(a1);
		}

		static ::System::Boolean get_s_BattleClientOnlyRandom()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_BATTLECLIENTONLYRANDOM_OFFSET))();
		}

		static ::System::Void set_s_BattleClientOnlyRandom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_BATTLECLIENTONLYRANDOM_OFFSET))(a1);
		}
	};
}
