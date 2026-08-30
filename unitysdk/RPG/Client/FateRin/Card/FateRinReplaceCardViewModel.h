#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1347;
class Class_0_16E4307DCC419505_1350;
class Class_0_16E4307DCC419505_1371;
class Class_0_16E4307DCC419505_1385;
class Class_0_16E4307DCC419505_318;
class Class_1_4557C77922A20D8C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_800F39F6EDBF75D7;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0x1CBEEA00)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBEE980)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1CBEE9A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0x1CBEE960)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_REPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBEE9D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1CBEE9C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1CBEE9F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBEE9E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1CBEEAC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_INIT_OFFSET UNITYSDK_OFFSET(0x1CBECDF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET UNITYSDK_OFFSET(0x1CBEEA60)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CANREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBEE990)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1CBEE9B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_INCOMINGCARD_OFFSET UNITYSDK_OFFSET(0x1CBEE970)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET__CURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1CBEEAD0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBEEAE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBECA60)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__FINDRECOMMENDEDCARD_OFFSET UNITYSDK_OFFSET(0x1CBED430)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__INITCANREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBED010)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBEDEF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPORTREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBEE280)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SELECTCARDTOBEREPLACED_OFFSET UNITYSDK_OFFSET(0x1CBEDB40)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SETINCOMINGCOLLECTABLECARDSEEN_OFFSET UNITYSDK_OFFSET(0x1CBEE740)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SHOWDECKVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1CBEE8B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SKIPREPLACECARD_OFFSET UNITYSDK_OFFSET(0x1CBEE200)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinReplaceCardViewModel_TypeDefinitionIndex = 79843;

	class FateRinReplaceCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_DefaultReplacementCardIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FateRinReplaceCardViewModel_TypeDefinitionIndex)->GetStaticField(0x3E50);
		}
		::Class_1_800F39F6EDBF75D7* _DeckService; // 0x20
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _CardToBeReplaced_k__BackingField; // 0x28
		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _IncomingCard_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_318* _SkipReplaceCard_k__BackingField; // 0x38
		::Class_0_16E4307DCC419505_318* _ShowDeckViewDialog_k__BackingField; // 0x40
		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _SelectCardToBeReplaced_k__BackingField; // 0x48
		::Class_1_4557C77922A20D8C* _CardService; // 0x50
		::Class_0_16E4307DCC419505_1385* _CardVmFactory; // 0x58
		::RPG::Client::FateRin::ViewModelEventHandler* OnNotifyExit; // 0x60
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CanReplaceCard_k__BackingField; // 0x68
		::Class_0_16E4307DCC419505_1347* _DeckRepository; // 0x70
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* __CurrentDeck_k__BackingField; // 0x78
		::Class_0_16E4307DCC419505_1371* _OwnerVmFactory; // 0x80
		::Class_0_16E4307DCC419505_318* _ReplaceCard_k__BackingField; // 0x88
		::Class_0_16E4307DCC419505_1350* _RedDotService; // 0x90
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x98
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0xA0
		::System::Boolean _HasReported; // 0xA8

		::System::Void _ctor(::Class_0_16E4307DCC419505_1347* a1, ::Class_1_4557C77922A20D8C* a2, ::Class_1_800F39F6EDBF75D7* a3, ::Class_1_E79EE3670D2EC49A* a4, ::Class_0_16E4307DCC419505_1385* a5, ::Class_0_16E4307DCC419505_1371* a6, ::Class_0_16E4307DCC419505_1350* a7, ::Class_1_5F4D64A4B97E38F9* a8)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1347*, ::Class_1_4557C77922A20D8C*, ::Class_1_800F39F6EDBF75D7*, ::Class_1_E79EE3670D2EC49A*, ::Class_0_16E4307DCC419505_1385*, ::Class_0_16E4307DCC419505_1371*, ::Class_0_16E4307DCC419505_1350*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__CCTOR_OFFSET))();
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_INIT_OFFSET))(this, a1);
		}

		::System::Void _InitCanReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__INITCANREPLACECARD_OFFSET))(this);
		}

		::System::Void _SelectCardToBeReplaced(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SELECTCARDTOBEREPLACED_OFFSET))(this, a1);
		}

		::System::Void _ReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPLACECARD_OFFSET))(this);
		}

		::System::Void _SkipReplaceCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SKIPREPLACECARD_OFFSET))(this);
		}

		::System::Void _ReportReplaceCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__REPORTREPLACECARD_OFFSET))(this, a1);
		}

		::System::Void _SetIncomingCollectableCardSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SETINCOMINGCOLLECTABLECARDSEEN_OFFSET))(this);
		}

		::System::Void _ShowDeckViewDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__SHOWDECKVIEWDIALOG_OFFSET))(this);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* _FindRecommendedCard(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL__FINDRECOMMENDEDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* get_IncomingCard()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_INCOMINGCARD_OFFSET))(this);
		}

		::System::Void set_IncomingCard(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_INCOMINGCARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_CanReplaceCard()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CANREPLACECARD_OFFSET))(this);
		}

		::System::Void set_CanReplaceCard(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CANREPLACECARD_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* get_CardToBeReplaced()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_CARDTOBEREPLACED_OFFSET))(this);
		}

		::System::Void set_CardToBeReplaced(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET_CARDTOBEREPLACED_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_SelectCardToBeReplaced()
		{
			return ((::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SELECTCARDTOBEREPLACED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_ReplaceCard()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_REPLACECARD_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_SkipReplaceCard()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SKIPREPLACECARD_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_ShowDeckViewDialog()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET_SHOWDECKVIEWDIALOG_OFFSET))(this);
		}

		::System::Void add_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_ADD_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_OnNotifyExit(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_REMOVE_ONNOTIFYEXIT_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* get__CurrentDeck()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_GET__CURRENTDECK_OFFSET))(this);
		}

		::System::Void set__CurrentDeck(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINREPLACECARDVIEWMODEL_SET__CURRENTDECK_OFFSET))(this, a1);
		}
	};
}
