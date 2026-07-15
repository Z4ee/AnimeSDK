#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_800F39F6EDBF75D7_Struct_2_98E897EFC7A24AA9.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"

class Class_0_16E4307DCC419505_1266;
class Class_0_16E4307DCC419505_1269;
class Class_0_16E4307DCC419505_1290;
class Class_0_16E4307DCC419505_1304;
class Class_0_16E4307DCC419505_311;
class Class_1_0950A81C001CB7BF;
class Class_1_4557C77922A20D8C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_800F39F6EDBF75D7;
class Class_1_AE2EBF12D2D8D8EB;
class Class_1_B6441625E3D7D3E0;
class Class_1_E6AB8F5108CCE0CE;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckSectionViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_313;

#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0x1A378FC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GETMODIFYPARAM_OFFSET UNITYSDK_OFFSET(0x1A375A00)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDMASTERCARDS_OFFSET UNITYSDK_OFFSET(0x1A378E60)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDNEUTRALCARDS_OFFSET UNITYSDK_OFFSET(0x1A378E80)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDSERVANTCARDS_OFFSET UNITYSDK_OFFSET(0x1A378E70)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ALLSELECTEDCARDS_OFFSET UNITYSDK_OFFSET(0x1A378D70)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_CLICKCARD_OFFSET UNITYSDK_OFFSET(0x1A3790A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_DECK_OFFSET UNITYSDK_OFFSET(0x1A378E50)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1A378F80)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0x1A378FA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDMASTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A378E90)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDNEUTRALCOUNT_OFFSET UNITYSDK_OFFSET(0x1A378F30)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDSERVANTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A378EE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SETCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1A3790D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SHOWDECKPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1A3790B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_TRYAPPLYRECOMMENDDECK_OFFSET UNITYSDK_OFFSET(0x1A3790C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISFULLYSELECTED_OFFSET UNITYSDK_OFFSET(0x1A374E10)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1A375220)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET UNITYSDK_OFFSET(0x1A379030)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1A378F90)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET UNITYSDK_OFFSET(0x1A378FB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__CREATEACQUIREDLISTFROMOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1A3745D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A373F10)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__DOAPPLYRECOMMENDDECK_OFFSET UNITYSDK_OFFSET(0x1A378430)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__FILLLISTTOHASHSET_OFFSET UNITYSDK_OFFSET(0x1A377900)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDCARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1A3786F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDSETBYCARDOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1A3762F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__INITSELECTEDSETS_OFFSET UNITYSDK_OFFSET(0x1A374C30)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ISMODIFIED_G__ISSECTIONMODIFIED_2_0_OFFSET UNITYSDK_OFFSET(0x1A3752C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCARDCLICK_OFFSET UNITYSDK_OFFSET(0x1A375B50)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET UNITYSDK_OFFSET(0x1A378DB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONPREVIEWDIALOGCHANGECONFIRM_OFFSET UNITYSDK_OFFSET(0x1A377800)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHALLSELECTEDCARDS_OFFSET UNITYSDK_OFFSET(0x1A374D40)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEBYHASHSET_OFFSET UNITYSDK_OFFSET(0x1A374CC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEOFLISTBYHASHSET_OFFSET UNITYSDK_OFFSET(0x1A377E00)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SETCURRENTDECK_OFFSET UNITYSDK_OFFSET(0x1A3768E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SHOWDECKPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x1A3763B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__TRYAPPLYRECOMMENDDECK_OFFSET UNITYSDK_OFFSET(0x1A376750)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___INITSELECTEDSETS_G__FILLSECTIONTOHASHSET_9_0_OFFSET UNITYSDK_OFFSET(0x1A376B50)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___REFRESHALLSELECTEDCARDS_G__FILLSELECTEDCARDSTORESULTLIST_10_0_OFFSET UNITYSDK_OFFSET(0x1A3770E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___TRYAPPLYRECOMMENDDECK_B__6_0_OFFSET UNITYSDK_OFFSET(0x1A3790E0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinSingleDeckEditViewModel_TypeDefinitionIndex = 76216;

	class FateRinSingleDeckEditViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_0950A81C001CB7BF* _DeckRecommendService; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SelectedNeutralCards; // 0x28
		::Class_0_16E4307DCC419505_311* _TryApplyRecommendDeck_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_311* _ShowDeckPreviewDialog_k__BackingField; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SelectedMasterCards; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AllSelectedCards; // 0x48
		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* _Deck_k__BackingField; // 0x50
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AcquiredNeutralCards_k__BackingField; // 0x58
		::Class_0_16E4307DCC419505_311* _SetCurrentDeck_k__BackingField; // 0x60
		::Class_1_800F39F6EDBF75D7* _DeckService; // 0x68
		::Class_0_16E4307DCC419505_1269* _RedDotService; // 0x70
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SelectedServantCards; // 0x78
		::RPG::Client::FateRin::ViewModelEventHandler* OnCurrentDeckRefresh; // 0x80
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x88
		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _ClickCard_k__BackingField; // 0x90
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x98
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AcquiredMasterCards_k__BackingField; // 0xA0
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _AcquiredServantCards_k__BackingField; // 0xA8
		::System::Boolean _IsCurrentDeck_k__BackingField; // 0xB0
		::System::Boolean _IsInPlotMode_k__BackingField; // 0xB1

		::System::Void _ctor(::Class_1_B6441625E3D7D3E0* a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_1266* a3, ::Class_1_4557C77922A20D8C* a4, ::Class_1_800F39F6EDBF75D7* a5, ::Class_1_0950A81C001CB7BF* a6, ::Class_1_E79EE3670D2EC49A* a7, ::Class_0_16E4307DCC419505_1269* a8, ::Class_0_16E4307DCC419505_1304* a9, ::Class_0_16E4307DCC419505_1290* a10, ::Class_1_5F4D64A4B97E38F9* a11)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6441625E3D7D3E0*, ::System::Boolean, ::Class_0_16E4307DCC419505_1266*, ::Class_1_4557C77922A20D8C*, ::Class_1_800F39F6EDBF75D7*, ::Class_1_0950A81C001CB7BF*, ::Class_1_E79EE3670D2EC49A*, ::Class_0_16E4307DCC419505_1269*, ::Class_0_16E4307DCC419505_1304*, ::Class_0_16E4307DCC419505_1290*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Boolean IsFullySelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISFULLYSELECTED_OFFSET))(this);
		}

		::System::Boolean IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ISMODIFIED_OFFSET))(this);
		}

		::Class_1_800F39F6EDBF75D7_Struct_2_98E897EFC7A24AA9 GetModifyParam()
		{
			return ((::Class_1_800F39F6EDBF75D7_Struct_2_98E897EFC7A24AA9(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GETMODIFYPARAM_OFFSET))(this);
		}

		::System::Void _OnCardClick(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCARDCLICK_OFFSET))(this, a1);
		}

		::System::Void _ShowDeckPreviewDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SHOWDECKPREVIEWDIALOG_OFFSET))(this);
		}

		::System::Void _TryApplyRecommendDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__TRYAPPLYRECOMMENDDECK_OFFSET))(this);
		}

		::System::Void _SetCurrentDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__SETCURRENTDECK_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CreateAcquiredListFromOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1, ::Class_0_16E4307DCC419505_1266* a2, ::Class_0_16E4307DCC419505_1304* a3)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::Class_0_16E4307DCC419505_1266*, ::Class_0_16E4307DCC419505_1304*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__CREATEACQUIREDLISTFROMOWNERTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitSelectedSets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__INITSELECTEDSETS_OFFSET))(this);
		}

		::System::Void _RefreshAllSelectedCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHALLSELECTEDCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetSelectedSetByCardOwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDSETBYCARDOWNERTYPE_OFFSET))(this, a1);
		}

		::System::Void _OnPreviewDialogChangeConfirm(::Class_1_E6AB8F5108CCE0CE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E6AB8F5108CCE0CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONPREVIEWDIALOGCHANGECONFIRM_OFFSET))(this, a1);
		}

		::System::Void _RefreshSelectedStateByHashSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEBYHASHSET_OFFSET))(this);
		}

		::System::Void _DoApplyRecommendDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__DOAPPLYRECOMMENDDECK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetSelectedCardIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__GETSELECTEDCARDIDLIST_OFFSET))(this);
		}

		::System::Void _OnCurrentDeckChange(::Class_1_AE2EBF12D2D8D8EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AE2EBF12D2D8D8EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ONCURRENTDECKCHANGE_OFFSET))(this, a1);
		}

		::System::Void _FillListToHashSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__FILLLISTTOHASHSET_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshSelectedStateOfListByHashSet(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__REFRESHSELECTEDSTATEOFLISTBYHASHSET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* get_Deck()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_DECK_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AcquiredMasterCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDMASTERCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AcquiredServantCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDSERVANTCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AcquiredNeutralCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ACQUIREDNEUTRALCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_AllSelectedCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ALLSELECTEDCARDS_OFFSET))(this);
		}

		::System::Int32 get_SelectedMasterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDMASTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SelectedServantCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDSERVANTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SelectedNeutralCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SELECTEDNEUTRALCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentDeck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISCURRENTDECK_OFFSET))(this);
		}

		::System::Void set_IsCurrentDeck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISCURRENTDECK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPlotMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_ISINPLOTMODE_OFFSET))(this);
		}

		::System::Void set_IsInPlotMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_SET_ISINPLOTMODE_OFFSET))(this, a1);
		}

		::System::Void add_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_ADD_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnCurrentDeckRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_REMOVE_ONCURRENTDECKREFRESH_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_ClickCard()
		{
			return ((::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_CLICKCARD_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_311* get_ShowDeckPreviewDialog()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SHOWDECKPREVIEWDIALOG_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_311* get_TryApplyRecommendDeck()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_TRYAPPLYRECOMMENDDECK_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_311* get_SetCurrentDeck()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL_GET_SETCURRENTDECK_OFFSET))(this);
		}

		static ::System::Boolean _IsModified_g__IsSectionModified_2_0(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL__ISMODIFIED_G__ISSECTIONMODIFIED_2_0_OFFSET))(a1, a2);
		}

		::System::Void __TryApplyRecommendDeck_b__6_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___TRYAPPLYRECOMMENDDECK_B__6_0_OFFSET))(this, a1);
		}

		static ::System::Void __InitSelectedSets_g__FillSectionToHashSet_9_0(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::FateRin::Card::IFateRinCardDeckSectionViewModel*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___INITSELECTEDSETS_G__FILLSECTIONTOHASHSET_9_0_OFFSET))(a1, a2);
		}

		::System::Void __RefreshAllSelectedCards_g__FillSelectedCardsToResultList_10_0(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINSINGLEDECKEDITVIEWMODEL___REFRESHALLSELECTEDCARDS_G__FILLSELECTEDCARDSTORESULTLIST_10_0_OFFSET))(this, a1, a2);
		}
	};
}
