#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExtractBoneInfo.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2_ParallelWriter.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_BONEEXTRACT_OFFSET UNITYSDK_OFFSET(0xF772580)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x668FD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET UNITYSDK_OFFSET(0xF770CA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xF76EDE0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SamplePoseProcessor_ParallelJob_TypeDefinitionIndex = 88270;

	struct alignas(4) AnimationSubManager_SamplePoseProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SamplePoseProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x3ACD0);
		}
		static ::Unity::Collections::NativeHashMap_2_ParallelWriter<::System::UInt32, ::ExtractBoneInfo>* StaticGet_s_extractBoneMap()
		{
			return (::Unity::Collections::NativeHashMap_2_ParallelWriter<::System::UInt32, ::ExtractBoneInfo>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SamplePoseProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0xDDB0);
		}
		::System::Int32 _sourceIndex; // 0x10

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		static ::System::Void ExtractPose(::System::Int32 avatarId, ::System::Int32 boneCount, ::System::Int32 indexBip001, ::System::Int32 rootIndex, ::System::Int32 headBoneIndex, ::System::Int32 middlePointIndex, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> data, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData> result, ::System::ReadOnlySpan_1<::System::UInt32> instanceId, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256> layerMaskList, ::Unity::Collections::NativeHashMap_2_ParallelWriter<::System::UInt32, ::ExtractBoneInfo> extractBoneMap)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::NPCCrowd::Chunk::Span2D_1<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1<::System::UInt32>, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256>, ::Unity::Collections::NativeHashMap_2_ParallelWriter<::System::UInt32, ::ExtractBoneInfo>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET))(avatarId, boneCount, indexBip001, rootIndex, headBoneIndex, middlePointIndex, data, result, instanceId, layerMaskList, extractBoneMap);
		}
		*/

		/*
		static ::System::Void BoneExtract(::System::UInt32 entityID, ::UnityEngine::NapTransformData headBone, ::UnityEngine::NapTransformData middlePoint, ::Unity::Collections::NativeHashMap_2_ParallelWriter<::System::UInt32, ::ExtractBoneInfo> extractBoneMap)
		{
			return ((::System::Void(*)(::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::Unity::Collections::NativeHashMap_2_ParallelWriter<::System::UInt32, ::ExtractBoneInfo>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_PARALLELJOB_BONEEXTRACT_OFFSET))(entityID, headBone, middlePoint, extractBoneMap);
		}
		*/
	};
}
