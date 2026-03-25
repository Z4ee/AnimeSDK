#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RPGApplication_UpdateStep.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RPGAPPLICATION_DISPATCHANIMATORMOVEMENTJOBSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA24C3A0)
#define RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONID_OFFSET UNITYSDK_OFFSET(0xA250090)
#define RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0xA250080)
#define RPG_CLIENT_RPGAPPLICATION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA24CCF0)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISAPPLICATIONQUITING_OFFSET UNITYSDK_OFFSET(0xA250260)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0xA250040)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISQUIT_OFFSET UNITYSDK_OFFSET(0xA250070)
#define RPG_CLIENT_RPGAPPLICATION_GET_ISRECOVERFOCUS_OFFSET UNITYSDK_OFFSET(0xA250050)
#define RPG_CLIENT_RPGAPPLICATION_GET_UPDATEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA24CC90)
#define RPG_CLIENT_RPGAPPLICATION_GET_UPDATE_STEP_OFFSET UNITYSDK_OFFSET(0xA24CC60)
#define RPG_CLIENT_RPGAPPLICATION_LIMITFRAMEMAXTIMESTEP_OFFSET UNITYSDK_OFFSET(0xA24FFA0)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xA24D680)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xA24D7D0)
#define RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xA24DA80)
#define RPG_CLIENT_RPGAPPLICATION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA24EE20)
#define RPG_CLIENT_RPGAPPLICATION_ONSTARTLATER_OFFSET UNITYSDK_OFFSET(0xA24D0E0)
#define RPG_CLIENT_RPGAPPLICATION_ONSTARTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xA24F9E0)
#define RPG_CLIENT_RPGAPPLICATION_ONSTART_OFFSET UNITYSDK_OFFSET(0xA24CDF0)
#define RPG_CLIENT_RPGAPPLICATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA24DFC0)
#define RPG_CLIENT_RPGAPPLICATION_QUITAPP_OFFSET UNITYSDK_OFFSET(0xA24DD70)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTAPPNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xA24FBF0)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTAPP_OFFSET UNITYSDK_OFFSET(0xA24F830)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTGAMEDEV_OFFSET UNITYSDK_OFFSET(0xA24F6F0)
#define RPG_CLIENT_RPGAPPLICATION_RESTARTMAZEDEV_OFFSET UNITYSDK_OFFSET(0xA24F780)
#define RPG_CLIENT_RPGAPPLICATION_SET_ISAPPLICATIONQUITING_OFFSET UNITYSDK_OFFSET(0xA250270)
#define RPG_CLIENT_RPGAPPLICATION_SET_ISRECOVERFOCUS_OFFSET UNITYSDK_OFFSET(0xA250060)
#define RPG_CLIENT_RPGAPPLICATION_SET_UPDATEFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA24CCC0)
#define RPG_CLIENT_RPGAPPLICATION_SET_UPDATE_STEP_OFFSET UNITYSDK_OFFSET(0xA24C620)
#define RPG_CLIENT_RPGAPPLICATION_STARTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0xA24FB60)
#define RPG_CLIENT_RPGAPPLICATION__AFTERLATEUPDATESCHEDULE_OFFSET UNITYSDK_OFFSET(0xA24CA60)
#define RPG_CLIENT_RPGAPPLICATION__AFTERTICKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA24C6A0)
#define RPG_CLIENT_RPGAPPLICATION__BEFORELATEUPDATESCHEDULE_OFFSET UNITYSDK_OFFSET(0xA24C860)
#define RPG_CLIENT_RPGAPPLICATION__BEFORETICKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA24C430)
#define RPG_CLIENT_RPGAPPLICATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xA250280)
#define RPG_CLIENT_RPGAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0xA24CDE0)
#define RPG_CLIENT_RPGAPPLICATION__REGGLOBALNOTIFY_OFFSET UNITYSDK_OFFSET(0xA24D370)
#define RPG_CLIENT_RPGAPPLICATION__TRYRECOVERCLOUDSAVEDATA_OFFSET UNITYSDK_OFFSET(0xA24CF90)
#define RPG_CLIENT_RPGAPPLICATION__UPDATEINPUTLISTENER_OFFSET UNITYSDK_OFFSET(0xA2500A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGApplication_TypeDefinitionIndex = 56792;

	class RPGApplication : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAsyncProcessorMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE4E0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateRendererMaterialCacheMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE4E8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEntityTickLodManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE4F0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTAMonoTickManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE4F8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateLoadingManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE500);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateDynamicOptimizeMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE508);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateBeforeLateUpdateScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE510);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateGamePhaseManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE518);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBeforeTickScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE520);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAudioManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE528);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimerWorkerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE530);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateNetworkMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE538);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateProfilerManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE540);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateFollowPointMappingMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE548);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMaterialBlockEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE550);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAfterTickScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE558);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateQAManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE560);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePrefsTickSaveMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE568);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAfterLateUpdateScheduleMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE570);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateLuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE578);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateLoadingManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE580);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimelineMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE588);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateAssetMgrMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE590);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAndroidGameStateSeriviceManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE598);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePrefsAutoSaveMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5A0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5A8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateShaderPropertyTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5B0);
		}
		static ::RPG::Client::RPGApplication** StaticGet__Instance()
		{
			return (::RPG::Client::RPGApplication**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5B8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateTAMonoTickManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5C0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEmotionLateUpdateManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5C8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStackCameraManagerTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5D0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateCustomLateUpdateManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5D8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateThreadProfileManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5E0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePipelineCameraMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5E8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateRenderingCommonMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5F0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateStackCameraManagerCollectMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE5F8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateGameObjectPoolMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE600);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateVideoManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE608);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateCharacterEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE610);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTimerManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE618);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateShaderPropertyTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE620);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateGamePhaseManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE628);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateBattlePreloadPoolMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE630);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateAttachPointManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE638);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePlayGoManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE640);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMonoEffectManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE648);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMonoEffectManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE650);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerEndOfLateTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE658);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateGamePhaseManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE660);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateShaderWarmupManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE668);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateEffectPluginManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE670);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateUIMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE678);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateEffectPluginManagerRenderTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0xE680);
		}
		static ::RPG::Client::RPGApplication_UpdateStep* StaticGet__UpdateStep()
		{
			return (::RPG::Client::RPGApplication_UpdateStep*)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x4D50);
		}
		static ::System::Int32* StaticGet__UpdateFrameCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RPGApplication_TypeDefinitionIndex)->GetStaticField(0x4D54);
		}
		// static const ::System::Single DefaultFrameMaxTimeStep; // 0x0
		::UnityEngine::GameObject* _GameObject; // 0x10
		::System::UInt64 _PauseApplicationTime; // 0x18
		::System::Boolean _ApplicationStarted; // 0x20
		::System::Boolean _IsQuit; // 0x21
		::System::Boolean _isRecoverFocus; // 0x22
		::System::Boolean _isFocus; // 0x23
		::System::Int32 _LimitMaxTimeStep_LeftFrames; // 0x24
		::System::Single _LimitMaxTimeStep_LeftTime; // 0x28
		::System::Single _LimitMaxTimeStep; // 0x2C
		::System::Boolean _IsApplicationQuiting_k__BackingField; // 0x30
		::System::Single _TimeElapsedAccumulate; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__CCTOR_OFFSET))();
		}

		::System::Void DispatchAnimatorMovementJobSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_DISPATCHANIMATORMOVEMENTJOBSCHEDULE_OFFSET))(this);
		}

		::System::Void _BeforeTickSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__BEFORETICKSCHEDULE_OFFSET))(this);
		}

		::System::Void _AfterTickSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__AFTERTICKSCHEDULE_OFFSET))(this);
		}

		::System::Void _BeforeLateUpdateSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__BEFORELATEUPDATESCHEDULE_OFFSET))(this);
		}

		::System::Void _AfterLateUpdateSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__AFTERLATEUPDATESCHEDULE_OFFSET))(this);
		}

		static ::RPG::Client::RPGApplication_UpdateStep get_UPDATE_STEP()
		{
			return ((::RPG::Client::RPGApplication_UpdateStep(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_UPDATE_STEP_OFFSET))();
		}

		static ::System::Void set_UPDATE_STEP(::RPG::Client::RPGApplication_UpdateStep value)
		{
			return ((::System::Void(*)(::RPG::Client::RPGApplication_UpdateStep))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_UPDATE_STEP_OFFSET))(value);
		}

		static ::System::Int32 get_UpdateFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_UPDATEFRAMECOUNT_OFFSET))();
		}

		static ::System::Void set_UpdateFrameCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_UPDATEFRAMECOUNT_OFFSET))(value);
		}

		static ::RPG::Client::RPGApplication* get_Instance()
		{
			return ((::RPG::Client::RPGApplication*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_INSTANCE_OFFSET))();
		}

		::System::Void OnStart(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTART_OFFSET))(this, gameObject);
		}

		::System::Void OnStartLater()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTARTLATER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryRecoverCloudSaveData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__TRYRECOVERCLOUDSAVEDATA_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void OnApplicationPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONPAUSE_OFFSET))(this, isPause);
		}

		::System::Void OnApplicationQuit(::System::Boolean quitTeminal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONAPPLICATIONQUIT_OFFSET))(this, quitTeminal);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void RestartGameDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTGAMEDEV_OFFSET))(this);
		}

		::System::Void RestartMazeDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTMAZEDEV_OFFSET))(this);
		}

		::System::Void RestartApp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTAPP_OFFSET))(this);
		}

		::System::Void OnStartNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_ONSTARTNEXTFRAME_OFFSET))(this);
		}

		::System::Collections::IEnumerator* StartNextFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_STARTNEXTFRAME_OFFSET))(this);
		}

		::System::Void RestartAppNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_RESTARTAPPNEXTFRAME_OFFSET))(this);
		}

		::System::Void QuitApp(::System::Boolean nextFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_QUITAPP_OFFSET))(this, nextFrame);
		}

		::System::Void LimitFrameMaxTimeStep(::System::Single maxTimeStep, ::System::Int32 limitFrames, ::System::Single limitTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_LIMITFRAMEMAXTIMESTEP_OFFSET))(this, maxTimeStep, limitFrames, limitTime);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISFOCUS_OFFSET))(this);
		}

		::System::Boolean get_IsRecoverFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISRECOVERFOCUS_OFFSET))(this);
		}

		::System::Void set_IsRecoverFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_ISRECOVERFOCUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsQuit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISQUIT_OFFSET))(this);
		}

		::System::String* get_ApplicationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONNAME_OFFSET))(this);
		}

		::System::Int32 get_ApplicationID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_APPLICATIONID_OFFSET))(this);
		}

		::System::Void _UpdateInputListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__UPDATEINPUTLISTENER_OFFSET))(this);
		}

		::System::Void _RegGlobalNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION__REGGLOBALNOTIFY_OFFSET))(this);
		}

		::System::Boolean get_IsApplicationQuiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_GET_ISAPPLICATIONQUITING_OFFSET))(this);
		}

		::System::Void set_IsApplicationQuiting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGAPPLICATION_SET_ISAPPLICATIONQUITING_OFFSET))(this, value);
		}
	};
}
