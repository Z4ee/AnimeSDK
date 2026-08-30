#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveMode.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveStepData.h"

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESTARTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE833250)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveStartData_TypeDefinitionIndex = 48473;

	class CharacterStoryMoveStartData : public ::RPGTools::Timeline::CharacterStoryMoveStepData
	{
	public:
		::RPGTools::Timeline::CharacterStoryMoveData_MoveMode MotionFlag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVESTARTDATA__CTOR_OFFSET))(this);
		}
	};
}
