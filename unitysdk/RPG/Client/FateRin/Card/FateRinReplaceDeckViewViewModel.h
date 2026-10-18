#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1550;
class Class_0_16E4307DCC419505_1574;
class Class_0_16E4307DCC419505_1588;
class Class_1_4557C77922A20D8C;
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEECE70)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_GET_DECK_OFFSET UNITYSDK_OFFSET(0xCEECFA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_SET_DECK_OFFSET UNITYSDK_OFFSET(0xCEECFB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEECCE0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceDeckViewViewModel_TypeDefinitionIndex = 81172;

	class FateRinReplaceDeckViewViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* _Deck_k__BackingField; // 0x20

		::System::Void _ctor(::Class_0_16E4307DCC419505_1550* a1, ::Class_1_4557C77922A20D8C* a2, ::Class_0_16E4307DCC419505_1588* a3, ::Class_0_16E4307DCC419505_1574* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1550*, ::Class_1_4557C77922A20D8C*, ::Class_0_16E4307DCC419505_1588*, ::Class_0_16E4307DCC419505_1574*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACEDECKVIEWVIEWMODEL_DISPOSE_OFFSET))(this);
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
