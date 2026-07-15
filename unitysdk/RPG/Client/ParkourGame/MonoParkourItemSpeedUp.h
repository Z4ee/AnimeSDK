#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ItemType.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourItem.h"

namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1A2E68C0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1A2E6840)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E68D0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourItemSpeedUp_TypeDefinitionIndex = 70747;

	class MonoParkourItemSpeedUp : public ::RPG::Client::ParkourGame::MonoParkourItem
	{
	public:
		::System::Int32 Value; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP_ONTRIGGERED_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGame::ItemType get_ItemType()
		{
			return ((::RPG::Client::ParkourGame::ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP_GET_ITEMTYPE_OFFSET))(this);
		}
	};
}
