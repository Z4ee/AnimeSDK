#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/SpawnConfig.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_TeleportData.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd { class SpawnRangeConfig; }
namespace NPCCrowd::AI { class FeaturePointPathRefList; }
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PopulationRuntime; }
namespace NPCCrowd::AI { class SpawnPoint; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System { class String; }

#define NPCCROWD_NPCSPAWNPOINTRUNTIME_CALCULATEDIRECTIONALOUTERVALID_OFFSET UNITYSDK_OFFSET(0x10714DD0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_CHECKPATHFINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x10715530)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DEBUGSPAWNNPC_OFFSET UNITYSDK_OFFSET(0x10716B90)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONALOUTERVALIDCHECK_OFFSET UNITYSDK_OFFSET(0x107145F0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONVALID_OFFSET UNITYSDK_OFFSET(0x10713A80)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_DISTANCECALLBACK_OFFSET UNITYSDK_OFFSET(0x10713700)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ENTERCD_OFFSET UNITYSDK_OFFSET(0x10715070)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0x10714160)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPATHID_OFFSET UNITYSDK_OFFSET(0x107140B0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x107140F0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GETROTATION_OFFSET UNITYSDK_OFFSET(0x107141E0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_BASEWEIGHT_OFFSET UNITYSDK_OFFSET(0x10713530)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_ISGLOBALPERCENTWEIGHT_OFFSET UNITYSDK_OFFSET(0x10713520)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x107134C0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_HASVALIDWEIGHT_OFFSET UNITYSDK_OFFSET(0x10714590)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_HEIGHTVALID_OFFSET UNITYSDK_OFFSET(0x107139F0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_INITVALIDRANGE_OFFSET UNITYSDK_OFFSET(0x10713C60)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ISINITPOINT_OFFSET UNITYSDK_OFFSET(0x10714060)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ISPATHRESULTALLNODESENABLED_OFFSET UNITYSDK_OFFSET(0x10715640)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10713FF0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0x10713BC0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_PREINITTERRAINTYPE_OFFSET UNITYSDK_OFFSET(0x10716F20)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_RANGEVALID_OFFSET UNITYSDK_OFFSET(0x10713980)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x107141A0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SETBLOCKED_OFFSET UNITYSDK_OFFSET(0x10714290)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SETCD_OFFSET UNITYSDK_OFFSET(0x10715100)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SETRUNTIMEWEIGHT_OFFSET UNITYSDK_OFFSET(0x10713540)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SHOULDENABLEDIRECTIONALOUTERVALIDCHECK_OFFSET UNITYSDK_OFFSET(0x10714C80)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SNAPTOLANESEGMENT_OFFSET UNITYSDK_OFFSET(0x10717120)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCHECK_OFFSET UNITYSDK_OFFSET(0x10714690)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCROWDNPC_OFFSET UNITYSDK_OFFSET(0x10715B70)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0x107137A0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x107156E0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_STARTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x10715E60)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_TELEPORTPATHFOLLOWPOINT_OFFSET UNITYSDK_OFFSET(0x107163D0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_TOTALRANGEVALID_OFFSET UNITYSDK_OFFSET(0x107138F0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_TRYGETAVAILABLEFIXEDROUTE_OFFSET UNITYSDK_OFFSET(0x10715160)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME_UPDATEVALID_OFFSET UNITYSDK_OFFSET(0x107142E0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x107135B0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x107135A0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpawnPointRuntime_TypeDefinitionIndex = 76891;

	class NPCSpawnPointRuntime : public ::System::Object
	{
	public:
		// static const ::System::Single DirectionalCheckInterval; // 0x0
		::NPCCrowd::AI::PopulationRuntime* populationRuntime; // 0x10
		::NPCCrowd::AI::SpawnPoint* Config; // 0x18
		::NPCCrowd::AI::FeaturePointPathRefList* pathList; // 0x20
		::NPCCrowd::SpawnRangeConfig* rangeConfig; // 0x28
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* distanceCallback; // 0x30
		::System::Single runtimeWeight; // 0x38
		::System::Int32 nativeIndex; // 0x3C
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData teleportData; // 0x40
		::System::Boolean blocked; // 0x60
		::System::Boolean valid; // 0x61
		::System::Single directionalCheckTimer; // 0x64
		::System::Int32 pathID; // 0x68
		::System::Boolean innerValid; // 0x6C
		::System::Boolean directionalCheckCached; // 0x6D
		::System::Boolean populationInited; // 0x6E
		::System::Boolean outerValid; // 0x6F
		::System::Int32 distanceHandler; // 0x70
		::System::Single validHeightDiff; // 0x74
		::NPCCrowd::AI::SpawnConfig SpawnConfig; // 0x78
		::System::Single spawnCD; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPCCrowd::AI::SpawnPoint* config, ::NPCCrowd::AI::SpawnPointGroup* groupConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPoint*, ::NPCCrowd::AI::SpawnPointGroup*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME__CTOR_1_OFFSET))(this, config, groupConfig);
		}

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_WEIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsGlobalPercentWeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_ISGLOBALPERCENTWEIGHT_OFFSET))(this);
		}

		::System::Single get_BaseWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GET_BASEWEIGHT_OFFSET))(this);
		}

		::System::Void SetRuntimeWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SETRUNTIMEWEIGHT_OFFSET))(this, weight);
		}

		::System::Void DistanceCallback(::NPCCrowd::Lod::ConditionData conditionData, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DISTANCECALLBACK_OFFSET))(this, conditionData, greater, p1, p2);
		}

		::System::Boolean SpawnInfoValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNINFOVALID_OFFSET))(this);
		}

		::System::Boolean TotalRangeValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_TOTALRANGEVALID_OFFSET))(this);
		}

		::System::Boolean RangeValid(::System::Boolean updateInit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_RANGEVALID_OFFSET))(this, updateInit);
		}

		::System::Boolean HeightValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_HEIGHTVALID_OFFSET))(this);
		}

		::System::Boolean DirectionValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONVALID_OFFSET))(this);
		}

		::System::Boolean PathCountValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_PATHCOUNTVALID_OFFSET))(this);
		}

		::System::Void InitValidRange(::NPCCrowd::SpawnRangeConfig* rangeConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::SpawnRangeConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_INITVALIDRANGE_OFFSET))(this, rangeConfig);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean IsInitPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ISINITPOINT_OFFSET))(this);
		}

		::System::Int32 GetPathID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPATHID_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETPOSITION_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETMOVEMENTMAG_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_REFRESHDATA_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_GETROTATION_OFFSET))(this);
		}

		::System::Void SetBlocked(::System::Boolean blocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SETBLOCKED_OFFSET))(this, blocked);
		}

		::System::Boolean UpdateValid(::System::Single deltaTime, ::System::Boolean updateInit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_UPDATEVALID_OFFSET))(this, deltaTime, updateInit);
		}

		::System::Boolean HasValidWeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_HASVALIDWEIGHT_OFFSET))(this);
		}

		::System::Boolean DirectionalOuterValidCheck(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DIRECTIONALOUTERVALIDCHECK_OFFSET))(this, deltaTime);
		}

		::System::Boolean ShouldEnableDirectionalOuterValidCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SHOULDENABLEDIRECTIONALOUTERVALIDCHECK_OFFSET))(this);
		}

		::System::Boolean CalculateDirectionalOuterValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_CALCULATEDIRECTIONALOUTERVALID_OFFSET))(this);
		}

		::System::Boolean SpawnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCHECK_OFFSET))(this);
		}

		::System::Void EnterCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ENTERCD_OFFSET))(this);
		}

		::System::Void SetCD(::System::Single cd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SETCD_OFFSET))(this, cd);
		}

		::System::Boolean TryGetAvailableFixedRoute(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*& selectedPathResult)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_TRYGETAVAILABLEFIXEDROUTE_OFFSET))(this, selectedPathResult);
		}

		static ::System::Boolean IsPathResultAllNodesEnabled(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_ISPATHRESULTALLNODESENABLED_OFFSET))(pathResult);
		}

		::System::Boolean SpawnNPC(::Class_3_F2DAD7F45F518868*& npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNNPC_OFFSET))(this, npcComp);
		}

		::System::Boolean DebugSpawnNPC(::UnityEngine::Vector3 position, ::System::Int32 overrideAvatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_DEBUGSPAWNNPC_OFFSET))(this, position, overrideAvatarID);
		}

		static ::Class_3_F2DAD7F45F518868* SpawnCrowdNpc(::System::Int32 tag, ::System::Int32 populationID, ::Foundation::Unreal::FGameplayTagQuery* blackTagQuery, ::System::Int32 overrideAvatarParamID)
		{
			return ((::Class_3_F2DAD7F45F518868*(*)(::System::Int32, ::System::Int32, ::Foundation::Unreal::FGameplayTagQuery*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SPAWNCROWDNPC_OFFSET))(tag, populationID, blackTagQuery, overrideAvatarParamID);
		}

		::System::Void TeleportPathFollowPoint(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData teleportData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_TELEPORTPATHFOLLOWPOINT_OFFSET))(this, npcComp, teleportData);
		}

		static ::System::Void PreInitTerrainType(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Int32 pathID)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_PREINITTERRAINTYPE_OFFSET))(pathFollow, pathID);
		}

		static ::UnityEngine::Vector3 SnapToLaneSegment(::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData teleportData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_SNAPTOLANESEGMENT_OFFSET))(teleportData, pathFollow);
		}

		static ::System::Void StartPathFollow(::Class_3_F2DAD7F45F518868* npcComp, ::System::String* movementStyle, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Int32 pathID, ::NPCCrowd::AI::PopulationRuntime* populationRuntime)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::String*, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Int32, ::System::Single, ::System::Int32, ::NPCCrowd::AI::PopulationRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_STARTPATHFOLLOW_OFFSET))(npcComp, movementStyle, pathResult, laneIndex, laneInnerOffset, pathID, populationRuntime);
		}

		static ::System::Boolean CheckPathFindingResult(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIME_CHECKPATHFINDINGRESULT_OFFSET))(pathResult, pathConfig);
		}
	};
}
