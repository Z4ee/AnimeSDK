#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x8C49690)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManagerConfig_TypeDefinitionIndex = 54030;

	class AnimationSubManagerConfig : public ::System::Object
	{
	public:
		::System::Boolean enableMoving; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
