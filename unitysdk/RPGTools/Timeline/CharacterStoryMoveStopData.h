#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveStepData.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESTOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B3F80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveStopData_TypeDefinitionIndex = 44771;

	class CharacterStoryMoveStopData : public ::RPGTools::Timeline::CharacterStoryMoveStepData
	{
	public:
		::System::String* MoveStopAnimName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESTOPDATA__CTOR_OFFSET))(this);
		}
	};
}
