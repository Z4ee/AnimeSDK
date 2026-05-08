#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_DISPATCH_OFFSET UNITYSDK_OFFSET(0xCD47B20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_GET_ISDISPATCHABLE_OFFSET UNITYSDK_OFFSET(0xCD47B10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xCD47BF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xCD47BE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD43EC0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_NoDispatchable_TypeDefinitionIndex = 70519;

	class AnimationSubManager_NoDispatchable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDispatchable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_GET_ISDISPATCHABLE_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_DISPATCH_OFFSET))(this, manager, dependsOn);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_NODISPATCHABLE_GET_MAXPHASE_OFFSET))(this);
		}
	};
}
