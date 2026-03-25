#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESTEPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3ECE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveStepData_TypeDefinitionIndex = 38864;

	class CharacterStoryMoveStepData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::String* TargetAreaName; // 0x18
		::System::String* TargetAnchorName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESTEPDATA__CTOR_OFFSET))(this);
		}
	};
}
