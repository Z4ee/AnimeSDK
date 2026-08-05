#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Node_1.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationSampleData.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSHAREDDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13DE8A40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSHAREDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE8B00)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationSharedData_TypeDefinitionIndex = 88237;

	class AnimationSubManager_AnimationSharedData : public ::System::Object
	{
	public:
		// static const ::System::Int32 AdditionalAnimationDataCapacity = 0x100; // 0x0
		::Foundation::Container::NativeVector_1<::NPCCrowd::Animation::AnimationSubManager_Node_1<::NPCCrowd::Animation::CPUStateMachine::AnimationSampleData>> AdditionalAnimationData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSHAREDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSHAREDDATA_DISPOSE_OFFSET))(this);
		}
	};
}
