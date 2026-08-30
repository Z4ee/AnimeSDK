#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8344C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStorySteerData_TypeDefinitionIndex = 48481;

	class CharacterStorySteerData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* AreaName; // 0x20
		::System::String* TargetCharacterUniqueName; // 0x28
		::System::Boolean OverrideAnimation; // 0x30
		::System::Single SpeedRatio; // 0x34
		::System::String* StorySteerCurveName; // 0x38
		::System::Single Duration; // 0x40
		::System::Single CalculateDuration; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERDATA__CTOR_OFFSET))(this);
		}
	};
}
