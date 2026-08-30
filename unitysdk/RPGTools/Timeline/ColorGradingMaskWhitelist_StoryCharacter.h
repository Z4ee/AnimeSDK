#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_COLORGRADINGMASKWHITELIST_STORYCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE836E70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskWhitelist_StoryCharacter_TypeDefinitionIndex = 48917;

	class ColorGradingMaskWhitelist_StoryCharacter : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Single FadeTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKWHITELIST_STORYCHARACTER__CTOR_OFFSET))(this);
		}
	};
}
