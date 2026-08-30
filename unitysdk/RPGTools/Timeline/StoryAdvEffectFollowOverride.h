#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_STORYADVEFFECTFOLLOWOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E7490)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryAdvEffectFollowOverride_TypeDefinitionIndex = 48780;

	class StoryAdvEffectFollowOverride : public ::System::Object
	{
	public:
		::System::String* ConfigName; // 0x10
		::System::Boolean OverrideFollowTarget; // 0x18
		::System::Boolean FollowTargetAlways; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYADVEFFECTFOLLOWOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
