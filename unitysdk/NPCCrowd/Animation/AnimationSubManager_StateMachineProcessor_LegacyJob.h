#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView2D_1.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView_1.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/Foundation/StateMachine/Machine.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedStateData.h"
#include "unitysdk/NPCCrowd/Animation/NPCUnionAnimatorManager_CompositeKey.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"

namespace NPCCrowd::Animation { class AnimationSubManager_StateMachineArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_ADVANCEANIMATION_OFFSET UNITYSDK_OFFSET(0x756200)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x1193FDB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x756250)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GETSHAREDDATA_OFFSET UNITYSDK_OFFSET(0x7561F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x7561E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x756240)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineProcessor_LegacyJob_TypeDefinitionIndex = 88304;

	struct alignas(8) AnimationSubManager_StateMachineProcessor_LegacyJob
	{
		::Foundation::StateMachine::Machine _machine; // 0x10
		::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> _sharedStateData; // 0xC8
		::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData> _sharedData; // 0xE8
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityId; // 0x100
		::Foundation::Container::NativeVector_1<::Foundation::StateMachine::ParameterId> _normalizedTimeIds; // 0x120
		::System::Single _deltaTime; // 0x130
		::System::Int32 _frameCount; // 0x134
		::NPCCrowd::Chunk::ChunkView2D_1<::Foundation::StateMachine::Parameter> _params; // 0x138
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> _states; // 0x168
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _animations; // 0x188
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x1A8
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest> _blendingRequests; // 0x1C8
		::Unity::Collections::NativeHashMap_2<::NPCCrowd::Animation::NPCUnionAnimatorManager_CompositeKey, ::System::Single> _transitionDictionary; // 0x1E8
		::System::Single _defaultTransitionTime; // 0x1F8

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_LegacyJob> CreateJob(::System::Single deltaTime, ::System::Int32 frameCount, ::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData* stateMachine)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_LegacyJob>(*)(::System::Single, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(deltaTime, frameCount, stateMachine);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		/*
		::NPCCrowd::Animation::CPUStateMachine::SharedData GetSharedData(::System::Int32 index, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>& sharedStateData)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::SharedData(*)(::PVOID, ::System::Int32, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GETSHAREDDATA_OFFSET))(this, index, sharedStateData);
		}
		*/

		/*
		::System::Double AdvanceAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData& sampleData, ::System::Span_1<::Foundation::StateMachine::Parameter> parameters, ::System::Single deltaTime, ::System::Int32 layerIndex)
		{
			return ((::System::Double(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData&, ::System::Span_1<::Foundation::StateMachine::Parameter>, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_ADVANCEANIMATION_OFFSET))(this, instanceData, sampleData, parameters, deltaTime, layerIndex);
		}
		*/

		/*
		::System::Boolean UpdateState(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& animation, ::Foundation::StateMachine::StateId newState, ::System::Double normalizedTime, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::Foundation::StateMachine::StateId, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_UPDATESTATE_OFFSET))(this, instanceData, animation, newState, normalizedTime, deltaTime);
		}
		*/

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}
	};
}
