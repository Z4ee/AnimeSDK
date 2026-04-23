#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveRunData.h"

#define RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVERUNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB917480)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int AvatarStoryMoveRunData_TypeDefinitionIndex = 45393;

	class AvatarStoryMoveRunData : public ::RPGTools::Timeline::Story::BaseStoryMoveRunData
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVERUNDATA__CTOR_OFFSET))(this);
		}
	};
}
