#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroupAction.h"

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION_ACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDCD10)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelGroupAction_Active_TypeDefinitionIndex = 39547;

	class TimelineControlGameWorld_LevelGroupAction_Active : public ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction
	{
	public:
		::System::Boolean active; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION_ACTIVE__CTOR_OFFSET))(this);
		}
	};
}
