#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"

class Class_0_16E4307DCC419505_1371;
class Class_0_16E4307DCC419505_1385;
class Class_1_4557C77922A20D8C;
class Class_1_C85C4DAB350DD5FC_2;
namespace RPG::Client::FateRin::Card { class IFateRinCardOwnerViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ACQUIREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBE90D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ALLCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBE90F0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_CARDVIEWMODELLIST_OFFSET UNITYSDK_OFFSET(0x1CBE9290)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CBE9140)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CBE8E00)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1CBE8DE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1CBE92D0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1CBE8F80)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_REFRESHACQUIRE_OFFSET UNITYSDK_OFFSET(0x1CBE8A60)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_ACQUIREDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBE90E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1CBE8DF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1CBE92E0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE84C0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL__ONSHOWDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x1CBE8CE0)
#define RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1CBE92F0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardOwnerViewModel_TypeDefinitionIndex = 79854;

	class FateRinHandbookCardOwnerViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CardViewModelList_ReadOnly; // 0x20
		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _ShowDetailDialog_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* _CardViewModelList; // 0x30
		::RPG::Client::FateRin::Card::IFateRinCardOwnerViewModel* _OwnerVM; // 0x38
		::System::Int32 _AcquiredCount_k__BackingField; // 0x40
		::RPG::GameCore::FateRinHouguOwnerType _OwnerType_k__BackingField; // 0x44

		::System::Void _ctor(::RPG::GameCore::FateRinHouguOwnerType a1, ::Class_1_4557C77922A20D8C* a2, ::Class_0_16E4307DCC419505_1385* a3, ::Class_0_16E4307DCC419505_1371* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::Class_1_4557C77922A20D8C*, ::Class_0_16E4307DCC419505_1385*, ::Class_0_16E4307DCC419505_1371*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RefreshAcquire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_REFRESHACQUIRE_OFFSET))(this);
		}

		::System::Void _OnShowDetailDialog(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL__ONSHOWDETAILDIALOG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_OwnerType()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_OWNERTYPE_OFFSET))(this);
		}

		::System::Void set_OwnerType(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_OWNERTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_UIColorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_UICOLORSTATE_OFFSET))(this);
		}

		::System::Int32 get_AcquiredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ACQUIREDCOUNT_OFFSET))(this);
		}

		::System::Void set_AcquiredCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_ACQUIREDCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_AllCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ALLCOUNT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_CardViewModelList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_CARDVIEWMODELLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* get_ShowDetailDialog()
		{
			return ((::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_GET_SHOWDETAILDIALOG_OFFSET))(this);
		}

		::System::Void set_ShowDetailDialog(::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL_SET_SHOWDETAILDIALOG_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__0_0(::Class_1_C85C4DAB350DD5FC_2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINHANDBOOKCARDOWNERVIEWMODEL___CTOR_B__0_0_OFFSET))(this, a1);
		}
	};
}
