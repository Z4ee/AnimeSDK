#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x633F20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET UNITYSDK_OFFSET(0xF0DCCB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xF0DB900)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob_TypeDefinitionIndex = 88333;

	struct alignas(1) AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SampleBlendeShapeProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x4B230);
		}

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		static ::System::Void ExtractPose(::System::Int32 avatarId, ::System::Int32 blendShapeCount, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> data, ::NPCCrowd::Chunk::Span2D_1<::System::Int32> curveIDs, ::NPCCrowd::Chunk::Span2D_1<::System::Single> result, ::System::ReadOnlySpan_1<::System::UInt32> instanceId, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::BlendShapeSampleData> blendShapeDatas, ::Unity::Collections::NativeArray_1<::System::Byte> blendShapeMaskValues, ::Unity::Collections::NativeArray_1<::System::Byte> blendShapeMaskFullFlags)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::NPCCrowd::Chunk::Span2D_1<::System::Int32>, ::NPCCrowd::Chunk::Span2D_1<::System::Single>, ::System::ReadOnlySpan_1<::System::UInt32>, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::BlendShapeSampleData>, ::Unity::Collections::NativeArray_1<::System::Byte>, ::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_PARALLELJOB_EXTRACTPOSE_OFFSET))(avatarId, blendShapeCount, data, curveIDs, result, instanceId, blendShapeDatas, blendShapeMaskValues, blendShapeMaskFullFlags);
		}
		*/
	};
}
