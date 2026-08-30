#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveWalkData.h"

#define RPGTOOLS_TIMELINE_STORY_NPCSTORYMOVEWALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C5700)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int NpcStoryMoveWalkData_TypeDefinitionIndex = 49162;

	class NpcStoryMoveWalkData : public ::RPGTools::Timeline::Story::BaseStoryMoveWalkData
	{
	public:
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_NPCSTORYMOVEWALKDATA__CTOR_OFFSET))(this);
		}
	};
}
