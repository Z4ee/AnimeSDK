#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet64.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_Node.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_PhaseEvent.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AnimationScheduler_OperationBuffer; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationScheduler_OperationBufferBuilder; }
namespace NPCCrowd::Animation { class AnimationSubManager_IAnimationProcessor; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_DISPATCH_1_OFFSET UNITYSDK_OFFSET(0x115071D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_DISPATCH_OFFSET UNITYSDK_OFFSET(0x719C60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_HANDLEENDINDEX_OFFSET UNITYSDK_OFFSET(0x719C50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_INVOKE_OFFSET UNITYSDK_OFFSET(0x719B20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_PREPARE_OFFSET UNITYSDK_OFFSET(0x719B60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_PROCESS_OFFSET UNITYSDK_OFFSET(0x719BC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_REMOVEDEPENDENCY_1_OFFSET UNITYSDK_OFFSET(0x115070C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_REMOVEDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x11506F70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_SCHEDULE_1_OFFSET UNITYSDK_OFFSET(0x719BB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x719BA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11507320)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_TypeDefinitionIndex = 70427;

	struct alignas(8) AnimationSubManager_AnimationScheduler_ScheduleAlgorithm
	{
		static ::System::Action_3<::System::Int32, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64>, ::Unity::Collections::NativeArray_1<::System::Int32>>** StaticGet_AddByOrderDelegate()
		{
			return (::System::Action_3<::System::Int32, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64>, ::Unity::Collections::NativeArray_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_TypeDefinitionIndex)->GetStaticField(0x47D80);
		}
		static ::System::Action_4<::System::Int32, ::Foundation::BitSet64, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*>** StaticGet_DispatchDelegate()
		{
			return (::System::Action_4<::System::Int32, ::Foundation::BitSet64, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_TypeDefinitionIndex)->GetStaticField(0x47D88);
		}
		static ::Foundation::BitSet64* StaticGet_EventMask()
		{
			return (::Foundation::BitSet64*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_TypeDefinitionIndex)->GetStaticField(0x11340);
		}
		::Foundation::BitSet64 _remaining; // 0x10
		::Foundation::BitSet64 _dispatchable; // 0x18
		::Foundation::BitSet64 _noDispatchable; // 0x20
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> _nodes; // 0x28
		::Unity::Collections::NativeArray_1<::Foundation::BitSet64> _prerequisite; // 0x38
		::Unity::Collections::NativeArray_1<::System::Int32> _processorOrder; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM__CCTOR_OFFSET))();
		}

		/*
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBuffer*>* Invoke(::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> nodes, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*> processors)
		{
			return ((::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBuffer*>*(*)(::PVOID, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_INVOKE_OFFSET))(this, nodes, processors);
		}
		*/

		/*
		::System::Void Prepare(::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> nodes, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*> processors)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_PREPARE_OFFSET))(this, nodes, processors);
		}
		*/

		::System::Boolean Schedule(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase phase, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*& builder)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_SCHEDULE_OFFSET))(this, phase, builder);
		}

		::System::Boolean Schedule_1(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent from, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent to, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*& builder)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_SCHEDULE_1_OFFSET))(this, from, to, builder);
		}

		::System::Void Process(::System::Int32 nodeIndex, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_PROCESS_OFFSET))(this, nodeIndex, builder);
		}

		::System::Void HandleEndIndex(::System::Int32 endIndex, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_HANDLEENDINDEX_OFFSET))(this, endIndex, builder);
		}

		::Foundation::BitSet64 Dispatch(::System::Int32 nodeIndex, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64> noDispatchableQueue, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder* builder)
		{
			return ((::Foundation::BitSet64(*)(::PVOID, ::System::Int32, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64>, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_DISPATCH_OFFSET))(this, nodeIndex, noDispatchableQueue, builder);
		}

		static ::System::Void Dispatch_1(::Foundation::BitSet64 nodeIndices, ::Foundation::BitSet64 prerequisite, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> nodes, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder* builder)
		{
			return ((::System::Void(*)(::Foundation::BitSet64, ::Foundation::BitSet64, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_OperationBufferBuilder*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_DISPATCH_1_OFFSET))(nodeIndices, prerequisite, nodes, builder);
		}

		static ::Foundation::BitSet64 RemoveDependency(::System::Int32 index, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> nodes, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64> prerequisite, ::Unity::Collections::NativeArray_1<::System::Int32> order)
		{
			return ((::Foundation::BitSet64(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64>, ::Unity::Collections::NativeArray_1<::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_REMOVEDEPENDENCY_OFFSET))(index, nodes, prerequisite, order);
		}

		static ::Foundation::BitSet64 RemoveDependency_1(::Foundation::BitSet64 indices, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> nodes, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64> prerequisite, ::Unity::Collections::NativeArray_1<::System::Int32> order)
		{
			return ((::Foundation::BitSet64(*)(::Foundation::BitSet64, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node>, ::Unity::Collections::NativeArray_1<::Foundation::BitSet64>, ::Unity::Collections::NativeArray_1<::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_REMOVEDEPENDENCY_1_OFFSET))(indices, nodes, prerequisite, order);
		}
	};
}
