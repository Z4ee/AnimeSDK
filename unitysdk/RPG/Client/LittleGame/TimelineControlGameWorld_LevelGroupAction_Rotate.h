#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroupAction.h"

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION_ROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5945F0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelGroupAction_Rotate_TypeDefinitionIndex = 40355;

	class TimelineControlGameWorld_LevelGroupAction_Rotate : public ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction
	{
	public:
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation deltaRotation; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION_ROTATE__CTOR_OFFSET))(this);
		}
	};
}
