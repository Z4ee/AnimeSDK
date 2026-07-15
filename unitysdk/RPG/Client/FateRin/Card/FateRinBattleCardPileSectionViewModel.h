#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"

class Class_0_16E4307DCC419505_1289;
class Class_0_16E4307DCC419505_1290;
class Class_1_B71FC14BA77C9F77;
class Class_1_F4140148FE9021F9;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinCardOwnerViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
template <typename T> class Class_0_16E4307DCC419505_313;

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B499910)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x1B49A4A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CURCOUNT_OFFSET UNITYSDK_OFFSET(0x1B49A4E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1B49A350)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B49A530)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B49A1D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1B49A1B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1B49A6A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B49A190)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1B49A550)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B49A540)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1B49A1C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1B49A6B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B49A1A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4999D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__GETCARDMODELLIST_OFFSET UNITYSDK_OFFSET(0x1B499FB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1B49A090)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileSectionViewModel_TypeDefinitionIndex = 76157;

	class FateRinBattleCardPileSectionViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* _CardList; // 0x20
		::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* _OwnerVM; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* _CardList_ReadOnly; // 0x30
		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* _ShowDetailDialog_k__BackingField; // 0x38
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType _Type_k__BackingField; // 0x40
		::RPG::GameCore::FateRinHouguOwnerType _OwnerType_k__BackingField; // 0x44
		::System::Int32 _MaxCount_k__BackingField; // 0x48

		::System::Void _ctor(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1, ::RPG::GameCore::FateRinHouguOwnerType a2, ::Class_1_F4140148FE9021F9* a3, ::Class_0_16E4307DCC419505_1289* a4, ::Class_0_16E4307DCC419505_1290* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType, ::RPG::GameCore::FateRinHouguOwnerType, ::Class_1_F4140148FE9021F9*, ::Class_0_16E4307DCC419505_1289*, ::Class_0_16E4307DCC419505_1290*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel* Create(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1, ::RPG::GameCore::FateRinHouguOwnerType a2, ::Class_1_F4140148FE9021F9* a3, ::Class_0_16E4307DCC419505_1289* a4, ::Class_0_16E4307DCC419505_1290* a5)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*(*)(::RPG::Client::FateRin::Card::FateRinBattleCardPileType, ::RPG::GameCore::FateRinHouguOwnerType, ::Class_1_F4140148FE9021F9*, ::Class_0_16E4307DCC419505_1289*, ::Class_0_16E4307DCC419505_1290*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* _GetCardModelList(::Class_1_F4140148FE9021F9* a1, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID, ::Class_1_F4140148FE9021F9*, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__GETCARDMODELLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowDetailDialog(::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL__SHOWDETAILDIALOG_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::FateRinBattleCardPileType get_Type()
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardPileType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_OwnerType()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_OWNERTYPE_OFFSET))(this);
		}

		::System::Void set_OwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_OWNERTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* get_CardList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CARDLIST_OFFSET))(this);
		}

		::System::Int32 get_CurCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_CURCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_MAXCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* get_ShowDetailDialog()
		{
			return ((::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET))(this);
		}

		::System::Void set_ShowDetailDialog(::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_313<::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILESECTIONVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET))(this, a1);
		}
	};
}
