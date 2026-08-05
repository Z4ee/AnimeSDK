#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineBakeCacheManager_SplineFollowCommand.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineBakeRange.h"
#include "unitysdk/NPCCrowd/Ability/CrowdSplineSnapshot.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace NPCCrowd::Ability { class CrowdSplineBakeEntry; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_DISPOSENATIVESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x12602750)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x125FFE50)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x125FFA90)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_ACTIVESPLINEFOLLOWCOUNT_OFFSET UNITYSDK_OFFSET(0x125FFA10)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_DISTANCES_OFFSET UNITYSDK_OFFSET(0x125FF9E0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_HASACTIVESPLINEFOLLOW_OFFSET UNITYSDK_OFFSET(0x125FFA00)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_HASCACHE_OFFSET UNITYSDK_OFFSET(0x125FFA20)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x125FF9D0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x125FFB80)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x125FF9B0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_RANGES_OFFSET UNITYSDK_OFFSET(0x125FF9F0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x125FF9C0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_HANDLESTARTSPLINEFOLLOWCOMMAND_OFFSET UNITYSDK_OFFSET(0x12600AC0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_HANDLESTOPSPLINEFOLLOWCOMMAND_OFFSET UNITYSDK_OFFSET(0x12600ED0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_HASPENDINGSPLINEFOLLOWSTART_OFFSET UNITYSDK_OFFSET(0x126004D0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_NAVMESHTOSPLINEFOLLOWASYNC_OFFSET UNITYSDK_OFFSET(0x126000C0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_ONABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x12600580)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_PROCESSPENDINGCOMMANDS_OFFSET UNITYSDK_OFFSET(0x126007A0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_REBUILDSNAPSHOTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x126011D0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RECOUNTACTIVESPLINEFOLLOWCOUNT_OFFSET UNITYSDK_OFFSET(0x126018B0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RELEASEENTRYARRAYS_OFFSET UNITYSDK_OFFSET(0x12602480)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RELEASESINGLETON_OFFSET UNITYSDK_OFFSET(0x125FFDF0)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RELEASE_OFFSET UNITYSDK_OFFSET(0x12600640)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RESOLVESPLINEFOLLOWSPEED_OFFSET UNITYSDK_OFFSET(0x12602D60)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RESOLVESTARTPROGRESS_OFFSET UNITYSDK_OFFSET(0x12602C50)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_STARTSPLINEFOLLOW_OFFSET UNITYSDK_OFFSET(0x12600180)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_STOPSPLINEFOLLOW_OFFSET UNITYSDK_OFFSET(0x12600370)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_TRYACQUIRE_OFFSET UNITYSDK_OFFSET(0x12601A00)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_TRYBAKESPLINEDATA_OFFSET UNITYSDK_OFFSET(0x12601D60)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_TRYGETNEARESTDISTANCEONSPLINE_OFFSET UNITYSDK_OFFSET(0x12602850)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x125FFC20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineBakeCacheManager_TypeDefinitionIndex = 89335;

	class CrowdSplineBakeCacheManager : public ::System::Object
	{
	public:
		static ::NPCCrowd::Ability::CrowdSplineBakeCacheManager** StaticGet__instance()
		{
			return (::NPCCrowd::Ability::CrowdSplineBakeCacheManager**)Il2CppClass::FromTypeDefinitionIndex(CrowdSplineBakeCacheManager_TypeDefinitionIndex)->GetStaticField(0x43150);
		}
		// static const ::System::Int32 MaxSplineSampleCount = 0xC350; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::CrowdSplineBakeCacheManager_SplineFollowCommand>* _coalescedCommands; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::CrowdSplineBakeEntry*>* _entriesByCacheId; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::CrowdSplineBakeCacheManager_SplineFollowCommand>* _pendingSplineFollowCommands; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _cacheIdBySplineInstanceId; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _pendingNavmeshSplineFollows; // 0x30
		::System::Int32 _nextCacheId; // 0x38
		::System::Int32 _activeSplineFollowCount; // 0x3C
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _tangents; // 0x40
		::Unity::Collections::NativeArray_1<::System::Single> _distances; // 0x50
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _positions; // 0x60
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> _normals; // 0x70
		::Unity::Collections::NativeHashMap_2<::System::Int32, ::NPCCrowd::Ability::CrowdSplineBakeRange> _ranges; // 0x80
		::System::Boolean _snapshotDirty; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__CTOR_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_Positions()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_POSITIONS_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_Tangents()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_TANGENTS_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_Normals()
		{
			return ((::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_NORMALS_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::System::Single> get_Distances()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_DISTANCES_OFFSET))(this);
		}

		::Unity::Collections::NativeHashMap_2<::System::Int32, ::NPCCrowd::Ability::CrowdSplineBakeRange> get_Ranges()
		{
			return ((::Unity::Collections::NativeHashMap_2<::System::Int32, ::NPCCrowd::Ability::CrowdSplineBakeRange>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_RANGES_OFFSET))(this);
		}

		::System::Boolean get_HasActiveSplineFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_HASACTIVESPLINEFOLLOW_OFFSET))(this);
		}

		::System::Int32 get_ActiveSplineFollowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_ACTIVESPLINEFOLLOWCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_HASCACHE_OFFSET))(this);
		}

		::NPCCrowd::Ability::CrowdSplineSnapshot GetSnapshot()
		{
			return ((::NPCCrowd::Ability::CrowdSplineSnapshot(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GETSNAPSHOT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::CrowdSplineBakeCacheManager* Get()
		{
			return ((::NPCCrowd::Ability::CrowdSplineBakeCacheManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_GET_OFFSET))();
		}

		static ::System::Void ReleaseSingleton()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RELEASESINGLETON_OFFSET))();
		}

		::Cysharp::Threading::Tasks::UniTaskVoid NavmeshToSplineFollowAsync(::System::UInt32 entityId, ::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single stopRadius, ::System::Boolean snapToGround)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::UInt32, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_NAVMESHTOSPLINEFOLLOWASYNC_OFFSET))(this, entityId, spline, stopRadius, snapToGround);
		}

		::System::Boolean StartSplineFollow(::System::UInt32 entityId, ::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single stopRadius, ::System::Boolean startFromNearest, ::System::Boolean snapToGround)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_STARTSPLINEFOLLOW_OFFSET))(this, entityId, spline, stopRadius, startFromNearest, snapToGround);
		}

		::System::Boolean StopSplineFollow(::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_STOPSPLINEFOLLOW_OFFSET))(this, entityId);
		}

		::System::Boolean HasPendingSplineFollowStart(::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_HASPENDINGSPLINEFOLLOWSTART_OFFSET))(this, entityId);
		}

		::System::Void OnAbilityRemoved(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_ONABILITYREMOVED_OFFSET))(this, runtimeData, idx);
		}

		::System::Void ProcessPendingCommands(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>* abilities, ::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allRuntimeDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_PROCESSPENDINGCOMMANDS_OFFSET))(this, abilities, allRuntimeDatas);
		}

		::System::Boolean TryAcquire(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Int32& cacheId)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_TRYACQUIRE_OFFSET))(this, spline, cacheId);
		}

		::System::Void Release(::System::Int32 cacheId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RELEASE_OFFSET))(this, cacheId);
		}

		::System::Void RebuildSnapshotIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_REBUILDSNAPSHOTIFNEEDED_OFFSET))(this);
		}

		::System::Boolean TryGetNearestDistanceOnSpline(::System::Int32 cacheId, ::UnityEngine::Vector3 worldPosition, ::System::Single& nearestDistance, ::System::Int32& nearestSampleIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_TRYGETNEARESTDISTANCEONSPLINE_OFFSET))(this, cacheId, worldPosition, nearestDistance, nearestSampleIndex);
		}

		::System::Void HandleStartSplineFollowCommand(::NPCCrowd::Ability::CrowdSplineBakeCacheManager_SplineFollowCommand& command, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>* abilities)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CrowdSplineBakeCacheManager_SplineFollowCommand&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_HANDLESTARTSPLINEFOLLOWCOMMAND_OFFSET))(this, command, abilities);
		}

		::System::Void HandleStopSplineFollowCommand(::System::UInt32 entityId, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>* abilities)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_HANDLESTOPSPLINEFOLLOWCOMMAND_OFFSET))(this, entityId, abilities);
		}

		::System::Void RecountActiveSplineFollowCount(::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allRuntimeDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RECOUNTACTIVESPLINEFOLLOWCOUNT_OFFSET))(this, allRuntimeDatas);
		}

		static ::System::Single ResolveSplineFollowSpeed(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::NPCCrowd::Ability::NPCAbility* ability, ::System::Int32 idx)
		{
			return ((::System::Single(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbility*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RESOLVESPLINEFOLLOWSPEED_OFFSET))(runtimeData, ability, idx);
		}

		::System::Void ResolveStartProgress(::NPCCrowd::Ability::CrowdSplineBakeCacheManager_SplineFollowCommand& command, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Int32 cacheId, ::System::Int32& startSampleIndex, ::System::Single& startDistance)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::CrowdSplineBakeCacheManager_SplineFollowCommand&, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RESOLVESTARTPROGRESS_OFFSET))(this, command, runtimeData, idx, cacheId, startSampleIndex, startDistance);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean TryBakeSplineData(::FluffyUnderware::Curvy::CurvySpline* spline, ::NPCCrowd::Ability::CrowdSplineBakeEntry*& entry)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline*, ::NPCCrowd::Ability::CrowdSplineBakeEntry*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_TRYBAKESPLINEDATA_OFFSET))(spline, entry);
		}

		static ::System::Void ReleaseEntryArrays(::NPCCrowd::Ability::CrowdSplineBakeEntry* entry)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::CrowdSplineBakeEntry*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_RELEASEENTRYARRAYS_OFFSET))(entry);
		}

		::System::Void DisposeNativeSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER_DISPOSENATIVESNAPSHOT_OFFSET))(this);
		}
	};
}
