#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_OpCode.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_Operation__Operands_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_COMPLETE_OFFSET UNITYSDK_OFFSET(0x570850)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_DISPATCH_OFFSET UNITYSDK_OFFSET(0x570890)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x5707D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_NEWCOMPLETEOPERATION_OFFSET UNITYSDK_OFFSET(0xCD38720)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_NEWDISPATCHOPERATION_OFFSET UNITYSDK_OFFSET(0xCD38CB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_NEWPROCESSOPERATION_OFFSET UNITYSDK_OFFSET(0xCD38580)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_PROCESS_OFFSET UNITYSDK_OFFSET(0x570810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x570760)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_Operation_TypeDefinitionIndex = 70423;

	struct alignas(1) AnimationSubManager_AnimationScheduler_Operation
	{
		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OpCode OperationCode; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation__Operands_e__FixedBuffer Operands; // 0x11

		/*
		::System::Void _ctor(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OpCode opCode, ::System::ReadOnlySpan_1<::System::Byte> operands)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OpCode, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION__CTOR_OFFSET))(this, opCode, operands);
		}
		*/

		static ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation NewProcessOperation(::System::Int32 nodeIndex)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_NEWPROCESSOPERATION_OFFSET))(nodeIndex);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation NewCompleteOperation(::System::Collections::Generic::IEnumerable_1<::System::Int32>* nodeIndices)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_NEWCOMPLETEOPERATION_OFFSET))(nodeIndices);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation NewDispatchOperation(::System::Int32 nodeIndex, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* dependOnIndices)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation(*)(::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_NEWDISPATCHOPERATION_OFFSET))(nodeIndex, dependOnIndices);
		}

		/*
		::System::Void Invoke(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_INVOKE_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_PROCESS_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void Complete(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_COMPLETE_OFFSET))(this, context);
		}
		*/

		/*
		::System::Void Dispatch(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATION_DISPATCH_OFFSET))(this, context);
		}
		*/
	};
}
