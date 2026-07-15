#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::ParkourGame { class MonoParkourItem; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ROADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ECB80)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_RoadItem_TypeDefinitionIndex = 70757;

	class MonoParkourRoad_RoadItem : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int RoadRangeIndex; // 0x10
		::System::Single CurveDistance; // 0x18
		::System::Single Height; // 0x1C
		::RPG::Client::ParkourGame::MonoParkourItem* Item; // 0x20
		::System::Boolean Reverse; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ROADITEM__CTOR_OFFSET))(this);
		}
	};
}
