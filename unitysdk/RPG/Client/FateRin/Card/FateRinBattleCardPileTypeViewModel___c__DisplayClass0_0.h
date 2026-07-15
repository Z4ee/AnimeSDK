#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1289;
class Class_0_16E4307DCC419505_1290;
class Class_1_F4140148FE9021F9;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49AFF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1B49B440)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileTypeViewModel___c__DisplayClass0_0_TypeDefinitionIndex = 76164;

	class FateRinBattleCardPileTypeViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1289* cardVmFactory; // 0x10
		::Class_1_F4140148FE9021F9* cardGameModel; // 0x18
		::Class_0_16E4307DCC419505_1290* ownerFactory; // 0x20
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* __ctor_b__1(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET))(this, a1);
		}
	};
}
