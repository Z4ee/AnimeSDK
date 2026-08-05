#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_MontageArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x66A960)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xF871A90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MontageProcessor_ParallelJob_TypeDefinitionIndex = 88297;

	struct alignas(4) AnimationSubManager_MontageProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_MontageArchetypeData*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_MontageArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_MontageProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x40F90);
		}
		::System::Single _deltaTime; // 0x10
		::System::Int32 _frameCount; // 0x14

		/*
		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::NPCCrowd::Animation::AnimationSubManager_MontageProcessor_ParallelJob_DispatchIndex& dispatchIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_MontageProcessor_ParallelJob_DispatchIndex&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, dispatchIndex);
		}
		*/

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}
	};
}
