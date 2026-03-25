#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveWalkData.h"

#define RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVEWALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABA1F00)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int AvatarStoryMoveWalkData_TypeDefinitionIndex = 39483;

	class AvatarStoryMoveWalkData : public ::RPGTools::Timeline::Story::BaseStoryMoveWalkData
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_AVATARSTORYMOVEWALKDATA__CTOR_OFFSET))(this);
		}
	};
}
