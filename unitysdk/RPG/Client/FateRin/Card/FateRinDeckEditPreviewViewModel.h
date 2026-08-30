#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1371;
class Class_0_16E4307DCC419505_318;
class Class_1_4557C77922A20D8C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_7B5BC5F7531D3B01;
namespace RPG::Client::FateRin::Card { class FateRinCardDeckViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CBE3FF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_DECK_OFFSET UNITYSDK_OFFSET(0x1CBE4680)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_ISINDELETESTATE_OFFSET UNITYSDK_OFFSET(0x1CBE46A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_ONCARDCLICK_OFFSET UNITYSDK_OFFSET(0x1CBE46D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_SAVECHANGESTOUPPERPAGE_OFFSET UNITYSDK_OFFSET(0x1CBE46E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_SWITCHDELETESTATE_OFFSET UNITYSDK_OFFSET(0x1CBE46C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_SET_DECK_OFFSET UNITYSDK_OFFSET(0x1CBE4690)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_SET_ISINDELETESTATE_OFFSET UNITYSDK_OFFSET(0x1CBE46B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE3DF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__ONCARDCLICK_OFFSET UNITYSDK_OFFSET(0x1CBE42C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__SAVECHANGESTOUPPERPAGE_OFFSET UNITYSDK_OFFSET(0x1CBE45A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__SWITCHDELETESTATE_OFFSET UNITYSDK_OFFSET(0x1CBE4220)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinDeckEditPreviewViewModel_TypeDefinitionIndex = 79834;

	class FateRinDeckEditPreviewViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x20
		::Class_1_7B5BC5F7531D3B01* _CardVmFactory; // 0x28
		::Class_0_16E4307DCC419505_1371* _OwnerVmFactory; // 0x30
		::Class_1_4557C77922A20D8C* _CardService; // 0x38
		::Class_0_16E4307DCC419505_318* _SaveChangesToUpperPage_k__BackingField; // 0x40
		::Class_0_16E4307DCC419505_318* _SwitchDeleteState_k__BackingField; // 0x48
		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _OnCardClick_k__BackingField; // 0x50
		::RPG::Client::FateRin::Card::FateRinCardDeckViewModel* _Deck_k__BackingField; // 0x58
		::System::Boolean _IsInDeleteState_k__BackingField; // 0x60
		::System::Boolean _DeckModified; // 0x61

		::System::Void _ctor(::Class_1_4557C77922A20D8C* a1, ::Class_1_7B5BC5F7531D3B01* a2, ::Class_0_16E4307DCC419505_1371* a3, ::Class_1_5F4D64A4B97E38F9* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4557C77922A20D8C*, ::Class_1_7B5BC5F7531D3B01*, ::Class_0_16E4307DCC419505_1371*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void _SwitchDeleteState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__SWITCHDELETESTATE_OFFSET))(this);
		}

		::System::Void _OnCardClick(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__ONCARDCLICK_OFFSET))(this, a1);
		}

		::System::Void _SaveChangesToUpperPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL__SAVECHANGESTOUPPERPAGE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::FateRinCardDeckViewModel* get_Deck()
		{
			return ((::RPG::Client::FateRin::Card::FateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_DECK_OFFSET))(this);
		}

		::System::Void set_Deck(::RPG::Client::FateRin::Card::FateRinCardDeckViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_SET_DECK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInDeleteState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_ISINDELETESTATE_OFFSET))(this);
		}

		::System::Void set_IsInDeleteState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_SET_ISINDELETESTATE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* get_SwitchDeleteState()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_SWITCHDELETESTATE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_OnCardClick()
		{
			return ((::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_ONCARDCLICK_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_SaveChangesToUpperPage()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINDECKEDITPREVIEWVIEWMODEL_GET_SAVECHANGESTOUPPERPAGE_OFFSET))(this);
		}
	};
}
