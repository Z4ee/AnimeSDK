#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Ability { class NPCMoveAvoidanceParam; }

#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_COLLECTCLOSESTOBSTACLE_OFFSET UNITYSDK_OFFSET(0x6B4AE0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_COMPUTECLOSESTPOINTOFAPPROACH_OFFSET UNITYSDK_OFFSET(0x6B4BB0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6B4B10)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_FINDCLOSESTOBSTACLES_OFFSET UNITYSDK_OFFSET(0x6B4A10)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETAVOIDANCEFORCE_OFFSET UNITYSDK_OFFSET(0x6B4B50)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETLOCATIONXZ_OFFSET UNITYSDK_OFFSET(0x6B4A80)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0x6B4AA0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETSEPARATIONFORCE_OFFSET UNITYSDK_OFFSET(0x6B4B20)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETVELOCITYXZ_OFFSET UNITYSDK_OFFSET(0x6B4AC0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4A00)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveAvoidanceProcessors_ExecuteJob_TypeDefinitionIndex = 41978;

	struct alignas(8) NPCAbilityMoveAvoidanceProcessors_ExecuteJob
	{
		// static const ::System::Int32 MaxObstacleResults = 0x18; // 0x0
		// static const ::System::Int32 MaxObstacles = 0x6; // 0x0
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _transformFragments; // 0x60
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x70
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> _moveTargetFragments; // 0x80
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _datas; // 0x90
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> _movementFragments; // 0xB0
		::System::Single _obstacleDetectionDistance; // 0xC0
		::System::Single _obstacleSeparationDistance; // 0xC4
		::System::Single _obstacleRadius; // 0xC8
		::System::Single _standingObstacleAvoidanceScale; // 0xCC
		::System::Single _separationRadius; // 0xD0
		::System::Single _obstacleSeparationStiffness; // 0xD4
		::System::Single _obstaclePredictiveAvoidanceStiffness; // 0xD8
		::System::Single _predictiveAvoidanceTime; // 0xDC
		::System::Single _predictiveAvoidanceRadius; // 0xE0
		::System::Single _obstaclePredictiveAvoidanceDistance; // 0xE4

		::System::Void _ctor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::NPCCrowd::Ability::NPCMoveAvoidanceParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCMoveAvoidanceParam*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, param);
		}

		/*
		::System::Int32 FindClosestObstacles(::UnityEngine::Vector3 center, ::System::Single radius, ::System::Span_1<::NPCCrowd::Ability::NavigationObstacleItem> result, ::System::Span_1<::System::Double> keyBuffer)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Span_1<::NPCCrowd::Ability::NavigationObstacleItem>, ::System::Span_1<::System::Double>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_FINDCLOSESTOBSTACLES_OFFSET))(this, center, radius, result, keyBuffer);
		}
		*/

		/*
		::UnityEngine::Vector3 GetLocationXZ(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETLOCATIONXZ_OFFSET))(this, index);
		}
		*/

		::NPCCrowd::Ability::NPCEntityNativeData GetNativeData(::System::UInt32 entityId)
		{
			return ((::NPCCrowd::Ability::NPCEntityNativeData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETNATIVEDATA_OFFSET))(this, entityId);
		}

		/*
		::UnityEngine::Vector3 GetVelocityXZ(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETVELOCITYXZ_OFFSET))(this, index);
		}
		*/

		/*
		::System::Int32 CollectClosestObstacle(::System::Span_1<::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_Obstacle> result, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1<::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_Obstacle>, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_COLLECTCLOSESTOBSTACLE_OFFSET))(this, result, index);
		}
		*/

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}

		/*
		::UnityEngine::Vector3 GetSeparationForce(::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_Obstacle& obstacle, ::UnityEngine::Vector3 relativeLocation)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_Obstacle&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETSEPARATIONFORCE_OFFSET))(this, obstacle, relativeLocation);
		}
		*/

		/*
		::UnityEngine::Vector3 GetAvoidanceForce(::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_Obstacle& obstacle, ::UnityEngine::Vector3 relativeLocation, ::UnityEngine::Vector3 relativeVelocity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors_Obstacle&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_GETAVOIDANCEFORCE_OFFSET))(this, obstacle, relativeLocation, relativeVelocity);
		}
		*/

		/*
		::System::Single ComputeClosestPointOfApproach(::UnityEngine::Vector3& relativeLocation, ::UnityEngine::Vector3& relativeVelocity, ::System::Single totalRadius, ::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEAVOIDANCEPROCESSORS_EXECUTEJOB_COMPUTECLOSESTPOINTOFAPPROACH_OFFSET))(this, relativeLocation, relativeVelocity, totalRadius, time);
		}
		*/
	};
}
