#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0.h"

class Class_1_0471857D35382E2E;
class Class_1_42D96751C1376DDB;
class Class_1_B9D6E7E76075C6E2_3;
class Class_1_D501FC103C8A2714;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
template <typename T> class Class_0_16E4307DCC419505_399;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEC90C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET UNITYSDK_OFFSET(0xCEC9B20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET UNITYSDK_OFFSET(0xCEC9AE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEB1C00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCEC9360)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0xCEC93E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET UNITYSDK_OFFSET(0xCEC8AF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_4_0_OFFSET UNITYSDK_OFFSET(0xCEC9550)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEnemyAggregatedStatusListViewModel_TypeDefinitionIndex = 80906;

	class FateRinBattleHudEnemyAggregatedStatusListViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x20
		::Class_0_16E4307DCC419505_399<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OpenStatusDetailAction_k__BackingField; // 0x28
		::Class_1_0471857D35382E2E* _Model; // 0x30
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses_ReadOnly; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses; // 0x40
		::Class_1_D501FC103C8A2714* _Messenger; // 0x48

		::System::Void _ctor(::Class_1_0471857D35382E2E* a1, ::Class_1_D501FC103C8A2714* a2, ::Class_1_E79EE3670D2EC49A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0471857D35382E2E*, ::Class_1_D501FC103C8A2714*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleStatusesModelChangeMessage(::Class_1_B9D6E7E76075C6E2_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnOpendStatusDetail(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatuses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_Statuses()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_399<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_OpenStatusDetailAction()
		{
			return ((::Class_0_16E4307DCC419505_399<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET))(this);
		}

		::System::Void __RefreshStatuses_g___AddStatuses_4_0(::System::Collections::Generic::IEnumerable_1<::Class_1_42D96751C1376DDB*>* a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_42D96751C1376DDB*>*, ::RPG::Client::FateRin::Battle::FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_4_0_OFFSET))(this, a1, a2);
		}
	};
}
