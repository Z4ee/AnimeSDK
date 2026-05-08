#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_IndexFetcher___buffer_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x72EF80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_INVOKE_OFFSET UNITYSDK_OFFSET(0x72EE80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_NEW_OFFSET UNITYSDK_OFFSET(0x11B22470)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x72EEA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x72EF10)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_IndexFetcher_TypeDefinitionIndex = 70433;

	struct alignas(4) AnimationSubManager_AnimationScheduler_IndexFetcher
	{
		::System::Int32 _count; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_IndexFetcher___buffer_e__FixedBuffer _buffer; // 0x14

		static ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_IndexFetcher New()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_IndexFetcher(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_NEW_OFFSET))();
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_INVOKE_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		/*
		::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_IndexFetcher_Enumerator GetEnumerator()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_IndexFetcher_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INDEXFETCHER_GETENUMERATOR_OFFSET))(this);
		}
		*/
	};
}
