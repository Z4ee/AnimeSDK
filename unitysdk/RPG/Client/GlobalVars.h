#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HideInteractiveUIReason.h"
#include "unitysdk/RPG/Client/StartUpReasonType.h"
#include "unitysdk/System/Object.h"

class Class_1_0551325621FDC7A7;
class Class_1_0CB6C61727512407;
class Class_1_15785DA4A698DF63;
class Class_1_179E962C3086166B;
class Class_1_21F37629863F4674;
class Class_1_2C3C32491495725B;
class Class_1_33B50469231C7D95;
class Class_1_38FC456F3527EADC;
class Class_1_40C8E2F7BA4DE994;
class Class_1_46C4AD3834C1EA18;
class Class_1_4D3D6EC2FF67A7B8;
class Class_1_520EA3DE1B17EDA7;
class Class_1_6041ED8E42CCA413;
class Class_1_64A188CF5A335254;
class Class_1_7034D7C52E05781E;
class Class_1_7B4E9156998275BE;
class Class_1_82C7DF4EFF9BB28B;
class Class_1_860906FF846546DC;
class Class_1_88DC60C54E5C3B07;
class Class_1_91242CB893AA7EEA;
class Class_1_915C985A3CE937EF;
class Class_1_94FA66E3AE3F3EC1;
class Class_1_A66BA52E4F994934;
class Class_1_B652C17EE52BC224;
class Class_1_B93C65313845AAEB;
class Class_1_CB35F14FEF4E91E1;
class Class_1_CE82E9D8E8921608;
class Class_1_D2B8D50DD9833CFC;
class Class_1_D59854D46040C6B8;
class Class_1_D7C881F1CEF46C0D;
class Class_1_E14BD9BFF644551C;
class Class_1_E3ED3259960F0549;
class Class_1_EA7DB942B013E54C;
class Class_1_F0D462198B262603;
class Class_2_3E17E61D9F6875C4;
class Class_2_57F2B60109689D90;
class Class_2_67F8414797D6AA81;
class Class_2_C91A3154842340B5;
class Class_3_6E8B2FCA74824121;
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

#define RPG_CLIENT_GLOBALVARS_ASYNCINITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0x97BADD0)
#define RPG_CLIENT_GLOBALVARS_CHECKPACKAGEREINSTALL_OFFSET UNITYSDK_OFFSET(0x97B81E0)
#define RPG_CLIENT_GLOBALVARS_CLEARHIDEINTERACTIVEUIREASONS_OFFSET UNITYSDK_OFFSET(0x97BE200)
#define RPG_CLIENT_GLOBALVARS_CLEAROLDINSTALLFILES_OFFSET UNITYSDK_OFFSET(0x97BE410)
#define RPG_CLIENT_GLOBALVARS_GETINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x97BF0A0)
#define RPG_CLIENT_GLOBALVARS_GETLASTPACKAGEVERSION_OFFSET UNITYSDK_OFFSET(0x97BEEC0)
#define RPG_CLIENT_GLOBALVARS_GET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0x97BF4D0)
#define RPG_CLIENT_GLOBALVARS_GET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0x97BF590)
#define RPG_CLIENT_GLOBALVARS_GET_S_FPSCOUNTER_OFFSET UNITYSDK_OFFSET(0x97BF1D0)
#define RPG_CLIENT_GLOBALVARS_GET_S_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0x97BE180)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x97BF220)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEEDREAL_OFFSET UNITYSDK_OFFSET(0x97BF410)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x97BF290)
#define RPG_CLIENT_GLOBALVARS_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0x97BDEB0)
#define RPG_CLIENT_GLOBALVARS_INITBASEANDSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0x97BAE60)
#define RPG_CLIENT_GLOBALVARS_INITBASECONFIGSTEP_OFFSET UNITYSDK_OFFSET(0x97B7ED0)
#define RPG_CLIENT_GLOBALVARS_INITCONFIGMANAGER_OFFSET UNITYSDK_OFFSET(0x97B8600)
#define RPG_CLIENT_GLOBALVARS_INITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0x97BA720)
#define RPG_CLIENT_GLOBALVARS_INITMOTIONMANAGER_OFFSET UNITYSDK_OFFSET(0x97BDDD0)
#define RPG_CLIENT_GLOBALVARS_INITSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0x97B86F0)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODCHECKRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0x97BE350)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODOPEN_OFFSET UNITYSDK_OFFSET(0x97BE2C0)
#define RPG_CLIENT_GLOBALVARS_REMOVETMPINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x97BEBA0)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSIONTMP_OFFSET UNITYSDK_OFFSET(0x97BEB40)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x97BE3B0)
#define RPG_CLIENT_GLOBALVARS_SET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0x97BF510)
#define RPG_CLIENT_GLOBALVARS_SET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0x97BF5D0)
#define RPG_CLIENT_GLOBALVARS_SET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x97BF250)
#define RPG_CLIENT_GLOBALVARS_SHADERWARMUP_OFFSET UNITYSDK_OFFSET(0x97BAED0)
#define RPG_CLIENT_GLOBALVARS_TESTERMPTY_OFFSET UNITYSDK_OFFSET(0x97B7E90)
#define RPG_CLIENT_GLOBALVARS_UNINITGLOBALVARS_OFFSET UNITYSDK_OFFSET(0x97BB160)
#define RPG_CLIENT_GLOBALVARS__CCTOR_OFFSET UNITYSDK_OFFSET(0x97B7D10)
#define RPG_CLIENT_GLOBALVARS__INITDICONTAINER_OFFSET UNITYSDK_OFFSET(0x97BA5C0)
#define RPG_CLIENT_GLOBALVARS__INITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x97B9E60)
#define RPG_CLIENT_GLOBALVARS__RELEASEGLOBALRESOURCES_OFFSET UNITYSDK_OFFSET(0x97BB090)
#define RPG_CLIENT_GLOBALVARS__SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0x97BE5B0)
#define RPG_CLIENT_GLOBALVARS__SHOULDCLEARPERISISTENTDIR_OFFSET UNITYSDK_OFFSET(0x97BEC20)
#define RPG_CLIENT_GLOBALVARS__UNINITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x97BDD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalVars_TypeDefinitionIndex = 49699;

	class GlobalVars : public ::System::Object
	{
	public:
		static ::RPG::Client::MonoEffectManager** StaticGet_s_MonoEffectManager()
		{
			return (::RPG::Client::MonoEffectManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11A0);
		}
		static ::UnityEngine::Transform** StaticGet_s_UI3DRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11A8);
		}
		static ::RPG::Client::LocalizationManager** StaticGet_s_LocalizationManager()
		{
			return (::RPG::Client::LocalizationManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11B0);
		}
		static ::Class_1_21F37629863F4674** StaticGet_s_VirtualServerManager()
		{
			return (::Class_1_21F37629863F4674**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11B8);
		}
		static ::UnityEngine::Camera** StaticGet_s_MainCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11C0);
		}
		static ::Class_1_88DC60C54E5C3B07** StaticGet_s_PhaseModeManager()
		{
			return (::Class_1_88DC60C54E5C3B07**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11C8);
		}
		static ::RPG::Client::LoadingManager** StaticGet_s_LoadingManager()
		{
			return (::RPG::Client::LoadingManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11D0);
		}
		static ::RPG::Client::RenderOptionsManager** StaticGet_s_RenderOptionsManager()
		{
			return (::RPG::Client::RenderOptionsManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11D8);
		}
		static ::Class_1_0551325621FDC7A7** StaticGet_s_MaterialGroupCbManager()
		{
			return (::Class_1_0551325621FDC7A7**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11E0);
		}
		static ::RPG::Client::PreDownloadManager** StaticGet_s_PreDownloadManager()
		{
			return (::RPG::Client::PreDownloadManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11E8);
		}
		static ::UnityEngine::Transform** StaticGet_s_CharacterCache()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11F0);
		}
		static ::UnityEngine::Transform** StaticGet_s_UICache()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x11F8);
		}
		static ::RPG::Client::DialogueManager** StaticGet_s_DialogueManager()
		{
			return (::RPG::Client::DialogueManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1200);
		}
		static ::Class_1_91242CB893AA7EEA** StaticGet_s_ShaderWarmupManager()
		{
			return (::Class_1_91242CB893AA7EEA**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1208);
		}
		static ::Class_2_57F2B60109689D90** StaticGet_BetaHintDialogContext()
		{
			return (::Class_2_57F2B60109689D90**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1210);
		}
		static ::UnityEngine::Canvas** StaticGet_s_Canvas3D()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1218);
		}
		static ::RPG::Client::NetworkManager** StaticGet_s_NetworkManager()
		{
			return (::RPG::Client::NetworkManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1220);
		}
		static ::Class_1_94FA66E3AE3F3EC1** StaticGet_s_LuaHotfixManager()
		{
			return (::Class_1_94FA66E3AE3F3EC1**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1228);
		}
		static ::RPG::Client::GyroManager** StaticGet_s_GyroManager()
		{
			return (::RPG::Client::GyroManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1230);
		}
		static ::Class_1_0CB6C61727512407** StaticGet_s_RogueManager()
		{
			return (::Class_1_0CB6C61727512407**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1238);
		}
		static ::RPG::Client::ResolutionController** StaticGet_s_ResolutionController()
		{
			return (::RPG::Client::ResolutionController**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1240);
		}
		static ::RPG::Client::GamePhaseManager** StaticGet_s_GamePhaseManager()
		{
			return (::RPG::Client::GamePhaseManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1248);
		}
		static ::Class_1_D2B8D50DD9833CFC** StaticGet_s_UI3DCameraOccluder()
		{
			return (::Class_1_D2B8D50DD9833CFC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1250);
		}
		static ::Class_1_E14BD9BFF644551C** StaticGet_s_EmotionLateUpdateManager()
		{
			return (::Class_1_E14BD9BFF644551C**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1258);
		}
		static ::Class_1_D7C881F1CEF46C0D** StaticGet_s_ShaderPropertyTransitionManager()
		{
			return (::Class_1_D7C881F1CEF46C0D**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1260);
		}
		static ::Class_1_520EA3DE1B17EDA7** StaticGet_s_AsyncProcessor()
		{
			return (::Class_1_520EA3DE1B17EDA7**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1268);
		}
		static ::RPG::Client::InControlActionsManager** StaticGet_s_InControlActionsManager()
		{
			return (::RPG::Client::InControlActionsManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1270);
		}
		static ::InControl::InControlInputModule** StaticGet_s_InControlInputModule()
		{
			return (::InControl::InControlInputModule**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1278);
		}
		static ::Class_1_860906FF846546DC** StaticGet_s_Tween()
		{
			return (::Class_1_860906FF846546DC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1280);
		}
		static ::Class_1_EA7DB942B013E54C** StaticGet_s_GoPoolMgr()
		{
			return (::Class_1_EA7DB942B013E54C**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1288);
		}
		static ::Class_1_E3ED3259960F0549** StaticGet_s_ProfilerManager()
		{
			return (::Class_1_E3ED3259960F0549**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1290);
		}
		static ::RPG::Client::AssetMgr** StaticGet_s_AssetMgr()
		{
			return (::RPG::Client::AssetMgr**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1298);
		}
		static ::RPG::Client::PipelineCameraEngine** StaticGet_s_PipelineCamera()
		{
			return (::RPG::Client::PipelineCameraEngine**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12A0);
		}
		static ::Class_1_64A188CF5A335254** StaticGet_s_MotionManager()
		{
			return (::Class_1_64A188CF5A335254**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12A8);
		}
		static ::RPG::Client::PSManager** StaticGet_s_PSManager()
		{
			return (::RPG::Client::PSManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12B0);
		}
		static ::RPG::Client::ModuleManager** StaticGet_s_ModuleManager()
		{
			return (::RPG::Client::ModuleManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12B8);
		}
		static ::UnityEngine::Camera** StaticGet_s_UI3DCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12C0);
		}
		static ::Class_1_179E962C3086166B** StaticGet_s_AttachPointManager()
		{
			return (::Class_1_179E962C3086166B**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12C8);
		}
		static ::Class_1_F0D462198B262603** StaticGet_s_RdrMatCacheMgr()
		{
			return (::Class_1_F0D462198B262603**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12D0);
		}
		static ::Class_1_46C4AD3834C1EA18** StaticGet_s_CloudSupporter()
		{
			return (::Class_1_46C4AD3834C1EA18**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12D8);
		}
		static ::RPG::Client::RPGSDKAccountManager** StaticGet_s_AccountManager()
		{
			return (::RPG::Client::RPGSDKAccountManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12E0);
		}
		static ::Class_1_B93C65313845AAEB** StaticGet_s_CustomLateUpdateManager()
		{
			return (::Class_1_B93C65313845AAEB**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12E8);
		}
		static ::Class_1_38FC456F3527EADC** StaticGet_s_FollowPointMappingManager()
		{
			return (::Class_1_38FC456F3527EADC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12F0);
		}
		static ::Class_1_15785DA4A698DF63** StaticGet_s_IFixPatchManager()
		{
			return (::Class_1_15785DA4A698DF63**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x12F8);
		}
		static ::UnityEngine::GameObject** StaticGet_s_WwiseInitializerGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1300);
		}
		static ::UnityEngine::GameObject** StaticGet_s_EasytouchGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1308);
		}
		static ::RPG::Client::GameFlowManager** StaticGet_s_GameFlowManager()
		{
			return (::RPG::Client::GameFlowManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1310);
		}
		static ::Class_1_A66BA52E4F994934** StaticGet_s_ThreadSchedulerManager()
		{
			return (::Class_1_A66BA52E4F994934**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1318);
		}
		static ::RPG::GameCore::VersionData** StaticGet_s_VersionData()
		{
			return (::RPG::GameCore::VersionData**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1320);
		}
		static ::RPG::Client::UIManager** StaticGet_s_UIManager()
		{
			return (::RPG::Client::UIManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1328);
		}
		static ::Class_1_40C8E2F7BA4DE994** StaticGet_s_ThirdPartSDKManager()
		{
			return (::Class_1_40C8E2F7BA4DE994**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1330);
		}
		static ::RPG::Client::AudioManager** StaticGet_s_AudioManager()
		{
			return (::RPG::Client::AudioManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1338);
		}
		static ::RPG::Client::VietNam18DialogContext** StaticGet_VietNam18DialogContext()
		{
			return (::RPG::Client::VietNam18DialogContext**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1340);
		}
		static ::Class_1_B652C17EE52BC224** StaticGet_s_CharacterEffectManager()
		{
			return (::Class_1_B652C17EE52BC224**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1348);
		}
		static ::Class_2_3E17E61D9F6875C4** StaticGet_DebugInfoWidgetContext()
		{
			return (::Class_2_3E17E61D9F6875C4**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1350);
		}
		static ::Class_3_6E8B2FCA74824121** StaticGet_s_GamePlayAssetLoader()
		{
			return (::Class_3_6E8B2FCA74824121**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1358);
		}
		static ::Class_1_CE82E9D8E8921608** StaticGet_s_TAMonoTickManager()
		{
			return (::Class_1_CE82E9D8E8921608**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1360);
		}
		static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_s_ClientOnlyCommonConfig()
		{
			return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1368);
		}
		static ::Class_1_CB35F14FEF4E91E1** StaticGet_s_TimelineManager()
		{
			return (::Class_1_CB35F14FEF4E91E1**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1370);
		}
		static ::Class_2_67F8414797D6AA81** StaticGet_s_StackCameraManager()
		{
			return (::Class_2_67F8414797D6AA81**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1378);
		}
		static ::RPG::Client::InputSettingKeyConflictManager** StaticGet_s_InputSettingKeyConflictManager()
		{
			return (::RPG::Client::InputSettingKeyConflictManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1380);
		}
		static ::RPG::Client::CameraManager** StaticGet_s_CameraManager()
		{
			return (::RPG::Client::CameraManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1388);
		}
		static ::Class_1_915C985A3CE937EF** StaticGet_s_VideoManager()
		{
			return (::Class_1_915C985A3CE937EF**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1390);
		}
		static ::Class_1_7B4E9156998275BE** StaticGet_s_DiContainer()
		{
			return (::Class_1_7B4E9156998275BE**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1398);
		}
		static ::Class_1_D2B8D50DD9833CFC** StaticGet_s_MainCameraOccluder()
		{
			return (::Class_1_D2B8D50DD9833CFC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13A0);
		}
		static ::UnityEngine::Transform** StaticGet_s_UIRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13A8);
		}
		static ::Class_1_4D3D6EC2FF67A7B8** StaticGet_s_MultiplayerManager()
		{
			return (::Class_1_4D3D6EC2FF67A7B8**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13B0);
		}
		static ::RPG::Client::PlayGoManager** StaticGet_s_PlayGoManager()
		{
			return (::RPG::Client::PlayGoManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13B8);
		}
		static ::RPG::Client::EnvironmentSystem** StaticGet_s_EnvironmentSystem()
		{
			return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13C0);
		}
		static ::UnityEngine::Canvas** StaticGet_s_PageCanvas()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13C8);
		}
		static ::Class_1_6041ED8E42CCA413** StaticGet_s_CRPCameraManager()
		{
			return (::Class_1_6041ED8E42CCA413**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13D0);
		}
		static ::UnityEngine::GameObject** StaticGet_s_MainGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13D8);
		}
		static ::Class_1_7034D7C52E05781E** StaticGet_s_EntityTickLodManager()
		{
			return (::Class_1_7034D7C52E05781E**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13E0);
		}
		static ::RPG::Client::SettingManager** StaticGet_s_SettingManager()
		{
			return (::RPG::Client::SettingManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13E8);
		}
		static ::RPG::Client::GlobalConfigManager** StaticGet_s_ConfigManager()
		{
			return (::RPG::Client::GlobalConfigManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13F0);
		}
		static ::Class_2_C91A3154842340B5** StaticGet_LongPressHintDialogContext()
		{
			return (::Class_2_C91A3154842340B5**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x13F8);
		}
		static ::Class_1_2C3C32491495725B** StaticGet_s_MaterialBlockEffectManager()
		{
			return (::Class_1_2C3C32491495725B**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1400);
		}
		static ::RPG::Client::TimeManager** StaticGet_s_TimeManager()
		{
			return (::RPG::Client::TimeManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1408);
		}
		static ::RPG::Client::TimerManager** StaticGet_s_TimerManager()
		{
			return (::RPG::Client::TimerManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1410);
		}
		static ::RPG::Client::LuaSystem** StaticGet_s_LuaSystem()
		{
			return (::RPG::Client::LuaSystem**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1418);
		}
		static ::RPG::Client::SimulateSpeedController** StaticGet__s_SimulationController_k__BackingField()
		{
			return (::RPG::Client::SimulateSpeedController**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1420);
		}
		static ::UnityEngine::Transform** StaticGet_s_BillboardRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1428);
		}
		static ::UnityEngine::GameObject** StaticGet_s_EventSystemGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1430);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>** StaticGet__HideInteractiveUIReasons()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1438);
		}
		static ::Class_1_82C7DF4EFF9BB28B** StaticGet_s_RuntimeAtlasManager()
		{
			return (::Class_1_82C7DF4EFF9BB28B**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1440);
		}
		static ::Class_1_D59854D46040C6B8** StaticGet_s_DynamicOptimizeCenter()
		{
			return (::Class_1_D59854D46040C6B8**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1448);
		}
		static ::RPG::Client::EffectPluginManager** StaticGet_s_EffectPluginManager()
		{
			return (::RPG::Client::EffectPluginManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1450);
		}
		static ::RPG::Client::GamePlayLockManager** StaticGet_s_GamePlayLockManager()
		{
			return (::RPG::Client::GamePlayLockManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1458);
		}
		static ::UnityEngine::Camera** StaticGet_s_UICamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1460);
		}
		static ::System::Boolean* StaticGet_s_UseLogicFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD40);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLodCheckRendererVisible()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD41);
		}
		static ::System::Boolean* StaticGet_s_ShowLevelSelectUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD42);
		}
		static ::System::Single* StaticGet_s_LogicFrameInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD44);
		}
		static ::System::Int32* StaticGet__DebugRandomCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD48);
		}
		static ::System::Int32* StaticGet_s_CustomUpdatePreloadTimeMs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD4C);
		}
		static ::RPG::Client::StartUpReasonType* StaticGet_StartUpReasonType()
		{
			return (::RPG::Client::StartUpReasonType*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD50);
		}
		static ::System::Single* StaticGet_s_FirstUIDisplayedTimestamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD54);
		}
		static ::System::Single* StaticGet_s_LogoUIDisplayedTimestamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD58);
		}
		static ::System::Boolean* StaticGet__s_BattleClientOnlyRandom_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD5C);
		}
		static ::System::Boolean* StaticGet_s_UseMapRotation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD5D);
		}
		static ::System::Boolean* StaticGet_s_Inited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD5E);
		}
		static ::System::Boolean* StaticGet_s_ReinstallPackage()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD5F);
		}
		static ::System::Int32* StaticGet_s_LogicFrameRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD60);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickBalance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD64);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLod()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD65);
		}
		static ::System::Boolean* StaticGet__BaselineMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD66);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLodByGM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xD67);
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

		static ::System::Void InitEnterGameStep(::System::Boolean login)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITENTERGAMESTEP_OFFSET))(login);
		}

		static ::System::Collections::IEnumerator* AsyncInitEnterGameStep(::System::Action* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_ASYNCINITENTERGAMESTEP_OFFSET))(callback);
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

		static ::System::Void UninitGlobalVars(::System::Boolean quitTeminal)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_UNINITGLOBALVARS_OFFSET))(quitTeminal);
		}

		static ::System::Void InitMotionManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_INITMOTIONMANAGER_OFFSET))();
		}

		static ::System::Void HideInteractiveUI(::System::Boolean bHide, ::RPG::Client::HideInteractiveUIReason reason)
		{
			return ((::System::Void(*)(::System::Boolean, ::RPG::Client::HideInteractiveUIReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_HIDEINTERACTIVEUI_OFFSET))(bHide, reason);
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

		static ::System::Void _UnInitUnityGameObject(::System::Boolean quitTeminal)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__UNINITUNITYGAMEOBJECT_OFFSET))(quitTeminal);
		}

		static ::System::Void CheckPackageReinstall()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_CHECKPACKAGEREINSTALL_OFFSET))();
		}

		static ::System::String* SaveInstallVersion(::System::String* reason)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSION_OFFSET))(reason);
		}

		static ::System::String* SaveInstallVersionTmp(::System::String* reason)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSIONTMP_OFFSET))(reason);
		}

		static ::System::String* _SaveInstallVersion(::System::String* reason, ::System::Boolean isTmpFile)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__SAVEINSTALLVERSION_OFFSET))(reason, isTmpFile);
		}

		static ::System::Void RemoveTmpInstallVersion(::System::String* reason)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_REMOVETMPINSTALLVERSION_OFFSET))(reason);
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

		static ::System::Void _InitDiContainer(::Class_1_7B4E9156998275BE* diContainer)
		{
			return ((::System::Void(*)(::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS__INITDICONTAINER_OFFSET))(diContainer);
		}

		static ::Class_1_33B50469231C7D95* get_s_FpsCounter()
		{
			return ((::Class_1_33B50469231C7D95*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_FPSCOUNTER_OFFSET))();
		}

		static ::RPG::Client::SimulateSpeedController* get_s_SimulationController()
		{
			return ((::RPG::Client::SimulateSpeedController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONCONTROLLER_OFFSET))();
		}

		static ::System::Void set_s_SimulationController(::RPG::Client::SimulateSpeedController* value)
		{
			return ((::System::Void(*)(::RPG::Client::SimulateSpeedController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_SIMULATIONCONTROLLER_OFFSET))(value);
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

		static ::System::Void set_s_BaselineMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_BASELINEMODE_OFFSET))(value);
		}

		static ::System::Boolean get_s_BattleClientOnlyRandom()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_GET_S_BATTLECLIENTONLYRANDOM_OFFSET))();
		}

		static ::System::Void set_s_BattleClientOnlyRandom(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALVARS_SET_S_BATTLECLIENTONLYRANDOM_OFFSET))(value);
		}
	};
}
