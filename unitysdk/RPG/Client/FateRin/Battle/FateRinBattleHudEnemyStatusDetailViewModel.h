#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"

class Class_0_16E4307DCC419505_318;
class Class_1_0471857D35382E2E;
class Class_1_5F4D64A4B97E38F9;
class Class_1_B9D6E7E76075C6E2_3;
class Class_1_D126770E0092C973;
class Class_1_E79EE3670D2EC49A;
class Class_1_F9FBCC956DFCF137_38;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleModifierHintViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ADD_ONLINKREFRESH_OFFSET UNITYSDK_OFFSET(0x1CA3DF80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ADD_ONMODELCHANGE_OFFSET UNITYSDK_OFFSET(0x1CA3DEC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CA3C360)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_BUFFSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1CA3E0B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_CHANGETOLINKMODELACTION_OFFSET UNITYSDK_OFFSET(0x1CA3E290)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_DEBUFFSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1CA3E100)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_ISBOSSRANK_OFFSET UNITYSDK_OFFSET(0x1CA3E230)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_ISSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0x1CA3E2D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_LINKEDENEMYICONPATHLIST_OFFSET UNITYSDK_OFFSET(0x1CA3E1F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_LINKEDENEMY_OFFSET UNITYSDK_OFFSET(0x1CA3E1D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_LOCATESTATUSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CA3E2A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_MODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x1CA3E190)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0x1CA3E2C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_OTHERSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1CA3E150)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1CA3E040)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ISSAMEWITHLOCATESTATUS_OFFSET UNITYSDK_OFFSET(0x1CA3CD80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_REMOVE_ONLINKREFRESH_OFFSET UNITYSDK_OFFSET(0x1CA3DFE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_REMOVE_ONMODELCHANGE_OFFSET UNITYSDK_OFFSET(0x1CA3DF20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_SET_LINKEDENEMY_OFFSET UNITYSDK_OFFSET(0x1CA3E1E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_SET_LOCATESTATUSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CA3E2B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3C060)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0x1CA3D180)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CA3CF40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CA3CE50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__ONCHANGETOLINKMODEL_OFFSET UNITYSDK_OFFSET(0x1CA3CFB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHALLMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x1CA3C660)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHLINKEINFO_OFFSET UNITYSDK_OFFSET(0x1CA3C8A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0x1CA3D880)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHSTATUSLISTWITHALLTYPE_OFFSET UNITYSDK_OFFSET(0x1CA3C5E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1CA3D1F0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEnemyStatusDetailViewModel_TypeDefinitionIndex = 79584;

	class FateRinBattleHudEnemyStatusDetailViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_0_16E4307DCC419505_318* _ChangeToLinkModelAction_k__BackingField; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OtherStatusList_ReadOnly; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>* _LinkedEnemyIconPathList_ReadOnly; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _DebuffStatusList; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _LinkedEnemyIconPathList; // 0x40
		::RPG::Client::FateRin::ViewModelEventHandler* OnLinkRefresh; // 0x48
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x50
		::RPG::Client::FateRin::ViewModelEventHandler* OnModelChange; // 0x58
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* _ModifierHintList_ReadOnly; // 0x60
		::Class_0_16E4307DCC419505_318* _NavigateToTeamDetail_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _BuffStatusList; // 0x70
		::Class_1_0471857D35382E2E* _Model; // 0x78
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _DebuffStatusList_ReadOnly; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OtherStatusList; // 0x88
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x90
		::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* _LocateStatusViewModel_k__BackingField; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* _ModifierHintList; // 0xA0
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _BuffStatusList_ReadOnly; // 0xA8
		::Class_1_0471857D35382E2E* _LinkedEnemy_k__BackingField; // 0xB0

		::System::Void _ctor(::Class_1_5F4D64A4B97E38F9* a1, ::Class_1_E79EE3670D2EC49A* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Boolean IsSameWithLocateStatus(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ISSAMEWITHLOCATESTATUS_OFFSET))(this, a1);
		}

		::System::Void _OnBattleStatusesModelChangeMessage(::Class_1_B9D6E7E76075C6E2_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleEnemyStateModelChangeMessage(::Class_1_F9FBCC956DFCF137_38* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnChangeToLinkModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__ONCHANGETOLINKMODEL_OFFSET))(this);
		}

		::System::Void _NavigateToTeamDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::System::Void _RefreshStatusListWithAllType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHSTATUSLISTWITHALLTYPE_OFFSET))(this);
		}

		::System::Void _RefreshStatusList(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*& a1, ::RPG::GameCore::EnumStatusType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*&, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHSTATUSLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshAllModifierHintList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHALLMODIFIERHINTLIST_OFFSET))(this);
		}

		::System::Void _RefreshModifierHintList(::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D126770E0092C973*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHMODIFIERHINTLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshLinkeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL__REFRESHLINKEINFO_OFFSET))(this);
		}

		::System::Void add_OnModelChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ADD_ONMODELCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnModelChange(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_REMOVE_ONMODELCHANGE_OFFSET))(this, a1);
		}

		::System::Void add_OnLinkRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_ADD_ONLINKREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnLinkRefresh(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_REMOVE_ONLINKREFRESH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_BuffStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_BUFFSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_DebuffStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_DEBUFFSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_OtherStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_OTHERSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* get_ModifierHintList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_MODIFIERHINTLIST_OFFSET))(this);
		}

		::Class_1_0471857D35382E2E* get_LinkedEnemy()
		{
			return ((::Class_1_0471857D35382E2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_LINKEDENEMY_OFFSET))(this);
		}

		::System::Void set_LinkedEnemy(::Class_1_0471857D35382E2E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_SET_LINKEDENEMY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_LinkedEnemyIconPathList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_LINKEDENEMYICONPATHLIST_OFFSET))(this);
		}

		::System::Boolean get_IsBossRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_ISBOSSRANK_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_ChangeToLinkModelAction()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_CHANGETOLINKMODELACTION_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* get_LocateStatusViewModel()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_LOCATESTATUSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_LocateStatusViewModel(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_SET_LOCATESTATUSVIEWMODEL_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_318* get_NavigateToTeamDetail()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::System::Boolean get_IsShowDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL_GET_ISSHOWDETAIL_OFFSET))(this);
		}
	};
}
