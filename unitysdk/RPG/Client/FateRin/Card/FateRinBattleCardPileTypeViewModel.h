#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardPileType.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_0_16E4307DCC419505_1370;
class Class_0_16E4307DCC419505_1371;
class Class_1_426391BD841CEF9C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_B71FC14BA77C9F77;
namespace RPG::Client::FateRin::Card { class IFateRinBattleCardPileSectionViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCFDE9C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_SECTIONVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0xCFDEBD0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TABICONPATH_OFFSET UNITYSDK_OFFSET(0xCFDEB20)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCFDE9A0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xCFDE9B0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFDE430)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL__GETCARDMODELLIST_OFFSET UNITYSDK_OFFSET(0xCFDE8C0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileTypeViewModel_TypeDefinitionIndex = 79796;

	class FateRinBattleCardPileTypeViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>* _SectionViewModelList; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>* _SectionViewModelList_ReadOnly; // 0x28
		::RPG::Client::FateRin::Card::FateRinBattleCardPileType _Type_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1, ::Class_1_426391BD841CEF9C* a2, ::Class_0_16E4307DCC419505_1371* a3, ::Class_0_16E4307DCC419505_1370* a4, ::Class_1_5F4D64A4B97E38F9* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType, ::Class_1_426391BD841CEF9C*, ::Class_0_16E4307DCC419505_1371*, ::Class_0_16E4307DCC419505_1370*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>* _GetCardModelList(::Class_1_426391BD841CEF9C* a1, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B71FC14BA77C9F77*>*(*)(::PVOID, ::Class_1_426391BD841CEF9C*, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL__GETCARDMODELLIST_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Card::FateRinBattleCardPileType get_Type()
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardPileType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::FateRin::Card::FateRinBattleCardPileType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardPileType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_TabIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_TABICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>* get_SectionViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinBattleCardPileSectionViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDPILETYPEVIEWMODEL_GET_SECTIONVIEWMODELLIST_OFFSET))(this);
		}
	};
}
