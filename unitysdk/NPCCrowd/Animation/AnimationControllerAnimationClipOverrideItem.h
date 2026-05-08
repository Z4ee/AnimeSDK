#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERANIMATIONCLIPOVERRIDEITEM_ASSIGNTO_OFFSET UNITYSDK_OFFSET(0xF4EDD60)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERANIMATIONCLIPOVERRIDEITEM_ISSAMEITEM_OFFSET UNITYSDK_OFFSET(0xF4EDDC0)
#define NPCCROWD_ANIMATION_ANIMATIONCONTROLLERANIMATIONCLIPOVERRIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF4EDE40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationControllerAnimationClipOverrideItem_TypeDefinitionIndex = 54001;

	class AnimationControllerAnimationClipOverrideItem : public ::System::Object
	{
	public:
		::System::String* clipPath; // 0x10
		::System::Int32 animationId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERANIMATIONCLIPOVERRIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Void AssignTo(::NPCCrowd::Animation::AnimationControllerAnimationClipOverrideItem* other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerAnimationClipOverrideItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERANIMATIONCLIPOVERRIDEITEM_ASSIGNTO_OFFSET))(this, other);
		}

		::System::Boolean IsSameItem(::NPCCrowd::Animation::AnimationControllerAnimationClipOverrideItem* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationControllerAnimationClipOverrideItem*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONCONTROLLERANIMATIONCLIPOVERRIDEITEM_ISSAMEITEM_OFFSET))(this, other);
		}
	};
}
