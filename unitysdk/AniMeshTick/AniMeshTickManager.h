#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AniMeshTick/AniMeshTickManager_LodLevel.h"
#include "unitysdk/AniMeshTick/AniMeshTickManager_TargetType.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace AniMeshTick { class AniMeshTickManager_TweenDistanceEntry; }
namespace AniMeshTick { class AniMeshTickSettings; }
namespace AniMeshTick { template <typename T> class AniMeshTickManager_TickBucket_1; }
namespace DG::Tweening { class Tween; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Controllers { class CurvyController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define ANIMESHTICK_ANIMESHTICKMANAGER_APPLYPENDINGTWEENADDS_OFFSET UNITYSDK_OFFSET(0x168F5820)
#define ANIMESHTICK_ANIMESHTICKMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x168F3570)
#define ANIMESHTICK_ANIMESHTICKMANAGER_CALCULATEPROJECTIONCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x168F8320)
#define ANIMESHTICK_ANIMESHTICKMANAGER_CALCULATESCREENSPACEINTERVAL_OFFSET UNITYSDK_OFFSET(0x168F80D0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_DETERMINECONTROLLERBUCKET_OFFSET UNITYSDK_OFFSET(0x168F7570)
#define ANIMESHTICK_ANIMESHTICKMANAGER_DETERMINESPLINEBUCKET_OFFSET UNITYSDK_OFFSET(0x168F6CB0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ENSUREINSTANCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x168F12D0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ENSURELODCAMERA_OFFSET UNITYSDK_OFFSET(0x168F3EE0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ENSURELODREFERENCE_OFFSET UNITYSDK_OFFSET(0x168F3C90)
#define ANIMESHTICK_ANIMESHTICKMANAGER_EVALUATELODLEVEL_OFFSET UNITYSDK_OFFSET(0x168F7B90)
#define ANIMESHTICK_ANIMESHTICKMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x168F54D0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_FLUSHTARGETS_OFFSET UNITYSDK_OFFSET(0x168F0F90)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GETBASEINTERVAL_OFFSET UNITYSDK_OFFSET(0x168F7FF0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GETBUCKETINTERVAL_OFFSET UNITYSDK_OFFSET(0x168F7F40)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GETCONTROLLERLODLEVEL_OFFSET UNITYSDK_OFFSET(0x168F7880)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GETEFFECTIVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x168F75F0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GETJUMPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x168F8500)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GETREPRESENTATIVEDISTANCE_OFFSET UNITYSDK_OFFSET(0x168F85B0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GETSPLINELODLEVEL_OFFSET UNITYSDK_OFFSET(0x168F7690)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GET_CENTRALIZEDTICKENABLED_OFFSET UNITYSDK_OFFSET(0x168F0CF0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x168F1270)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INITIALIZEBUCKETS_OFFSET UNITYSDK_OFFSET(0x168F3930)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x168F16A0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALREGISTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168F25A0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALREGISTERSPLINE_OFFSET UNITYSDK_OFFSET(0x168F1B50)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALREGISTERTWEENDISTANCE_OFFSET UNITYSDK_OFFSET(0x168F3000)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALUNREGISTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168F2B40)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALUNREGISTERSPLINE_OFFSET UNITYSDK_OFFSET(0x168F20F0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALUNREGISTERTWEENDISTANCE_OFFSET UNITYSDK_OFFSET(0x168F3340)
#define ANIMESHTICK_ANIMESHTICKMANAGER_INVALIDATESCREENSPACELODCACHE_OFFSET UNITYSDK_OFFSET(0x168F1770)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ISCONTROLLERTICKABLE_OFFSET UNITYSDK_OFFSET(0x168F7370)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ISSPLINETICKABLE_OFFSET UNITYSDK_OFFSET(0x168F6AB0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x168F5340)
#define ANIMESHTICK_ANIMESHTICKMANAGER_LOADSETTINGSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x168F3A00)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ONCONTROLLERMANUALMODEDISABLED_OFFSET UNITYSDK_OFFSET(0x168F4DF0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ONCONTROLLERMANUALMODEENABLED_OFFSET UNITYSDK_OFFSET(0x168F4DA0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x168F4C00)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x168F47A0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x168F46C0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ONSPLINEMANUALMODEDISABLED_OFFSET UNITYSDK_OFFSET(0x168F4D50)
#define ANIMESHTICK_ANIMESHTICKMANAGER_ONSPLINEMANUALMODEENABLED_OFFSET UNITYSDK_OFFSET(0x168F4D00)
#define ANIMESHTICK_ANIMESHTICKMANAGER_PROCESSCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x168F5C10)
#define ANIMESHTICK_ANIMESHTICKMANAGER_PROCESSSPLINES_OFFSET UNITYSDK_OFFSET(0x168F59A0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_PROCESSTWEENDISTANCECONTROL_OFFSET UNITYSDK_OFFSET(0x168F5E90)
#define ANIMESHTICK_ANIMESHTICKMANAGER_PRUNETARGETS_OFFSET UNITYSDK_OFFSET(0x168F5660)
#define ANIMESHTICK_ANIMESHTICKMANAGER_REGISTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168F2370)
#define ANIMESHTICK_ANIMESHTICKMANAGER_REGISTERSPLINE_OFFSET UNITYSDK_OFFSET(0x168F1920)
#define ANIMESHTICK_ANIMESHTICKMANAGER_REGISTERTWEENFORDISTANCECONTROL_OFFSET UNITYSDK_OFFSET(0x168F2DC0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_RESETEDITORTIME_OFFSET UNITYSDK_OFFSET(0x168F4040)
#define ANIMESHTICK_ANIMESHTICKMANAGER_SETLODCAMERA_OFFSET UNITYSDK_OFFSET(0x168F1850)
#define ANIMESHTICK_ANIMESHTICKMANAGER_SETLODREFERENCE_OFFSET UNITYSDK_OFFSET(0x168F17B0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_SET_CENTRALIZEDTICKENABLED_OFFSET UNITYSDK_OFFSET(0x168F0D50)
#define ANIMESHTICK_ANIMESHTICKMANAGER_SUBSCRIBETOCOMPONENTEVENTS_OFFSET UNITYSDK_OFFSET(0x168F4090)
#define ANIMESHTICK_ANIMESHTICKMANAGER_TICKCONTROLLERBUCKET_OFFSET UNITYSDK_OFFSET(0x168F6D30)
#define ANIMESHTICK_ANIMESHTICKMANAGER_TICKSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x168F5930)
#define ANIMESHTICK_ANIMESHTICKMANAGER_TICKSPLINEBUCKET_OFFSET UNITYSDK_OFFSET(0x168F6500)
#define ANIMESHTICK_ANIMESHTICKMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x168F4FD0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_UNREGISTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168F27F0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_UNREGISTERSPLINE_OFFSET UNITYSDK_OFFSET(0x168F1DA0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_UNREGISTERTWEENFROMDISTANCECONTROL_OFFSET UNITYSDK_OFFSET(0x168F3160)
#define ANIMESHTICK_ANIMESHTICKMANAGER_UNSUBSCRIBEFROMCOMPONENTEVENTS_OFFSET UNITYSDK_OFFSET(0x168F48A0)
#define ANIMESHTICK_ANIMESHTICKMANAGER_UPDATESCREENSPACELODCACHE_OFFSET UNITYSDK_OFFSET(0x168F8220)
#define ANIMESHTICK_ANIMESHTICKMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x168F4E40)
#define ANIMESHTICK_ANIMESHTICKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E3D1F0)
#define ANIMESHTICK_ANIMESHTICKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3CF80)

namespace AniMeshTick
{
	inline static constexpr unsigned int AniMeshTickManager_TypeDefinitionIndex = 86575;

	class AniMeshTickManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::AniMeshTick::AniMeshTickManager** StaticGet_instance()
		{
			return (::AniMeshTick::AniMeshTickManager**)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x420B0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_PruneMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10060);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_TryTickControllerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10068);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ProcessTweenDistanceMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10070);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_TryTickSplineMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10078);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ProcessControllersMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10080);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ProcessSplinesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10088);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ExecuteControllerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10090);
		}
		static ::System::Boolean* StaticGet_centralizedTickEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x10098);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_TickMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x100A0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_ExecuteSplineMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(AniMeshTickManager_TypeDefinitionIndex)->GetStaticField(0x100A8);
		}
		::AniMeshTick::AniMeshTickSettings* settings; // 0x18
		::UnityEngine::Transform* lodReference; // 0x20
		::UnityEngine::Camera* lodCamera; // 0x28
		::System::Boolean autoSpawned; // 0x30
		::System::Single lastEditorUpdateTime; // 0x34
		::System::Boolean editorTimeInitialized; // 0x38
		::System::Single cachedProjectionCoefficient; // 0x3C
		::System::Single cachedNearDistance; // 0x40
		::System::Single cachedMediumDistance; // 0x44
		::System::Single cachedFarDistance; // 0x48
		::System::Boolean screenSpaceLodCacheDirty; // 0x4C
		::System::Collections::Generic::List_1<::AniMeshTick::AniMeshTickManager_TweenDistanceEntry*>* tweenDistanceEntries; // 0x50
		::System::Collections::Generic::List_1<::AniMeshTick::AniMeshTickManager_TweenDistanceEntry*>* pendingTweenAdds; // 0x58
		::Il2CppArray<::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::CurvySpline*>*>* splineBuckets; // 0x60
		::Il2CppArray<::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::Controllers::CurvyController*>*>* controllerBuckets; // 0x68
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvySpline*, ::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::CurvySpline*>*>* splineBucketLookup; // 0x70
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Controllers::CurvyController*, ::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::Controllers::CurvyController*>*>* controllerBucketLookup; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_CentralizedTickEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GET_CENTRALIZEDTICKENABLED_OFFSET))();
		}

		static ::System::Void set_CentralizedTickEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_SET_CENTRALIZEDTICKENABLED_OFFSET))(value);
		}

		static ::AniMeshTick::AniMeshTickManager* get_Instance()
		{
			return ((::AniMeshTick::AniMeshTickManager*(*)())((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void Initialize(::AniMeshTick::AniMeshTickSettings* customSettings)
		{
			return ((::System::Void(*)(::AniMeshTick::AniMeshTickSettings*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INITIALIZE_OFFSET))(customSettings);
		}

		static ::System::Void SetLodReference(::UnityEngine::Transform* reference)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_SETLODREFERENCE_OFFSET))(reference);
		}

		static ::System::Void SetLodCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_SETLODCAMERA_OFFSET))(camera);
		}

		static ::System::Void RegisterSpline(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_REGISTERSPLINE_OFFSET))(spline);
		}

		static ::System::Void UnregisterSpline(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_UNREGISTERSPLINE_OFFSET))(spline);
		}

		static ::System::Void RegisterController(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_REGISTERCONTROLLER_OFFSET))(controller);
		}

		static ::System::Void UnregisterController(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_UNREGISTERCONTROLLER_OFFSET))(controller);
		}

		static ::System::Void RegisterTweenForDistanceControl(::DG::Tweening::Tween* tween, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_REGISTERTWEENFORDISTANCECONTROL_OFFSET))(tween, transform);
		}

		static ::System::Void UnregisterTweenFromDistanceControl(::DG::Tweening::Tween* tween)
		{
			return ((::System::Void(*)(::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_UNREGISTERTWEENFROMDISTANCECONTROL_OFFSET))(tween);
		}

		static ::AniMeshTick::AniMeshTickManager* EnsureInstanceInternal(::System::Boolean createIfMissing)
		{
			return ((::AniMeshTick::AniMeshTickManager*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ENSUREINSTANCEINTERNAL_OFFSET))(createIfMissing);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SubscribeToComponentEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_SUBSCRIBETOCOMPONENTEVENTS_OFFSET))(this);
		}

		::System::Void UnsubscribeFromComponentEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_UNSUBSCRIBEFROMCOMPONENTEVENTS_OFFSET))(this);
		}

		::System::Void OnSplineManualModeEnabled(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ONSPLINEMANUALMODEENABLED_OFFSET))(this, spline);
		}

		::System::Void OnSplineManualModeDisabled(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ONSPLINEMANUALMODEDISABLED_OFFSET))(this, spline);
		}

		::System::Void OnControllerManualModeEnabled(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ONCONTROLLERMANUALMODEENABLED_OFFSET))(this, controller);
		}

		::System::Void OnControllerManualModeDisabled(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ONCONTROLLERMANUALMODEDISABLED_OFFSET))(this, controller);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void InitializeBuckets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INITIALIZEBUCKETS_OFFSET))(this);
		}

		::System::Void LoadSettingsIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_LOADSETTINGSIFNEEDED_OFFSET))(this);
		}

		::System::Void EnsureLodReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ENSURELODREFERENCE_OFFSET))(this);
		}

		::System::Void EnsureLodCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ENSURELODCAMERA_OFFSET))(this);
		}

		::System::Void ResetEditorTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_RESETEDITORTIME_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void TickSequential(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_TICKSEQUENTIAL_OFFSET))(this, deltaTime);
		}

		::System::Void ProcessSplines(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_PROCESSSPLINES_OFFSET))(this, deltaTime);
		}

		::System::Boolean TickSplineBucket(::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::CurvySpline*>* bucket, ::System::Single tickDelta, ::System::Int32& remainingBudget)
		{
			return ((::System::Boolean(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_TICKSPLINEBUCKET_OFFSET))(this, bucket, tickDelta, remainingBudget);
		}

		::System::Void ProcessControllers(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_PROCESSCONTROLLERS_OFFSET))(this, deltaTime);
		}

		::System::Boolean TickControllerBucket(::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::Controllers::CurvyController*>* bucket, ::System::Single tickDelta, ::System::Int32& remainingBudget)
		{
			return ((::System::Boolean(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::Controllers::CurvyController*>*, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_TICKCONTROLLERBUCKET_OFFSET))(this, bucket, tickDelta, remainingBudget);
		}

		::System::Void ProcessTweenDistanceControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_PROCESSTWEENDISTANCECONTROL_OFFSET))(this);
		}

		::System::Void ApplyPendingTweenAdds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_APPLYPENDINGTWEENADDS_OFFSET))(this);
		}

		::System::Void InternalRegisterSpline(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALREGISTERSPLINE_OFFSET))(this, spline);
		}

		::System::Void InternalUnregisterSpline(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALUNREGISTERSPLINE_OFFSET))(this, spline);
		}

		::System::Void InternalRegisterController(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALREGISTERCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void InternalUnregisterController(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALUNREGISTERCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void InternalRegisterTweenDistance(::DG::Tweening::Tween* tween, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Tween*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALREGISTERTWEENDISTANCE_OFFSET))(this, tween, transform);
		}

		::System::Void InternalUnregisterTweenDistance(::DG::Tweening::Tween* tween)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INTERNALUNREGISTERTWEENDISTANCE_OFFSET))(this, tween);
		}

		static ::System::Boolean IsSplineTickable(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ISSPLINETICKABLE_OFFSET))(spline);
		}

		static ::System::Boolean IsControllerTickable(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_ISCONTROLLERTICKABLE_OFFSET))(controller);
		}

		::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::CurvySpline*>* DetermineSplineBucket(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_DETERMINESPLINEBUCKET_OFFSET))(this, spline);
		}

		::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::Controllers::CurvyController*>* DetermineControllerBucket(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::AniMeshTick::AniMeshTickManager_TickBucket_1<::FluffyUnderware::Curvy::Controllers::CurvyController*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_DETERMINECONTROLLERBUCKET_OFFSET))(this, controller);
		}

		::AniMeshTick::AniMeshTickManager_LodLevel GetSplineLodLevel(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::AniMeshTick::AniMeshTickManager_LodLevel(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GETSPLINELODLEVEL_OFFSET))(this, spline);
		}

		::AniMeshTick::AniMeshTickManager_LodLevel GetControllerLodLevel(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::AniMeshTick::AniMeshTickManager_LodLevel(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GETCONTROLLERLODLEVEL_OFFSET))(this, controller);
		}

		::AniMeshTick::AniMeshTickManager_LodLevel EvaluateLodLevel(::UnityEngine::Vector3 worldPosition)
		{
			return ((::AniMeshTick::AniMeshTickManager_LodLevel(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_EVALUATELODLEVEL_OFFSET))(this, worldPosition);
		}

		::System::Single GetBucketInterval(::AniMeshTick::AniMeshTickManager_LodLevel level, ::AniMeshTick::AniMeshTickManager_TargetType targetType)
		{
			return ((::System::Single(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_LodLevel, ::AniMeshTick::AniMeshTickManager_TargetType))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GETBUCKETINTERVAL_OFFSET))(this, level, targetType);
		}

		::System::Single GetBaseInterval(::AniMeshTick::AniMeshTickManager_LodLevel level)
		{
			return ((::System::Single(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_LodLevel))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GETBASEINTERVAL_OFFSET))(this, level);
		}

		::System::Single GetEffectiveDistance(::AniMeshTick::AniMeshTickManager_LodLevel level)
		{
			return ((::System::Single(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_LodLevel))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GETEFFECTIVEDISTANCE_OFFSET))(this, level);
		}

		::System::Void UpdateScreenSpaceLodCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_UPDATESCREENSPACELODCACHE_OFFSET))(this);
		}

		::System::Single CalculateProjectionCoefficient()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_CALCULATEPROJECTIONCOEFFICIENT_OFFSET))(this);
		}

		::System::Single CalculateScreenSpaceInterval(::AniMeshTick::AniMeshTickManager_LodLevel level)
		{
			return ((::System::Single(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_LodLevel))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_CALCULATESCREENSPACEINTERVAL_OFFSET))(this, level);
		}

		::System::Single GetJumpThreshold(::AniMeshTick::AniMeshTickManager_LodLevel level)
		{
			return ((::System::Single(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_LodLevel))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GETJUMPTHRESHOLD_OFFSET))(this, level);
		}

		::System::Single GetRepresentativeDistance(::AniMeshTick::AniMeshTickManager_LodLevel level)
		{
			return ((::System::Single(*)(::PVOID, ::AniMeshTick::AniMeshTickManager_LodLevel))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_GETREPRESENTATIVEDISTANCE_OFFSET))(this, level);
		}

		::System::Void InvalidateScreenSpaceLodCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_INVALIDATESCREENSPACELODCACHE_OFFSET))(this);
		}

		::System::Void PruneTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_PRUNETARGETS_OFFSET))(this);
		}

		::System::Void FlushTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKMANAGER_FLUSHTARGETS_OFFSET))(this);
		}
	};
}
