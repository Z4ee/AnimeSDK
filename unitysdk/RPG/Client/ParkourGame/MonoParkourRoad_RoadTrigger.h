#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::ParkourGame { class MonoParkourRoad_TriggerInfo; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ROADTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2B410)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_RoadTrigger_TypeDefinitionIndex = 68263;

	class MonoParkourRoad_RoadTrigger : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int RoadRangeIndex; // 0x10
		::System::Single CurveStartDistance; // 0x18
		::System::Single CurveEndDistance; // 0x1C
		::System::Single Height; // 0x20
		::RPG::Client::ParkourGame::MonoParkourRoad_TriggerInfo* Trigger; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ROADTRIGGER__CTOR_OFFSET))(this);
		}
	};
}
