#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroupAction.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION_MOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF89E0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_LevelGroupAction_Move_TypeDefinitionIndex = 38777;

	class TimelineControlGameWorld_LevelGroupAction_Move : public ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction
	{
	public:
		::UnityEngine::Vector3Int deltaMove; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMEWORLD_LEVELGROUPACTION_MOVE__CTOR_OFFSET))(this);
		}
	};
}
