#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ItemType.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourItem.h"

namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0xAC255B0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAC25530)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAC255C0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP___IFIXBASEPROXY_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAC255D0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourItemSpeedUp_TypeDefinitionIndex = 68252;

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

		::System::Void __iFixBaseProxy_OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSPEEDUP___IFIXBASEPROXY_ONTRIGGERED_OFFSET))(this, P0);
		}
	};
}
