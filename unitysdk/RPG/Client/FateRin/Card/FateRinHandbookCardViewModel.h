#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinHandbookCardTabType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1269;
class Class_0_16E4307DCC419505_1290;
class Class_0_16E4307DCC419505_1304;
class Class_0_16E4307DCC419505_1305;
class Class_0_16E4307DCC419505_311;
class Class_1_4557C77922A20D8C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_CC1C2BAFAFD12197;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardOwnerViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardTabViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
template <typename T> class Class_0_16E4307DCC419505_313;

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ADD_ONTABCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4A75D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4A5FF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GETCURTABCARDOWNERLIST_OFFSET UNITYSDK_OFFSET(0x1B4A69E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_ALLTABVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0x1B4A7570)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_CURTABREPORTNAME_OFFSET UNITYSDK_OFFSET(0x1B4A76B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SELECTTABACTION_OFFSET UNITYSDK_OFFSET(0x1B4A75B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0x1B4A7690)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_REMOVE_ONTABCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4A7630)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SELECTTABACTION_OFFSET UNITYSDK_OFFSET(0x1B4A75C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0x1B4A76A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A56D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__GETCARDVIEWMODELLISTBYTABOWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1B4A6C40)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONCARDUNLOCKEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B4A7420)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSELECTTAB_OFFSET UNITYSDK_OFFSET(0x1B4A7480)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSETHANDBOOKFUNCSEEN_OFFSET UNITYSDK_OFFSET(0x1B4A7500)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHTABVIEWMODELSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1B4A71B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B4A6100)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardViewModel_TypeDefinitionIndex = 76231;

	class FateRinHandbookCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_0_16E4307DCC419505_311* _SetHandbookFuncSeen_k__BackingField; // 0x20
		::Class_0_16E4307DCC419505_1269* _RedDotService; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _AllTabViewModelList_ReadOnly; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _AllTabViewModelList; // 0x38
		::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* _CurSelectedTabVM; // 0x40
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x48
		::RPG::Client::FateRin::ViewModelEventHandler* OnTabChange; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* _AllCardOwnerViewModelList; // 0x58
		::Class_1_4557C77922A20D8C* _CardService; // 0x60
		::Class_0_16E4307DCC419505_1305* _TabVmFactory; // 0x68
		::Class_0_16E4307DCC419505_1304* _CardVmFactory; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType>, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*>* _CardOwnerViewModelCacheDict; // 0x78
		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* _SelectTabAction_k__BackingField; // 0x80

		::System::Void _ctor(::Class_1_4557C77922A20D8C* a1, ::Class_0_16E4307DCC419505_1304* a2, ::Class_0_16E4307DCC419505_1305* a3, ::Class_0_16E4307DCC419505_1290* a4, ::Class_0_16E4307DCC419505_1269* a5, ::Class_1_5F4D64A4B97E38F9* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4557C77922A20D8C*, ::Class_0_16E4307DCC419505_1304*, ::Class_0_16E4307DCC419505_1305*, ::Class_0_16E4307DCC419505_1290*, ::Class_0_16E4307DCC419505_1269*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* GetCurTabCardOwnerList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GETCURTABCARDOWNERLIST_OFFSET))(this);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::System::Void _RefreshTabViewModelSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__REFRESHTABVIEWMODELSELECTSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>* _GetCardViewModelListByTabOwnerType(::RPG::Client::FateRin::Card::FateRinHandbookCardTabType a1, ::RPG::GameCore::FateRinHouguOwnerType a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardOwnerViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__GETCARDVIEWMODELLISTBYTABOWNERTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCardUnlockedMessage(::Class_1_CC1C2BAFAFD12197* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONCARDUNLOCKEDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnSelectTab(::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSELECTTAB_OFFSET))(this, a1);
		}

		::System::Void _OnSetHandbookFuncSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL__ONSETHANDBOOKFUNCSEEN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* get_AllTabViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_ALLTABVIEWMODELLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* get_SelectTabAction()
		{
			return ((::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SELECTTABACTION_OFFSET))(this);
		}

		::System::Void set_SelectTabAction(::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SELECTTABACTION_OFFSET))(this, a1);
		}

		::System::Void add_OnTabChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_ADD_ONTABCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnTabChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_REMOVE_ONTABCHANGE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_311* get_SetHandbookFuncSeen()
		{
			return ((::Class_0_16E4307DCC419505_311*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_SETHANDBOOKFUNCSEEN_OFFSET))(this);
		}

		::System::Void set_SetHandbookFuncSeen(::Class_0_16E4307DCC419505_311* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_311*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_SET_SETHANDBOOKFUNCSEEN_OFFSET))(this, a1);
		}

		::System::String* get_CurTabReportName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDVIEWMODEL_GET_CURTABREPORTNAME_OFFSET))(this);
		}
	};
}
