#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_GET_ISDISPATCHABLE_OFFSET UNITYSDK_OFFSET(0x1136A1A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1136A1B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1136A240)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_Dispatchable_TypeDefinitionIndex = 57435;

	class AnimationSubManager_Dispatchable : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDispatchable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_GET_ISDISPATCHABLE_OFFSET))(this);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_DISPATCHABLE_PROCESS_OFFSET))(this, manager);
		}
	};
}
