#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ItemType.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourItemObstacle.h"

namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMOBSTACLEMOVABLE_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1A2E6760)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMOBSTACLEMOVABLE_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1A2E6710)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMOBSTACLEMOVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E6770)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourItemObstacleMovable_TypeDefinitionIndex = 70745;

	class MonoParkourItemObstacleMovable : public ::RPG::Client::ParkourGame::MonoParkourItemObstacle
	{
	public:
		::System::Single MoveSpeed; // 0xC0
		::System::Single MoveStopWaitTime; // 0xC4
		::System::Single RecoverWaitTime; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMOBSTACLEMOVABLE__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMOBSTACLEMOVABLE_ONTRIGGERED_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGame::ItemType get_ItemType()
		{
			return ((::RPG::Client::ParkourGame::ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMOBSTACLEMOVABLE_GET_ITEMTYPE_OFFSET))(this);
		}
	};
}
