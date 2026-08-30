#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"

class Class_0_16E4307DCC419505_1343;
class Class_0_16E4307DCC419505_318;
class Class_1_42D96751C1376DDB;
class Class_1_5F4D64A4B97E38F9;
class Class_1_84DA91D3CFCB2E68;
class Class_1_B26E06FC40F846CD;
class Class_1_B6441625E3D7D3E0;
class Class_1_B9D6E7E76075C6E2_3;
class Class_1_D126770E0092C973;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleModifierHintViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCF7D000)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_BUFFSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCF7E5B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_DEBUFFSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCF7E5F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_ISSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xCF7E6E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_LOCATESTATUSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF7E6B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_MODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0xCF7E670)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCF7E6D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_OTHERSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCF7E630)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xCF7E530)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ISSAMEWITHLOCATESTATUS_OFFSET UNITYSDK_OFFSET(0xCF7D490)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_SET_LOCATESTATUSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF7E6C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF7CD80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__GETALLSTATUSES_OFFSET UNITYSDK_OFFSET(0xCF7DD10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCF7E460)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCF7D560)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHALLMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0xCF7D2B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0xCF7DEE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLISTWITHALLTYPE_OFFSET UNITYSDK_OFFSET(0xCF7D230)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCF7D680)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendStatusDetailViewModel_TypeDefinitionIndex = 79595;

	class FateRinBattleHudFriendStatusDetailViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _DebuffStatusList; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _BuffStatusList_ReadOnly; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* _ModifierHintList; // 0x38
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* _ModifierHintList_ReadOnly; // 0x40
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OtherStatusList_ReadOnly; // 0x48
		::Class_1_B6441625E3D7D3E0* _Deck; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _BuffStatusList; // 0x58
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _DebuffStatusList_ReadOnly; // 0x60
		::Class_0_16E4307DCC419505_318* _NavigateToTeamDetail_k__BackingField; // 0x68
		::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* _LocateStatusViewModel_k__BackingField; // 0x70
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x78
		::Class_1_84DA91D3CFCB2E68* _Model; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OtherStatusList; // 0x88

		::System::Void _ctor(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_E79EE3670D2EC49A* a2, ::Class_1_B26E06FC40F846CD* a3, ::Class_0_16E4307DCC419505_1343* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E79EE3670D2EC49A*, ::Class_1_B26E06FC40F846CD*, ::Class_0_16E4307DCC419505_1343*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Boolean IsSameWithLocateStatus(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ISSAMEWITHLOCATESTATUS_OFFSET))(this, a1);
		}

		::System::Void _OnBattleStatusesModelChangeMessage(::Class_1_B9D6E7E76075C6E2_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatusListWithAllType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLISTWITHALLTYPE_OFFSET))(this);
		}

		::System::Void _RefreshStatusList(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*& a1, ::RPG::GameCore::EnumStatusType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*&, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshAllModifierHintList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHALLMODIFIERHINTLIST_OFFSET))(this);
		}

		::System::Void _RefreshModifierHintList(::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHMODIFIERHINTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* _GetAllStatuses()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__GETALLSTATUSES_OFFSET))(this);
		}

		::System::Void _NavigateToTeamDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_BuffStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_BUFFSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_DebuffStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_DEBUFFSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_OtherStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_OTHERSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* get_ModifierHintList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_MODIFIERHINTLIST_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* get_LocateStatusViewModel()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_LOCATESTATUSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_LocateStatusViewModel(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_SET_LOCATESTATUSVIEWMODEL_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* get_NavigateToTeamDetail()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::System::Boolean get_IsShowDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_ISSHOWDETAIL_OFFSET))(this);
		}
	};
}
