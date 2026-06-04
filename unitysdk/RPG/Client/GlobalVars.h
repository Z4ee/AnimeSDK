#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HideInteractiveUIReason.h"
#include "unitysdk/RPG/Client/StartUpReasonType.h"
#include "unitysdk/System/Object.h"

class Class_1_0C1B8B2E4F85A50B;
class Class_1_0CB6C61727512407;
class Class_1_0DF72B5BC66F295C;
class Class_1_0FE8866DA7E9C099;
class Class_1_21F37629863F4674;
class Class_1_247AEF57282D634D;
class Class_1_31B28970A5870409;
class Class_1_33B50469231C7D95;
class Class_1_40C8E2F7BA4DE994;
class Class_1_46C4AD3834C1EA18;
class Class_1_59F68D258F7479FC;
class Class_1_6041ED8E42CCA413;
class Class_1_7034D7C52E05781E;
class Class_1_7B4E9156998275BE;
class Class_1_88DC60C54E5C3B07;
class Class_1_8A42BF5C39EA2E4C;
class Class_1_94498A9753F0DEAA;
class Class_1_B93C65313845AAEB;
class Class_1_BF3DE12C5A1505DF;
class Class_1_C123D24D321AA621;
class Class_1_CB35F14FEF4E91E1;
class Class_1_CC6282A3D1F32D49;
class Class_1_D051025A3269812F;
class Class_1_D2B8D50DD9833CFC;
class Class_1_D5012BC296A9375A;
class Class_1_D59854D46040C6B8;
class Class_1_E3ED3259960F0549;
class Class_1_E5AFA09D8E02FD08;
class Class_1_EA7DB942B013E54C;
class Class_1_F0D462198B262603;
class Class_1_F11BD9383D17B528;
class Class_1_F5228F8C22090BDC;
class Class_1_F846C02FF2F1434D;
class Class_1_FDDA284A31AE5159;
class Class_2_204B0797FD6E1A9C;
class Class_2_3E17E61D9F6875C4;
class Class_2_57F2B60109689D90;
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

#define RPG_CLIENT_GLOBALVARS_ASYNCINITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0xBACF3A0)
#define RPG_CLIENT_GLOBALVARS_CHECKPACKAGEREINSTALL_OFFSET UNITYSDK_OFFSET(0xBACC6B0)
#define RPG_CLIENT_GLOBALVARS_CLEARHIDEINTERACTIVEUIREASONS_OFFSET UNITYSDK_OFFSET(0xBAD2740)
#define RPG_CLIENT_GLOBALVARS_CLEAROLDINSTALLFILES_OFFSET UNITYSDK_OFFSET(0xBAD2950)
#define RPG_CLIENT_GLOBALVARS_GETINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xBAD3450)
#define RPG_CLIENT_GLOBALVARS_GETLASTPACKAGEVERSION_OFFSET UNITYSDK_OFFSET(0xBAD3270)
#define RPG_CLIENT_GLOBALVARS_GET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0xBAD3880)
#define RPG_CLIENT_GLOBALVARS_GET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0xBAD3940)
#define RPG_CLIENT_GLOBALVARS_GET_S_FPSCOUNTER_OFFSET UNITYSDK_OFFSET(0xBAD3580)
#define RPG_CLIENT_GLOBALVARS_GET_S_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0xBAD26C0)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBAD35D0)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEEDREAL_OFFSET UNITYSDK_OFFSET(0xBAD37C0)
#define RPG_CLIENT_GLOBALVARS_GET_S_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xBAD3640)
#define RPG_CLIENT_GLOBALVARS_HIDEINTERACTIVEUI_OFFSET UNITYSDK_OFFSET(0xBAD23E0)
#define RPG_CLIENT_GLOBALVARS_INITBASEANDSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0xBACF430)
#define RPG_CLIENT_GLOBALVARS_INITBASECONFIGSTEP_OFFSET UNITYSDK_OFFSET(0xBACC3A0)
#define RPG_CLIENT_GLOBALVARS_INITCONFIGMANAGER_OFFSET UNITYSDK_OFFSET(0xBACCA70)
#define RPG_CLIENT_GLOBALVARS_INITENTERGAMESTEP_OFFSET UNITYSDK_OFFSET(0xBACECF0)
#define RPG_CLIENT_GLOBALVARS_INITMOTIONMANAGER_OFFSET UNITYSDK_OFFSET(0xBAD2300)
#define RPG_CLIENT_GLOBALVARS_INITSTARTUPSTEP_OFFSET UNITYSDK_OFFSET(0xBACCB60)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODCHECKRENDERERVISIBLE_OFFSET UNITYSDK_OFFSET(0xBAD2890)
#define RPG_CLIENT_GLOBALVARS_ISENTITYTICKLODOPEN_OFFSET UNITYSDK_OFFSET(0xBAD2800)
#define RPG_CLIENT_GLOBALVARS_REMOVETMPINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xBAD2FA0)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSIONTMP_OFFSET UNITYSDK_OFFSET(0xBAD2F40)
#define RPG_CLIENT_GLOBALVARS_SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xBAD28F0)
#define RPG_CLIENT_GLOBALVARS_SET_S_BASELINEMODE_OFFSET UNITYSDK_OFFSET(0xBAD38C0)
#define RPG_CLIENT_GLOBALVARS_SET_S_BATTLECLIENTONLYRANDOM_OFFSET UNITYSDK_OFFSET(0xBAD3980)
#define RPG_CLIENT_GLOBALVARS_SET_S_SIMULATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBAD3600)
#define RPG_CLIENT_GLOBALVARS_SHADERWARMUP_OFFSET UNITYSDK_OFFSET(0xBACF4A0)
#define RPG_CLIENT_GLOBALVARS_TESTERMPTY_OFFSET UNITYSDK_OFFSET(0xBACC360)
#define RPG_CLIENT_GLOBALVARS_UNINITGLOBALVARS_OFFSET UNITYSDK_OFFSET(0xBACF710)
#define RPG_CLIENT_GLOBALVARS__CCTOR_OFFSET UNITYSDK_OFFSET(0xBACC1E0)
#define RPG_CLIENT_GLOBALVARS__INITDICONTAINER_OFFSET UNITYSDK_OFFSET(0xBACEB90)
#define RPG_CLIENT_GLOBALVARS__INITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xBACE440)
#define RPG_CLIENT_GLOBALVARS__RELEASEGLOBALRESOURCES_OFFSET UNITYSDK_OFFSET(0xBACF660)
#define RPG_CLIENT_GLOBALVARS__SAVEINSTALLVERSION_OFFSET UNITYSDK_OFFSET(0xBAD2AF0)
#define RPG_CLIENT_GLOBALVARS__SHOULDCLEARPERISISTENTDIR_OFFSET UNITYSDK_OFFSET(0xBAD3020)
#define RPG_CLIENT_GLOBALVARS__UNINITUNITYGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xBAD22C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalVars_TypeDefinitionIndex = 57297;

	class GlobalVars : public ::System::Object
	{
	public:
		static ::RPG::Client::NetworkManager** StaticGet_s_NetworkManager()
		{
			return (::RPG::Client::NetworkManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1550);
		}
		static ::UnityEngine::Transform** StaticGet_s_CharacterCache()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1558);
		}
		static ::Class_1_D5012BC296A9375A** StaticGet_s_MaterialBlockEffectManager()
		{
			return (::Class_1_D5012BC296A9375A**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1560);
		}
		static ::Class_1_8A42BF5C39EA2E4C** StaticGet_s_ThreadSchedulerManager()
		{
			return (::Class_1_8A42BF5C39EA2E4C**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1568);
		}
		static ::UnityEngine::Transform** StaticGet_s_UIRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1570);
		}
		static ::RPG::Client::DialogueManager** StaticGet_s_DialogueManager()
		{
			return (::RPG::Client::DialogueManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1578);
		}
		static ::Class_1_F11BD9383D17B528** StaticGet_s_Tween()
		{
			return (::Class_1_F11BD9383D17B528**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1580);
		}
		static ::RPG::Client::TimerManager** StaticGet_s_TimerManager()
		{
			return (::RPG::Client::TimerManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1588);
		}
		static ::Class_1_0DF72B5BC66F295C** StaticGet_s_CharacterEffectManager()
		{
			return (::Class_1_0DF72B5BC66F295C**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1590);
		}
		static ::RPG::Client::LuaSystem** StaticGet_s_LuaSystem()
		{
			return (::RPG::Client::LuaSystem**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1598);
		}
		static ::UnityEngine::Transform** StaticGet_s_UICache()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15A0);
		}
		static ::UnityEngine::Canvas** StaticGet_s_Canvas3D()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15A8);
		}
		static ::Class_1_D051025A3269812F** StaticGet_s_IFixPatchManager()
		{
			return (::Class_1_D051025A3269812F**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15B0);
		}
		static ::Class_1_EA7DB942B013E54C** StaticGet_s_GoPoolMgr()
		{
			return (::Class_1_EA7DB942B013E54C**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15B8);
		}
		static ::RPG::GameCore::VersionData** StaticGet_s_VersionData()
		{
			return (::RPG::GameCore::VersionData**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15C0);
		}
		static ::RPG::Client::PlayGoManager** StaticGet_s_PlayGoManager()
		{
			return (::RPG::Client::PlayGoManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15C8);
		}
		static ::Class_1_F846C02FF2F1434D** StaticGet_s_MaterialGroupCbManager()
		{
			return (::Class_1_F846C02FF2F1434D**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15D0);
		}
		static ::InControl::InControlInputModule** StaticGet_s_InControlInputModule()
		{
			return (::InControl::InControlInputModule**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15D8);
		}
		static ::RPG::Client::RPGSDKAccountManager** StaticGet_s_AccountManager()
		{
			return (::RPG::Client::RPGSDKAccountManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15E0);
		}
		static ::RPG::Client::LoadingManager** StaticGet_s_LoadingManager()
		{
			return (::RPG::Client::LoadingManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15E8);
		}
		static ::Class_1_D59854D46040C6B8** StaticGet_s_DynamicOptimizeCenter()
		{
			return (::Class_1_D59854D46040C6B8**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15F0);
		}
		static ::RPG::Client::InControlActionsManager** StaticGet_s_InControlActionsManager()
		{
			return (::RPG::Client::InControlActionsManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x15F8);
		}
		static ::RPG::Client::EnvironmentSystem** StaticGet_s_EnvironmentSystem()
		{
			return (::RPG::Client::EnvironmentSystem**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1600);
		}
		static ::RPG::Client::GlobalConfigManager** StaticGet_s_ConfigManager()
		{
			return (::RPG::Client::GlobalConfigManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1608);
		}
		static ::Class_1_31B28970A5870409** StaticGet_s_AsyncProcessor()
		{
			return (::Class_1_31B28970A5870409**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1610);
		}
		static ::Class_1_21F37629863F4674** StaticGet_s_VirtualServerManager()
		{
			return (::Class_1_21F37629863F4674**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1618);
		}
		static ::RPG::Client::GamePlayLockManager** StaticGet_s_GamePlayLockManager()
		{
			return (::RPG::Client::GamePlayLockManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1620);
		}
		static ::Class_1_247AEF57282D634D** StaticGet_s_MultiplayerManager()
		{
			return (::Class_1_247AEF57282D634D**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1628);
		}
		static ::UnityEngine::GameObject** StaticGet_s_EventSystemGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1630);
		}
		static ::Class_1_40C8E2F7BA4DE994** StaticGet_s_ThirdPartSDKManager()
		{
			return (::Class_1_40C8E2F7BA4DE994**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1638);
		}
		static ::RPG::Client::PreDownloadManager** StaticGet_s_PreDownloadManager()
		{
			return (::RPG::Client::PreDownloadManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1640);
		}
		static ::RPG::Client::SettingManager** StaticGet_s_SettingManager()
		{
			return (::RPG::Client::SettingManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1648);
		}
		static ::Class_1_E5AFA09D8E02FD08** StaticGet_s_ShaderWarmupManager()
		{
			return (::Class_1_E5AFA09D8E02FD08**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1650);
		}
		static ::RPG::Client::GamePhaseManager** StaticGet_s_GamePhaseManager()
		{
			return (::RPG::Client::GamePhaseManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1658);
		}
		static ::RPG::Client::PSManager** StaticGet_s_PSManager()
		{
			return (::RPG::Client::PSManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1660);
		}
		static ::Class_2_204B0797FD6E1A9C** StaticGet_s_StackCameraManager()
		{
			return (::Class_2_204B0797FD6E1A9C**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1668);
		}
		static ::Class_1_94498A9753F0DEAA** StaticGet_s_EmotionLateUpdateManager()
		{
			return (::Class_1_94498A9753F0DEAA**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1670);
		}
		static ::Class_1_CB35F14FEF4E91E1** StaticGet_s_TimelineManager()
		{
			return (::Class_1_CB35F14FEF4E91E1**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1678);
		}
		static ::Class_1_C123D24D321AA621** StaticGet_s_ShaderPropertyTransitionManager()
		{
			return (::Class_1_C123D24D321AA621**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1680);
		}
		static ::UnityEngine::GameObject** StaticGet_s_MainGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1688);
		}
		static ::Class_2_C91A3154842340B5** StaticGet_LongPressHintDialogContext()
		{
			return (::Class_2_C91A3154842340B5**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1690);
		}
		static ::Class_1_7B4E9156998275BE** StaticGet_s_DiContainer()
		{
			return (::Class_1_7B4E9156998275BE**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1698);
		}
		static ::Class_1_46C4AD3834C1EA18** StaticGet_s_CloudSupporter()
		{
			return (::Class_1_46C4AD3834C1EA18**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16A0);
		}
		static ::Class_1_F5228F8C22090BDC** StaticGet_s_FollowPointMappingManager()
		{
			return (::Class_1_F5228F8C22090BDC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16A8);
		}
		static ::UnityEngine::GameObject** StaticGet_s_EasytouchGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16B0);
		}
		static ::RPG::Client::PipelineCameraEngine** StaticGet_s_PipelineCamera()
		{
			return (::RPG::Client::PipelineCameraEngine**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16B8);
		}
		static ::RPG::Client::MonoEffectManager** StaticGet_s_MonoEffectManager()
		{
			return (::RPG::Client::MonoEffectManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16C0);
		}
		static ::Class_1_0FE8866DA7E9C099** StaticGet_s_RuntimeAtlasManager()
		{
			return (::Class_1_0FE8866DA7E9C099**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16C8);
		}
		static ::RPG::Client::RenderOptionsManager** StaticGet_s_RenderOptionsManager()
		{
			return (::RPG::Client::RenderOptionsManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16D0);
		}
		static ::Class_1_D2B8D50DD9833CFC** StaticGet_s_MainCameraOccluder()
		{
			return (::Class_1_D2B8D50DD9833CFC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16D8);
		}
		static ::RPG::Client::ModuleManager** StaticGet_s_ModuleManager()
		{
			return (::RPG::Client::ModuleManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16E0);
		}
		static ::Class_1_CC6282A3D1F32D49** StaticGet_s_TAMonoTickManager()
		{
			return (::Class_1_CC6282A3D1F32D49**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16E8);
		}
		static ::Class_1_88DC60C54E5C3B07** StaticGet_s_PhaseModeManager()
		{
			return (::Class_1_88DC60C54E5C3B07**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16F0);
		}
		static ::UnityEngine::Camera** StaticGet_s_UICamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x16F8);
		}
		static ::Class_1_B93C65313845AAEB** StaticGet_s_CustomLateUpdateManager()
		{
			return (::Class_1_B93C65313845AAEB**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1700);
		}
		static ::Class_1_E3ED3259960F0549** StaticGet_s_ProfilerManager()
		{
			return (::Class_1_E3ED3259960F0549**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1708);
		}
		static ::UnityEngine::Camera** StaticGet_s_UI3DCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1710);
		}
		static ::RPG::Client::TextmapDownloadManager** StaticGet_s_TextDownloadManager()
		{
			return (::RPG::Client::TextmapDownloadManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1718);
		}
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>** StaticGet__HideInteractiveUIReasons()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::HideInteractiveUIReason>**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1720);
		}
		static ::RPG::Client::ResolutionController** StaticGet_s_ResolutionController()
		{
			return (::RPG::Client::ResolutionController**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1728);
		}
		static ::Class_1_0CB6C61727512407** StaticGet_s_RogueManager()
		{
			return (::Class_1_0CB6C61727512407**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1730);
		}
		static ::RPG::Client::LocalizationManager** StaticGet_s_LocalizationManager()
		{
			return (::RPG::Client::LocalizationManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1738);
		}
		static ::RPG::Client::TimeManager** StaticGet_s_TimeManager()
		{
			return (::RPG::Client::TimeManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1740);
		}
		static ::RPG::Client::AssetMgr** StaticGet_s_AssetMgr()
		{
			return (::RPG::Client::AssetMgr**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1748);
		}
		static ::Class_1_F0D462198B262603** StaticGet_s_RdrMatCacheMgr()
		{
			return (::Class_1_F0D462198B262603**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1750);
		}
		static ::Class_1_D2B8D50DD9833CFC** StaticGet_s_UI3DCameraOccluder()
		{
			return (::Class_1_D2B8D50DD9833CFC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1758);
		}
		static ::Class_1_59F68D258F7479FC** StaticGet_s_VideoManager()
		{
			return (::Class_1_59F68D258F7479FC**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1760);
		}
		static ::Class_2_57F2B60109689D90** StaticGet_BetaHintDialogContext()
		{
			return (::Class_2_57F2B60109689D90**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1768);
		}
		static ::UnityEngine::GameObject** StaticGet_s_WwiseInitializerGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1770);
		}
		static ::RPG::Client::AudioManager** StaticGet_s_AudioManager()
		{
			return (::RPG::Client::AudioManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1778);
		}
		static ::Class_1_7034D7C52E05781E** StaticGet_s_EntityTickLodManager()
		{
			return (::Class_1_7034D7C52E05781E**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1780);
		}
		static ::UnityEngine::Transform** StaticGet_s_UI3DRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1788);
		}
		static ::UnityEngine::Transform** StaticGet_s_BillboardRoot()
		{
			return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1790);
		}
		static ::RPG::Client::GyroManager** StaticGet_s_GyroManager()
		{
			return (::RPG::Client::GyroManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1798);
		}
		static ::Class_3_6E8B2FCA74824121** StaticGet_s_GamePlayAssetLoader()
		{
			return (::Class_3_6E8B2FCA74824121**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17A0);
		}
		static ::UnityEngine::Camera** StaticGet_s_MainCamera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17A8);
		}
		static ::Class_1_FDDA284A31AE5159** StaticGet_s_AttachPointManager()
		{
			return (::Class_1_FDDA284A31AE5159**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17B0);
		}
		static ::RPG::Client::GameFlowManager** StaticGet_s_GameFlowManager()
		{
			return (::RPG::Client::GameFlowManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17B8);
		}
		static ::RPG::Client::InputSettingKeyConflictManager** StaticGet_s_InputSettingKeyConflictManager()
		{
			return (::RPG::Client::InputSettingKeyConflictManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17C0);
		}
		static ::Class_1_6041ED8E42CCA413** StaticGet_s_CRPCameraManager()
		{
			return (::Class_1_6041ED8E42CCA413**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17C8);
		}
		static ::RPG::Client::EffectPluginManager** StaticGet_s_EffectPluginManager()
		{
			return (::RPG::Client::EffectPluginManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17D0);
		}
		static ::UnityEngine::Canvas** StaticGet_s_PageCanvas()
		{
			return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17D8);
		}
		static ::Class_1_BF3DE12C5A1505DF** StaticGet_s_MotionManager()
		{
			return (::Class_1_BF3DE12C5A1505DF**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17E0);
		}
		static ::Class_2_3E17E61D9F6875C4** StaticGet_DebugInfoWidgetContext()
		{
			return (::Class_2_3E17E61D9F6875C4**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17E8);
		}
		static ::RPG::Client::ClientOnlyCommonConfig** StaticGet_s_ClientOnlyCommonConfig()
		{
			return (::RPG::Client::ClientOnlyCommonConfig**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17F0);
		}
		static ::RPG::Client::CameraManager** StaticGet_s_CameraManager()
		{
			return (::RPG::Client::CameraManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x17F8);
		}
		static ::RPG::Client::UIManager** StaticGet_s_UIManager()
		{
			return (::RPG::Client::UIManager**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1800);
		}
		static ::Class_1_0C1B8B2E4F85A50B** StaticGet_s_LuaHotfixManager()
		{
			return (::Class_1_0C1B8B2E4F85A50B**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1808);
		}
		static ::RPG::Client::SimulateSpeedController** StaticGet__s_SimulationController_k__BackingField()
		{
			return (::RPG::Client::SimulateSpeedController**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1810);
		}
		static ::RPG::Client::VietNam18DialogContext** StaticGet_VietNam18DialogContext()
		{
			return (::RPG::Client::VietNam18DialogContext**)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0x1818);
		}
		static ::System::Int32* StaticGet__DebugRandomCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA00);
		}
		static ::System::Boolean* StaticGet_s_ShowLevelSelectUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA04);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLodCheckRendererVisible()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA05);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLodByGM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA06);
		}
		static ::System::Single* StaticGet_s_FirstUIDisplayedTimestamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA08);
		}
		static ::System::Int32* StaticGet_s_LogicFrameRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA0C);
		}
		static ::RPG::Client::StartUpReasonType* StaticGet_StartUpReasonType()
		{
			return (::RPG::Client::StartUpReasonType*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA10);
		}
		static ::System::Int32* StaticGet_s_CustomUpdatePreloadTimeMs()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA14);
		}
		static ::System::Boolean* StaticGet__s_BattleClientOnlyRandom_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA18);
		}
		static ::System::Boolean* StaticGet_s_Inited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA19);
		}
		static ::System::Boolean* StaticGet__BaselineMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA1A);
		}
		static ::System::Boolean* StaticGet_s_UseMapRotation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA1B);
		}
		static ::System::Single* StaticGet_s_LogicFrameInterval()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA1C);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickLod()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::System::Boolean* StaticGet_s_UseLogicFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA21);
		}
		static ::System::Boolean* StaticGet_s_OpenEntityTickBalance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA22);
		}
		static ::System::Boolean* StaticGet_s_ReinstallPackage()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA23);
		}
		static ::System::Single* StaticGet_s_LogoUIDisplayedTimestamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GlobalVars_TypeDefinitionIndex)->GetStaticField(0xA24);
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
