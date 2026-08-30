#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_STORYDURATIONTIMECONFIG_STORYDURATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xE80B450)

namespace RPGTools
{
	inline static constexpr unsigned int StoryDurationTimeConfig_StoryDurationTime_TypeDefinitionIndex = 48241;

	class StoryDurationTimeConfig_StoryDurationTime : public ::System::Object
	{
	public:
		::System::String* DisplayName; // 0x10
		::System::Single EaseInDuration; // 0x18
		::System::Single Duration; // 0x1C
		::System::Single EaseOutDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORYDURATIONTIMECONFIG_STORYDURATIONTIME__CTOR_OFFSET))(this);
		}
	};
}
