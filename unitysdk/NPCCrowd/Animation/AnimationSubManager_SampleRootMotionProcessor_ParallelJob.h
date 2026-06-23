#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5EEE60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXTRACTROOTMOTION_OFFSET UNITYSDK_OFFSET(0xE023CB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_FETCHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE023AE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xE023200)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleRootMotionProcessor_ParallelJob_TypeDefinitionIndex = 57354;

	struct alignas(1) AnimationSubManager_SampleRootMotionProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_SampleRootMotionProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x47000);
		}
		// static const ::System::Int32 RootMotionParamCount = 0x7; // 0x0

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		static ::UnityEngine::NapTransformData FetchTransform(::System::Single* ptr)
		{
			return ((::UnityEngine::NapTransformData(*)(::System::Single*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_FETCHTRANSFORM_OFFSET))(ptr);
		}
		*/

		/*
		static ::System::Void ExtractRootMotion(::System::Int32 avatarId, ::System::Int32 boneCount, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> data, ::System::Span_1<::UnityEngine::NapTransformData> result, ::System::ReadOnlySpan_1<::System::UInt32> entityIds)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::System::Span_1<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_PARALLELJOB_EXTRACTROOTMOTION_OFFSET))(avatarId, boneCount, data, result, entityIds);
		}
		*/
	};
}
