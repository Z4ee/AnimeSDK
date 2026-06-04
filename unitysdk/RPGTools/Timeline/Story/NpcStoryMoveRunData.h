#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPGTools/Timeline/Story/BaseStoryMoveRunData.h"

#define RPGTOOLS_TIMELINE_STORY_NPCSTORYMOVERUNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD057B30)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int NpcStoryMoveRunData_TypeDefinitionIndex = 45978;

	class NpcStoryMoveRunData : public ::RPGTools::Timeline::Story::BaseStoryMoveRunData
	{
	public:
		::RPG::GameCore::NPCBodySize NpcBodySize; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_NPCSTORYMOVERUNDATA__CTOR_OFFSET))(this);
		}
	};
}
