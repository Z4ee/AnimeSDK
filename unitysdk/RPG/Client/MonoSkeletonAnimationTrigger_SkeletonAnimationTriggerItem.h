#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_SKELETONANIMATIONTRIGGERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F80B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSkeletonAnimationTrigger_SkeletonAnimationTriggerItem_TypeDefinitionIndex = 63572;

	class MonoSkeletonAnimationTrigger_SkeletonAnimationTriggerItem : public ::System::Object
	{
	public:
		::System::String* SkeletonAnimationEventName; // 0x10
		::System::String* AudioEventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_SKELETONANIMATIONTRIGGERITEM__CTOR_OFFSET))(this);
		}
	};
}
