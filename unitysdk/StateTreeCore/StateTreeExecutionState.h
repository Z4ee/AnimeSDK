#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionDelayedState.h"
#include "unitysdk/StateTreeCore/StateTreeUpdatePhase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEEXECUTIONSTATE_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9E10F0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9E0D80)
#define STATETREECORE_STATETREEEXECUTIONSTATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C52D950)
#define STATETREECORE_STATETREEEXECUTIONSTATE_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9E0D60)
#define STATETREECORE_STATETREEEXECUTIONSTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E13B0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x304470)
#define STATETREECORE_STATETREEEXECUTIONSTATE_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9E13E0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9E1270)
#define STATETREECORE_STATETREEEXECUTIONSTATE_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9E0FB0)
#define STATETREECORE_STATETREEEXECUTIONSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x9E1320)
#define STATETREECORE_STATETREEEXECUTIONSTATE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXECUTIONSTATE__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9E10F0)
#define STATETREECORE_STATETREEEXECUTIONSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C52E180)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionState_TypeDefinitionIndex = 28305;

	struct alignas(8) StateTreeExecutionState
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeExecutionState_TypeDefinitionIndex)->GetStaticField(0x21980);
		}
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExecutionFrame> ActiveFrames; // 0x10
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeTransitionDelayedState> DelayedTransitions; // 0x28
		::System::UInt16 EnterStateFailedFrameIndex; // 0x40
		::System::UInt16 EnterStateFailedTaskIndex; // 0x42
		::StateTreeCore::StateTreeRunStatus LastTickStatus; // 0x44
		::StateTreeCore::StateTreeRunStatus TreeRunStatus; // 0x45
		::StateTreeCore::StateTreeRunStatus RequestedStop; // 0x46
		::StateTreeCore::StateTreeUpdatePhase CurrentPhase; // 0x47
		::System::UInt16 CompletedFrameIndex; // 0x48
		::StateTreeCore::StateTreeStateHandle CompletedStateHandle; // 0x4A
		::System::UInt16 StateChangeCount; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeExecutionState Create(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExecutionState(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_CREATE_OFFSET))(allocator);
		}

		::StateTreeCore::StateTreeExecutionState DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExecutionState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExecutionState CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExecutionState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExecutionState MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExecutionState(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeExecutionState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeExecutionState& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeExecutionState__CopyAssign(::StateTreeCore::StateTreeExecutionState& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONSTATE_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXECUTIONSTATE__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
