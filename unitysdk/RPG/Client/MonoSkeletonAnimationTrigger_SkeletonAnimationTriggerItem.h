#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MONOSKELETONANIMATIONTRIGGER_SKELETONANIMATIONTRIGGERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC146330)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSkeletonAnimationTrigger_SkeletonAnimationTriggerItem_TypeDefinitionIndex = 64493;

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
