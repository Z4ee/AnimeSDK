#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCUnionAnimatorManager_CompositeKey.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"

namespace NPCCrowd::Animation { class AnimationSubManager_StateMachineArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_ADVANCEANIMATION_OFFSET UNITYSDK_OFFSET(0x10662AF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTEWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x6AA480)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6AA370)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_GETSHAREDDATA_OFFSET UNITYSDK_OFFSET(0x10662930)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x106627D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x10662DE0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineProcessor_ParallelJob_TypeDefinitionIndex = 88302;

	struct alignas(8) AnimationSubManager_StateMachineProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_StateMachineProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x49530);
		}
		::System::Single _deltaTime; // 0x10
		::System::Int32 _frameCount; // 0x14
		::Unity::Collections::NativeHashMap_2<::NPCCrowd::Animation::NPCUnionAnimatorManager_CompositeKey, ::System::Single> _transitionDictionary; // 0x18
		::System::Single _defaultTransitionTime; // 0x28
		::System::Int32 _sourceIndex; // 0x2C

		/*
		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_ParallelJob_DispatchIndex& dispatchIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_ParallelJob_DispatchIndex&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, dispatchIndex);
		}
		*/

		/*
		static ::NPCCrowd::Animation::CPUStateMachine::SharedData GetSharedData(::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> sharedStateDataView, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData> sharedDataView, ::System::Int32 index, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>& sharedStateData)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::SharedData(*)(::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData>, ::System::Int32, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_GETSHAREDDATA_OFFSET))(sharedStateDataView, sharedDataView, index, sharedStateData);
		}
		*/

		/*
		static ::System::Double AdvanceAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData& sampleData, ::System::Span_1<::Foundation::StateMachine::Parameter> parameters, ::System::Single deltaTime, ::System::Int32 layerIndex, ::Foundation::Container::NativeVector_1<::Foundation::StateMachine::ParameterId> normalizedTimeIds)
		{
			return ((::System::Double(*)(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData&, ::System::Span_1<::Foundation::StateMachine::Parameter>, ::System::Single, ::System::Int32, ::Foundation::Container::NativeVector_1<::Foundation::StateMachine::ParameterId>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_ADVANCEANIMATION_OFFSET))(instanceData, sampleData, parameters, deltaTime, layerIndex, normalizedTimeIds);
		}
		*/

		/*
		static ::System::Boolean UpdateState(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& animation, ::Foundation::StateMachine::StateId newState, ::System::Double normalizedTime, ::System::Single deltaTime, ::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> sharedStateDataView, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData> sharedDataView)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::Foundation::StateMachine::StateId, ::System::Double, ::System::Single, ::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_UPDATESTATE_OFFSET))(instanceData, animation, newState, normalizedTime, deltaTime, sharedStateDataView, sharedDataView);
		}
		*/

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void ExecuteWithContext(::System::Int32 chunkIndex, ::System::Single deltaTime, ::System::Int32 frameCount, ::Unity::Collections::NativeHashMap_2<::NPCCrowd::Animation::NPCUnionAnimatorManager_CompositeKey, ::System::Single> transitionDictionary, ::System::Single defaultTransitionTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::Unity::Collections::NativeHashMap_2<::NPCCrowd::Animation::NPCUnionAnimatorManager_CompositeKey, ::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTEWITHCONTEXT_OFFSET))(this, chunkIndex, deltaTime, frameCount, transitionDictionary, defaultTransitionTime);
		}
	};
}
