#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x825380)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x8251E0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATENEWACTION_OFFSET UNITYSDK_OFFSET(0x8250E0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x157A8DB0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x8251C0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x825470)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_ENABLEWARPING_OFFSET UNITYSDK_OFFSET(0x824EA0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONID_OFFSET UNITYSDK_OFFSET(0x825090)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSERVERSTARTTIME_OFFSET UNITYSDK_OFFSET(0x825040)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSTARTTIME_OFFSET UNITYSDK_OFFSET(0x824FF0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTMOVEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x824FA0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETPREVIOUSACTION_OFFSET UNITYSDK_OFFSET(0x824F50)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x825160)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x8254B0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x8253D0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x8252B0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_POPWARPINGTARGET_OFFSET UNITYSDK_OFFSET(0x824E30)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_PUSHWARPINGTARGET_OFFSET UNITYSDK_OFFSET(0x824DF0)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x825420)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x825510)
#define NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x157A92D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityMoveTargetFragment_TypeDefinitionIndex = 71924;

	struct alignas(4) FNPCAbilityMoveTargetFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityMoveTargetFragment_TypeDefinitionIndex)->GetStaticField(0x47590);
		}
		static ::System::Boolean* StaticGet_DebugEnableWarping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FNPCAbilityMoveTargetFragment_TypeDefinitionIndex)->GetStaticField(0x10950);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xE852F72A; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::UnityEngine::Vector3 Center; // 0x14
		::UnityEngine::Vector3 Forward; // 0x20
		::UnityEngine::Vector3 UpAxis; // 0x2C
		::System::Single DistanceToGoal; // 0x38
		::System::Single SlackRadius; // 0x3C
		::System::Single CurrentActionWorldStartTime; // 0x40
		::System::Single CurrentActionServerStartTime; // 0x44
		::System::UInt16 CurrentActionID; // 0x48
		::System::Single DesiredSpeed; // 0x4C
		::NPCCrowd::Ability::ENPCAbilityMovementAction IntentAtGoal; // 0x50
		::NPCCrowd::Ability::ENPCAbilityMovementAction CurrentAction; // 0x54
		::NPCCrowd::Ability::ENPCAbilityMovementAction PreviousAction; // 0x58
		::System::Boolean bOffBoundaries; // 0x5C
		::System::Boolean bSteeringFallingBehind; // 0x5D
		::System::Int32 StandAnimClipID; // 0x60
		::System::Int32 WalkAnimClipID; // 0x64
		::System::Single DefaultDesiredSpeed; // 0x68
		::System::Boolean WarpingFlag; // 0x6C
		::UnityEngine::Vector3 WarpingTarget; // 0x70
		::UnityEngine::Quaternion WarpingTargetRot; // 0x7C
		::System::Boolean WarpingEnable; // 0x8C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT__CCTOR_OFFSET))();
		}

		::System::Void PushWarpingTarget(::UnityEngine::Vector3 WarpingTarget, ::UnityEngine::Quaternion WarpingTargetRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_PUSHWARPINGTARGET_OFFSET))(this, WarpingTarget, WarpingTargetRot);
		}

		::System::Boolean PopWarpingTarget(::UnityEngine::Vector3& target, ::UnityEngine::Quaternion& targetRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_POPWARPINGTARGET_OFFSET))(this, target, targetRot);
		}

		::System::Void EnableWarping(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_ENABLEWARPING_OFFSET))(this, enable);
		}

		::NPCCrowd::Ability::ENPCAbilityMovementAction GetPreviousAction()
		{
			return ((::NPCCrowd::Ability::ENPCAbilityMovementAction(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETPREVIOUSACTION_OFFSET))(this);
		}

		::NPCCrowd::Ability::ENPCAbilityMovementAction GetCurrentMoveActionType()
		{
			return ((::NPCCrowd::Ability::ENPCAbilityMovementAction(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTMOVEACTIONTYPE_OFFSET))(this);
		}

		::System::Single GetCurrentActionStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSTARTTIME_OFFSET))(this);
		}

		::System::Single GetCurrentActionServerStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONSERVERSTARTTIME_OFFSET))(this);
		}

		::System::UInt16 GetCurrentActionID()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GETCURRENTACTIONID_OFFSET))(this);
		}

		::System::UInt16 CreateNewAction(::NPCCrowd::Ability::ENPCAbilityMovementAction inAction, ::System::Single inWorldTime)
		{
			return ((::System::UInt16(*)(::PVOID, ::NPCCrowd::Ability::ENPCAbilityMovementAction, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATENEWACTION_OFFSET))(this, inAction, inWorldTime);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment Create()
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FNPCAbilityMoveTargetFragment__CopyAssign(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FNPCABILITYMOVETARGETFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
