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

#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ADDNODE_OFFSET UNITYSDK_OFFSET(0x6C6580)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CHECKPATHFOLLOWQUEUE_OFFSET UNITYSDK_OFFSET(0x106F5EB0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CLEARNODE_OFFSET UNITYSDK_OFFSET(0x6C67E0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6C69B0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x6C68B0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_CREATE_OFFSET UNITYSDK_OFFSET(0x106F5FC0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x6C6890)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6C6AA0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GETNODE_OFFSET UNITYSDK_OFFSET(0x6C64C0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6C6830)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6C6AE0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_ISFORWARD_OFFSET UNITYSDK_OFFSET(0x6C6520)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x6C6A00)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x6C6930)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_RESET_OFFSET UNITYSDK_OFFSET(0x6C6A50)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETPATHFOLLOWNODEINDEX_OFFSET UNITYSDK_OFFSET(0x6C64B0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGDIR_OFFSET UNITYSDK_OFFSET(0x6C6690)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_SETWANDERINGNODE_OFFSET UNITYSDK_OFFSET(0x6C6600)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6C6B40)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WALKBACK_OFFSET UNITYSDK_OFFSET(0x6C6760)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2_WANDERINGBACK_OFFSET UNITYSDK_OFFSET(0x6C66F0)
#define NPCCROWD_ABILITY_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET UNITYSDK_OFFSET(0x106F63C0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex = 78713;

	struct alignas(4) FNPCAbilityPathFollowFragmentV2
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x4C230);
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
		::UnityEngine::Vector3 NextForward; // 0x68
		::UnityEngine::Vector3 StartUpAxis; // 0x74
		::UnityEngine::Vector3 AimUpAxis; // 0x80
		::System::Single InitDesiredSpeed; // 0x8C
		::System::Single DefaultDesiredSpeed; // 0x90
		::System::Single PathSpeedBlendStart; // 0x94
		::System::Single PathSpeedBlendTarget; // 0x98
		::System::Boolean PathSpeedBlending; // 0x9C
		::System::Single UpStairDesiredSpeed; // 0xA0
		::System::Single DownStairDesiredSpeed; // 0xA4
		::System::Single StairSpeedBlendingDuration; // 0xA8
		::System::Single StairSpeedStart; // 0xAC
		::System::Single StairSpeedTarget; // 0xB0
		::System::Single StairPrepareDistance; // 0xB4
		::System::Single SlopeSpeedScale; // 0xB8
		::System::Single DesiredSpeed; // 0xBC
		::System::Single MaxDistance; // 0xC0
		::System::Single ProgressDistance; // 0xC4
		::System::Single ExcludeDistance; // 0xC8
		::System::Boolean OnSplinePath; // 0xCC
		::System::Int32 StairType; // 0xD0
		::System::Single StairSlopeCosine; // 0xD4
		::System::Int32 EnterStairType; // 0xD8
		::System::Boolean OnStair; // 0xDC
		::System::Boolean OnStairTransition; // 0xDD
		::System::Single PrepareStairBlendDuration; // 0xE0
		::System::Int32 SlopeType; // 0xE4
		::System::Single EndFadeOutTime; // 0xE8
		::System::Boolean StartFadeOut; // 0xEC
		::System::Boolean IsPassedAim; // 0xED
		::System::Boolean IsPathEnd; // 0xEE
		::System::Boolean IsMoving; // 0xEF
		::System::Boolean IgnoreNodeState; // 0xF0
		::System::Boolean IsStarted; // 0xF1
		::System::Boolean AfterTeleported; // 0xF2
		::System::Int32 LaneIndex; // 0xF4
		::System::Int32 NextLaneIndex; // 0xF8
		::System::Single LaneInnerOffset; // 0xFC
		::System::Int32 LaneInnerOffset2DIdx; // 0x100
		::System::Byte PathFollowNodeCount; // 0x104
		::System::Int16 SplineNodeControlPointIndex; // 0x106
		::System::Int16 SplineNodeExitControlPointIndex; // 0x108
		::System::Int32 ExitRefPointID; // 0x10C
		::System::Int32 LastPathFollowNodeID; // 0x110
		::System::Byte PathFollowNodeIndex; // 0x114
		::System::Boolean NodeIndexChanged; // 0x115
		::System::Boolean Teleported; // 0x116
		::System::Boolean EnableCubic; // 0x117
		::System::Single StopDistance; // 0x118
		::System::Single StartDistance; // 0x11C
		::System::Int32 PathID; // 0x120
		::System::Boolean disableTurn; // 0x124
		::System::UInt32 PrevEntity; // 0x128
		::System::Boolean CurNodeHasPrev; // 0x12C
		::UnityEngine::Vector3 K3; // 0x130
		::UnityEngine::Vector3 K2; // 0x13C
		::UnityEngine::Vector3 K1; // 0x148
		::UnityEngine::Vector3 K0; // 0x154
		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2__PathFollowNodes_e__FixedBuffer PathFollowNodes; // 0x160
		::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2__PathFollowNodesDirection_e__FixedBuffer PathFollowNodesDirection; // 0x260

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
