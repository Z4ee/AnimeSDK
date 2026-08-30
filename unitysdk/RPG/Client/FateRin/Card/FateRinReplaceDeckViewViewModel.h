#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1343;
class Class_0_16E4307DCC419505_1370;
class Class_0_16E4307DCC419505_1385;
class Class_1_4557C77922A20D8C;
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_GET_DECK_OFFSET UNITYSDK_OFFSET(0xCFEFBA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_SET_DECK_OFFSET UNITYSDK_OFFSET(0xCFEFBB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFEFA10)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceDeckViewViewModel_TypeDefinitionIndex = 79849;

	class FateRinReplaceDeckViewViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* _Deck_k__BackingField; // 0x20

		::System::Void _ctor(::Class_0_16E4307DCC419505_1343* a1, ::Class_1_4557C77922A20D8C* a2, ::Class_0_16E4307DCC419505_1385* a3, ::Class_0_16E4307DCC419505_1370* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1343*, ::Class_1_4557C77922A20D8C*, ::Class_0_16E4307DCC419505_1385*, ::Class_0_16E4307DCC419505_1370*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* get_Deck()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_GET_DECK_OFFSET))(this);
		}

		::System::Void set_Deck(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_SET_DECK_OFFSET))(this, a1);
		}
	};
}
