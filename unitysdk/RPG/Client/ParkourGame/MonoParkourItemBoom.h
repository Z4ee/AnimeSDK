#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ItemType.h"
#include "unitysdk/RPG/Client/ParkourGame/MonoParkourItem.h"

namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x9ECBB40)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9ECBAC0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECBB50)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM___IFIXBASEPROXY_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9ECBB80)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourItemBoom_TypeDefinitionIndex = 60799;

	class MonoParkourItemBoom : public ::RPG::Client::ParkourGame::MonoParkourItem
	{
	public:
		::System::Int32 DecelPriority; // 0xA8
		::System::Int32 DecelLevel; // 0xAC
		::System::Single DecelDuration; // 0xB0
		::System::Single DelSpeedValue; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM_ONTRIGGERED_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGame::ItemType get_ItemType()
		{
			return ((::RPG::Client::ParkourGame::ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnTriggered(::RPG::Client::ParkourGame::MonoParkourCharacter* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURITEMBOOM___IFIXBASEPROXY_ONTRIGGERED_OFFSET))(this, P0);
		}
	};
}
