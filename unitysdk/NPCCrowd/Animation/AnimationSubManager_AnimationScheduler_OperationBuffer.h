#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_ExecuteContext.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_Operation.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1064A520)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1064A510)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_OperationBuffer_TypeDefinitionIndex = 88360;

	class AnimationSubManager_AnimationScheduler_OperationBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation>* _operations; // 0x10

		::System::Void _ctor(::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation>* operations)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Operation>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER__CTOR_OFFSET))(this, operations);
		}

		::System::Void Submit(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext context)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_ExecuteContext))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_OPERATIONBUFFER_SUBMIT_OFFSET))(this, context);
		}
	};
}
