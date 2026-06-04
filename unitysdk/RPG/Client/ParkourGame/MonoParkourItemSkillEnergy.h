#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ItemType.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourItem.h"

namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0xC335330)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC3352B0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0xC335340)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY___IFIXBASEPROXY_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC335350)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourItemSkillEnergy_TypeDefinitionIndex = 69225;

	class MonoParkourItemSkillEnergy : public ::RPG::Client::ParkourGame::MonoParkourItem
	{
	public:
		::System::Int32 Value; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY_ONTRIGGERED_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGame::ItemType get_ItemType()
		{
			return ((::RPG::Client::ParkourGame::ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMSKILLENERGY___IFIXBASEPROXY_ONTRIGGERED_OFFSET))(this, a1);
		}
	};
}
