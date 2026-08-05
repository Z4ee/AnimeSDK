#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementActionHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementStyleSpeedParameters.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityBehavioursDefine.h"
#include "unitysdk/NPCCrowd/NPCPhysicsManager_PhysicsHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::Ability { class NPCAbilityBridgeData; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_ABILITY_NPCABILITY_CLEAR_OFFSET UNITYSDK_OFFSET(0x114E0DA0)
#define NPCCROWD_ABILITY_NPCABILITY_GETCURRENTACTIONID_OFFSET UNITYSDK_OFFSET(0x114E12B0)
#define NPCCROWD_ABILITY_NPCABILITY_GETCURRENTACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x114E13F0)
#define NPCCROWD_ABILITY_NPCABILITY_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0x114E1D60)
#define NPCCROWD_ABILITY_NPCABILITY_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x114E1E00)
#define NPCCROWD_ABILITY_NPCABILITY_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x114E0E40)
#define NPCCROWD_ABILITY_NPCABILITY_GET_NEEDREFRESHDATA_OFFSET UNITYSDK_OFFSET(0x114E1E70)
#define NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWFINISHED_OFFSET UNITYSDK_OFFSET(0x114D77C0)
#define NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWHUMAN_1_OFFSET UNITYSDK_OFFSET(0x114E1860)
#define NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWHUMAN_2_OFFSET UNITYSDK_OFFSET(0x114E1940)
#define NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWHUMAN_OFFSET UNITYSDK_OFFSET(0x114E1810)
#define NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWSTARTED_OFFSET UNITYSDK_OFFSET(0x114E1350)
#define NPCCROWD_ABILITY_NPCABILITY_ONABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x114E1210)
#define NPCCROWD_ABILITY_NPCABILITY_PATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x114E0ED0)
#define NPCCROWD_ABILITY_NPCABILITY_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x114E1E80)
#define NPCCROWD_ABILITY_NPCABILITY_SETBORNTRANSFORM_OFFSET UNITYSDK_OFFSET(0x114E1A40)
#define NPCCROWD_ABILITY_NPCABILITY_SMOOTHROTATIONTO_OFFSET UNITYSDK_OFFSET(0x114E1600)
#define NPCCROWD_ABILITY_NPCABILITY_STARTSTANDTURN_OFFSET UNITYSDK_OFFSET(0x114E1060)
#define NPCCROWD_ABILITY_NPCABILITY_STARTSTATETREE_1_OFFSET UNITYSDK_OFFSET(0x1063E6D0)
#define NPCCROWD_ABILITY_NPCABILITY_STARTSTATETREE_OFFSET UNITYSDK_OFFSET(0x114E2030)
#define NPCCROWD_ABILITY_NPCABILITY_STOPCURRENTMOVEACTION_OFFSET UNITYSDK_OFFSET(0x114E1540)
#define NPCCROWD_ABILITY_NPCABILITY_STOPMOVEACTION_OFFSET UNITYSDK_OFFSET(0x114E1490)
#define NPCCROWD_ABILITY_NPCABILITY_STOPSTATETREE_OFFSET UNITYSDK_OFFSET(0x1063E8F0)
#define NPCCROWD_ABILITY_NPCABILITY_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0x114E1710)
#define NPCCROWD_ABILITY_NPCABILITY_WAITFORSTANDTURNFINISH_OFFSET UNITYSDK_OFFSET(0x114E1120)
#define NPCCROWD_ABILITY_NPCABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1063EA20)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbility_TypeDefinitionIndex = 72684;

	class NPCAbility : public ::System::Object
	{
	public:
		// static const ::System::Int32 INVALID_ABILITY_IDX = 0xFFFFFFFF; // 0x0
		::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData; // 0x10
		::NPCCrowd::Ability::NPCAbilityBridgeData* bridgeData; // 0x18
		::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters movementParams; // 0x20
		::UnityEngine::Vector3 lastPosCache; // 0xB8
		::NPCCrowd::NPCPhysicsManager_PhysicsHandle physicsHandle; // 0xC4
		::System::Boolean usePathFollow; // 0xC8
		::UnityEngine::Vector3 posCache; // 0xCC
		::NPCCrowd::Ability::NPCAbilityBehavioursDefine effectiveBehaviours; // 0xD8
		::System::Int32 abilityIdx; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_CLEAR_OFFSET))(this);
		}

		::NPCCrowd::Ability::FTransformFragment GetTransform()
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_GETTRANSFORM_OFFSET))(this);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle PathFollow(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::String* moveStyle, ::System::Boolean teleportToFirstPoint, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Single endFadeOutTime, ::System::Int32 pathID)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_PATHFOLLOW_OFFSET))(this, pathResult, moveStyle, teleportToFirstPoint, laneIndex, laneInnerOffset, endFadeOutTime, pathID);
		}

		::System::Void StartStandTurn(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_STARTSTANDTURN_OFFSET))(this, angle);
		}

		::System::Void WaitForStandTurnFinish(::System::UInt32 entityID, ::System::Single angle, ::System::Action_1<::System::Boolean>* callbackWithResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_WAITFORSTANDTURNFINISH_OFFSET))(this, entityID, angle, callbackWithResult);
		}

		::System::Void OnAbilityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_ONABILITYREMOVED_OFFSET))(this);
		}

		::System::UInt16 GetCurrentActionID()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_GETCURRENTACTIONID_OFFSET))(this);
		}

		::System::Boolean IsPathFollowStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWSTARTED_OFFSET))(this);
		}

		::System::Boolean IsPathFollowFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWFINISHED_OFFSET))(this);
		}

		::NPCCrowd::Ability::ENPCAbilityMovementAction GetCurrentActionType()
		{
			return ((::NPCCrowd::Ability::ENPCAbilityMovementAction(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_GETCURRENTACTIONTYPE_OFFSET))(this);
		}

		::System::Void StopMoveAction(::NPCCrowd::Ability::FNPCAbilityMovementActionHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAbilityMovementActionHandle&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_STOPMOVEACTION_OFFSET))(this, handle);
		}

		::System::Void StopCurrentMoveAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_STOPCURRENTMOVEACTION_OFFSET))(this);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SmoothRotationTo(::UnityEngine::Vector3 rotTarget)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_SMOOTHROTATIONTO_OFFSET))(this, rotTarget);
		}

		::System::Void TeleportTo(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_TELEPORTTO_OFFSET))(this, pos, rot);
		}

		::System::Boolean IsPathFollowHuman()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWHUMAN_OFFSET))(this);
		}

		static ::System::Boolean IsPathFollowHuman_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* data, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWHUMAN_1_OFFSET))(data, idx);
		}

		static ::System::Boolean IsPathFollowHuman_2(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_ISPATHFOLLOWHUMAN_2_OFFSET))(entityID);
		}

		::System::Void SetBornTransform(::UnityEngine::Vector3 bornPosition, ::UnityEngine::Quaternion bornRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_SETBORNTRANSFORM_OFFSET))(this, bornPosition, bornRot);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_GETPOSITION_OFFSET))(this);
		}

		::System::Boolean get_NeedRefreshData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_GET_NEEDREFRESHDATA_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_REFRESHDATA_OFFSET))(this);
		}

		::System::Void StartStateTree(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_STARTSTATETREE_OFFSET))(this, path);
		}

		static ::System::Void StartStateTree_1(::System::String* path, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 abilityIdx)
		{
			return ((::System::Void(*)(::System::String*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_STARTSTATETREE_1_OFFSET))(path, runtimeData, abilityIdx);
		}

		::System::Void StopStateTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITY_STOPSTATETREE_OFFSET))(this);
		}
	};
}
