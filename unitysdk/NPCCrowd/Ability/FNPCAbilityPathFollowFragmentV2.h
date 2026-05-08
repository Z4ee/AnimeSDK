#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2__PathFollowNodesDirection_e__FixedBuffer.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2__PathFollowNodes_e__FixedBuffer.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ADDNODE_OFFSET UNITYSDK_OFFSET(0x6B2940)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CHECKPATHFOLLOWQUEUE_OFFSET UNITYSDK_OFFSET(0xFAC7870)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CLEARNODE_OFFSET UNITYSDK_OFFSET(0x6B2BA0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6B2D70)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x6B2C70)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CREATE_OFFSET UNITYSDK_OFFSET(0xFAC7980)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x6B2C50)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6B2E60)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GETNODE_OFFSET UNITYSDK_OFFSET(0x6B2880)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6B2BF0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6B2EA0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ISFORWARD_OFFSET UNITYSDK_OFFSET(0x6B28E0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x6B2DC0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x6B2CF0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_RESET_OFFSET UNITYSDK_OFFSET(0x6B2E10)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETPATHFOLLOWNODEINDEX_OFFSET UNITYSDK_OFFSET(0x6B2870)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGDIR_OFFSET UNITYSDK_OFFSET(0x6B2A50)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGNODE_OFFSET UNITYSDK_OFFSET(0x6B29C0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6B2F00)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WALKBACK_OFFSET UNITYSDK_OFFSET(0x6B2B20)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WANDERINGBACK_OFFSET UNITYSDK_OFFSET(0x6B2AB0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAC7D80)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex = 39383;

	struct alignas(4) FNPCAbilityPathFollowFragmentV2
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x48BD0);
		}
		// static const ::System::Byte MaxNodeNum = 0x40; // 0x0
		// static const ::System::UInt32 PersistentTypeHash = 0x813125DC; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::System::Boolean enable; // 0x11
		::System::Boolean EnablePathGraph; // 0x12
		::System::Boolean IsInteracting; // 0x13
		::System::Boolean IsWandering; // 0x14
		::UnityEngine::Vector3 InteractTargetPos; // 0x18
		::UnityEngine::Quaternion InteractTargetRot; // 0x24
		::UnityEngine::Vector3 RefPos; // 0x34
		::System::Single RefPosRatio; // 0x40
		::UnityEngine::Vector3 Aim; // 0x44
		::UnityEngine::Vector3 StartPos; // 0x50
		::UnityEngine::Vector3 Forward; // 0x5C
		::UnityEngine::Vector3 StartUpAxis; // 0x68
		::UnityEngine::Vector3 AimUpAxis; // 0x74
		::System::Single InitDesiredSpeed; // 0x80
		::System::Single UpStairDesiredSpeed; // 0x84
		::System::Single DownStairDesiredSpeed; // 0x88
		::System::Single StairSpeedBlendingDuration; // 0x8C
		::System::Single StairSpeedStart; // 0x90
		::System::Single StairSpeedTarget; // 0x94
		::System::Single StairPrepareDistance; // 0x98
		::System::Single SlopeSpeedScale; // 0x9C
		::System::Single DesiredSpeed; // 0xA0
		::System::Single MaxDistance; // 0xA4
		::System::Single ProgressDistance; // 0xA8
		::System::Boolean OnSplinePath; // 0xAC
		::System::Int32 StairType; // 0xB0
		::System::Single StairSlopeCosine; // 0xB4
		::System::Int32 EnterStairType; // 0xB8
		::System::Boolean OnStair; // 0xBC
		::System::Boolean OnStairTransition; // 0xBD
		::System::Single PrepareStairBlendDuration; // 0xC0
		::System::Int32 SlopeType; // 0xC4
		::System::Single EndFadeOutTime; // 0xC8
		::System::Boolean StartFadeOut; // 0xCC
		::System::Boolean IsPassedAim; // 0xCD
		::System::Boolean IsPathEnd; // 0xCE
		::System::Boolean IsMoving; // 0xCF
		::System::Boolean IgnoreNodeState; // 0xD0
		::System::Boolean IsStarted; // 0xD1
		::System::Int32 LaneIndex; // 0xD4
		::System::Int32 NextLaneIndex; // 0xD8
		::System::Single LaneInnerOffset; // 0xDC
		::System::Byte PathFollowNodeCount; // 0xE0
		::System::Int16 SplineNodeControlPointIndex; // 0xE2
		::System::Int16 SplineNodeExitControlPointIndex; // 0xE4
		::System::Int32 ExitRefPointID; // 0xE8
		::System::Int32 LastPathFollowNodeID; // 0xEC
		::System::Byte PathFollowNodeIndex; // 0xF0
		::System::Boolean NodeIndexChanged; // 0xF1
		::System::Boolean Teleported; // 0xF2
		::System::Boolean EnableCubic; // 0xF3
		::System::Single StopDistance; // 0xF4
		::System::Single StartDistance; // 0xF8
		::System::Int32 PathID; // 0xFC
		::System::UInt32 PrevEntity; // 0x100
		::System::Boolean CurNodeHasPrev; // 0x104
		::UnityEngine::Vector3 K3; // 0x108
		::UnityEngine::Vector3 K2; // 0x114
		::UnityEngine::Vector3 K1; // 0x120
		::UnityEngine::Vector3 K0; // 0x12C
		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2__PathFollowNodes_e__FixedBuffer PathFollowNodes; // 0x138
		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2__PathFollowNodesDirection_e__FixedBuffer PathFollowNodesDirection; // 0x238

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET))();
		}

		::System::Void SetPathFollowNodeIndex(::System::Byte index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETPATHFOLLOWNODEINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetNode(::System::Int32 idx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GETNODE_OFFSET))(this, idx);
		}

		::System::Boolean IsForward(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ISFORWARD_OFFSET))(this, idx);
		}

		::System::Void AddNode(::System::Int32 nodeID, ::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ADDNODE_OFFSET))(this, nodeID, forward);
		}

		::System::Void SetWanderingNode(::System::Int32 nodeID, ::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGNODE_OFFSET))(this, nodeID, forward);
		}

		::System::Void SetWanderingDir(::System::Boolean forward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGDIR_OFFSET))(this, forward);
		}

		::System::Void WanderingBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WANDERINGBACK_OFFSET))(this);
		}

		::System::Void WalkBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WALKBACK_OFFSET))(this);
		}

		::System::Void ClearNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CLEARNODE_OFFSET))(this);
		}

		static ::System::Boolean CheckPathFollowQueue(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 p1, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 p2)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CHECKPATHFOLLOWQUEUE_OFFSET))(p1, p2);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 Create()
		{
			return ((::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCAbilityPathFollowFragmentV2__CopyAssign(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
