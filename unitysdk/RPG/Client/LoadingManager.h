#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingManager_LoadingType.h"
#include "unitysdk/RPG/Client/LoadingManager_VerifyLoadingType.h"
#include "unitysdk/System/Object.h"

class Class_1_3074563A66A2D0FE;
class Class_1_31B28970A5870409;
class Class_1_9D40F9D90905A4A4;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class LoadingManager_WorkDefCounter; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0xBE4D950)
#define RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET UNITYSDK_OFFSET(0xBE4D940)
#define RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xBE4D880)
#define RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0xBE4D970)
#define RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET UNITYSDK_OFFSET(0xBE4D930)
#define RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBE4A8E0)
#define RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET UNITYSDK_OFFSET(0xBE4B030)
#define RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET UNITYSDK_OFFSET(0xBE4B390)
#define RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xBE4BC50)
#define RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET UNITYSDK_OFFSET(0xBE4A9F0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET UNITYSDK_OFFSET(0xBE4BA70)
#define RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0xBE4BB20)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET UNITYSDK_OFFSET(0xBE4B900)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET UNITYSDK_OFFSET(0xBE4BCA0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET UNITYSDK_OFFSET(0xBE4BF00)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET UNITYSDK_OFFSET(0xBE4B640)
#define RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET UNITYSDK_OFFSET(0xBE4B7A0)
#define RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE4B9C0)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE4AF90)
#define RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xBE4B3D0)
#define RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE4AFE0)
#define RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET UNITYSDK_OFFSET(0xBE4D960)
#define RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET UNITYSDK_OFFSET(0xBE4D980)
#define RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET UNITYSDK_OFFSET(0xBE4AB00)
#define RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET UNITYSDK_OFFSET(0xBE4AD00)
#define RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xBE4B080)
#define RPG_CLIENT_LOADINGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE4D990)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xBE4D5A0)
#define RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0xBE4D8D0)
#define RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET UNITYSDK_OFFSET(0xBE4D210)
#define RPG_CLIENT_LOADINGMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBE4A540)
#define RPG_CLIENT_LOADINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4A240)
#define RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET UNITYSDK_OFFSET(0xBE4B1C0)
#define RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET UNITYSDK_OFFSET(0xBE4D290)
#define RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET UNITYSDK_OFFSET(0xBE4D170)
#define RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET UNITYSDK_OFFSET(0xBE49FE0)
#define RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET UNITYSDK_OFFSET(0xBE4D430)
#define RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET UNITYSDK_OFFSET(0xBE4D5F0)
#define RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET UNITYSDK_OFFSET(0xBE4AA40)
#define RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET UNITYSDK_OFFSET(0xBE49EC0)
#define RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xBE49AA0)
#define RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xBE49C60)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET UNITYSDK_OFFSET(0xBE49E00)
#define RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET UNITYSDK_OFFSET(0xBE49D10)
#define RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET UNITYSDK_OFFSET(0xBE4D350)
#define RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET UNITYSDK_OFFSET(0xBE4D490)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_TypeDefinitionIndex = 56608;

	class LoadingManager : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__StopTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x4F060);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__CustomUpdatePreloadManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x4F068);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__StartTickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(LoadingManager_TypeDefinitionIndex)->GetStaticField(0x4F070);
		}
		// static const ::System::Int32 _TARGET_FRAME_RATE_DURING_TICK = 0xF; // 0x0
		// static const ::System::String* _Loading_Max_Time_LoadMapIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_MazeToBattleIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_BattleToMazeIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_DesignLoadDataIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_EnterPerformanceIDKey; // 0x0
		// static const ::System::String* _Loading_Max_Time_LeavePerformanceIDKey; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_count_key; // 0x0
		// static const ::System::String* _adv_loading_receive_packet_list_key; // 0x0
		::Class_1_3074563A66A2D0FE* _LoadMapStuckReportData; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _MonsterWaveList; // 0x18
		::Class_1_31B28970A5870409* _AsyncProcessor; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadFails; // 0x28
		::RPG::Client::LoadingManager_WorkDefCounter* _workDefCounter; // 0x30
		::System::Action_1<::System::Single>* _ProgressChangedCallback; // 0x38
		::System::Collections::Generic::HashSet_1<::Class_1_9D40F9D90905A4A4*>* _LoadingWorks; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportArguments; // 0x48
		::System::Action* _LoadFinishCallback; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _ReportTryLoadStates; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ReportNotifyArguments; // 0x60
		::System::UInt64 _WorkActionTime; // 0x68
		::System::Int32 _MainCameraOriginCullingMask; // 0x70
		::System::Single _DesignDataLoadMaxTime; // 0x74
		::System::Single _MazeToBattleMaxTime; // 0x78
		::System::Boolean _LogReported; // 0x7C
		::System::Boolean _StartTick; // 0x7D
		::System::Boolean _EnableCustomPreload_k__BackingField; // 0x7E
		::System::Boolean _ResetMainCameraCullingFlag; // 0x7F
		::System::Single _LeavePerformanceMaxTime; // 0x80
		::System::Int32 _TargetFrameRateBeforeStartTick; // 0x84
		::System::UInt32 _PerformanceID; // 0x88
		::System::Single _StuckCheckTimer; // 0x8C
		::System::UInt64 _EffectTransitionExistTime; // 0x90
		::System::UInt64 _TotalLoadingTime; // 0x98
		::System::UInt64 _ScreenStuckTimeBegin; // 0xA0
		::System::UInt64 _ScreenStuckTime; // 0xA8
		::System::Single _FinishedProgress; // 0xB0
		::System::Int32 _WorkActionCallNums; // 0xB4
		::System::UInt32 _LastStageID; // 0xB8
		::System::Single _LoadMapMaxTime; // 0xBC
		::System::Single _EnterPerformanceMaxTime; // 0xC0
		::System::Boolean _SkipSceneItemFading_k__BackingField; // 0xC4
		::System::Boolean _ResetTargetFPSFlag; // 0xC5
		::System::UInt64 _TotalLoadingTimeBegin; // 0xC8
		::System::UInt64 _WorkActionTimeBegin; // 0xD0
		::System::UInt64 _ADVInitTimeBegin; // 0xD8
		::System::UInt32 _LastMapID; // 0xE0
		::System::Int32 _LoadingType; // 0xE4
		::System::UInt64 _ADVInitTime; // 0xE8
		::System::Single _BattleToMazeMaxTime; // 0xF0
		::System::Int32 _FinishedWorkCount; // 0xF4
		::System::Int32 _TotalWorkCount; // 0xF8
		::System::UInt64 _EffectTransitionExistTimeBegin; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_31B28970A5870409* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_31B28970A5870409*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _StartStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STARTSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _StopStuckCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__STOPSTUCKCHECK_OFFSET))(this);
		}

		::System::Void _TickStuckCheck(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_OFFSET))(this, a1);
		}

		::System::Void _ResetStuckCheckTimerWhenWorkFinish(::Class_1_9D40F9D90905A4A4* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__RESETSTUCKCHECKTIMERWHENWORKFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void _TickStuckCheck_LoadMap(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TICKSTUCKCHECK_LOADMAP_OFFSET))(this, a1);
		}

		::System::Void _OnLoadMapStuckSamplePoint(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONLOADMAPSTUCKSAMPLEPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::Void RegisteLoadingWorkDefsCounter(::RPG::Client::LoadingManager_WorkDefCounter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_WorkDefCounter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REGISTELOADINGWORKDEFSCOUNTER_OFFSET))(this, a1);
		}

		::System::Void StartTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STARTTICK_OFFSET))(this, a1);
		}

		::System::Void StopTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_STOPTICK_OFFSET))(this);
		}

		::System::Void SetLoadFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetProgressChangedCallback(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETPROGRESSCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean IsGameLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_ISGAMELOADING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_LATETICK_OFFSET))(this);
		}

		::System::Void _CustomUpdatePreloadManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CUSTOMUPDATEPRELOADMANAGER_OFFSET))(this);
		}

		::System::Void SetLoadingConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SETLOADINGCONFIGDATA_OFFSET))(this);
		}

		::System::Void ReportLoadingTryFailCount(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYFAILCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLoadingTryResult(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGTRYRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLoadingADVInitEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGADVINITEND_OFFSET))(this);
		}

		::System::Void ReportScreenStuckBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTSCREENSTUCKBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONBEGIN_OFFSET))(this);
		}

		::System::Void ReportEffectTransitionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTEFFECTTRANSITIONEND_OFFSET))(this);
		}

		::System::Void RecordPerformanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_RECORDPERFORMANCEID_OFFSET))(this, a1);
		}

		::System::Void ReportLoadingBegin(::RPG::Client::LoadingManager_LoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void ReportLoadingData(::RPG::Client::LoadingManager_VerifyLoadingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_REPORTLOADINGDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsLoadingTypeReportMatch(::RPG::Client::LoadingManager_LoadingType a1, ::RPG::Client::LoadingManager_VerifyLoadingType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType, ::RPG::Client::LoadingManager_VerifyLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ISLOADINGTYPEREPORTMATCH_OFFSET))(this, a1, a2);
		}

		::System::Single _GetMaxLoadingTime(::RPG::Client::LoadingManager_LoadingType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::LoadingManager_LoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__GETMAXLOADINGTIME_OFFSET))(this, a1);
		}

		::System::Single _ConvertTimeToSecond(::System::UInt64 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__CONVERTTIMETOSECOND_OFFSET))(this, a1);
		}

		::System::Void _TryAddToWatch(::Class_1_9D40F9D90905A4A4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__TRYADDTOWATCH_OFFSET))(this, a1);
		}

		::System::Void _RefreshWorkDefCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__REFRESHWORKDEFCOUNT_OFFSET))(this);
		}

		::System::Void _OnQueueNewWork(::Class_1_9D40F9D90905A4A4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONQUEUENEWWORK_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__UPDATEFINISHPROGRESS_OFFSET))(this);
		}

		::System::Void _OnWorkFinish(::Class_1_9D40F9D90905A4A4* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9D40F9D90905A4A4*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__ONWORKFINISH_OFFSET))(this, a1, a2);
		}

		::System::Single _ComputeFinishedProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTEFINISHEDPROGRESS_OFFSET))(this);
		}

		::System::Single _ComputeNextProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER__COMPUTENEXTPROGRESS_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_PROGRESS_OFFSET))(this);
		}

		::System::Int32 get_TotalWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_TOTALWORKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FinishedWorkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_FINISHEDWORKCOUNT_OFFSET))(this);
		}

		::System::Boolean get_EnableCustomPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_ENABLECUSTOMPRELOAD_OFFSET))(this);
		}

		::System::Void set_EnableCustomPreload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_ENABLECUSTOMPRELOAD_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipSceneItemFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_GET_SKIPSCENEITEMFADING_OFFSET))(this);
		}

		::System::Void set_SkipSceneItemFading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_SET_SKIPSCENEITEMFADING_OFFSET))(this, a1);
		}
	};
}
