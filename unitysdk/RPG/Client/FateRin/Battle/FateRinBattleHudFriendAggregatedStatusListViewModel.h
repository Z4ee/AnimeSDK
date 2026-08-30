#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass3_0.h"

class Class_1_42D96751C1376DDB;
class Class_1_5F4D64A4B97E38F9;
class Class_1_84DA91D3CFCB2E68;
class Class_1_B9D6E7E76075C6E2_3;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET UNITYSDK_OFFSET(0xCF7CB90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET UNITYSDK_OFFSET(0xCF7CB50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF7BE00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCF7C3B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0xCF7C460)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET UNITYSDK_OFFSET(0xCF7C000)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_3_0_OFFSET UNITYSDK_OFFSET(0xCF7C5D0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendAggregatedStatusListViewModel_TypeDefinitionIndex = 79591;

	class FateRinBattleHudFriendAggregatedStatusListViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses; // 0x28
		::Class_1_84DA91D3CFCB2E68* _Model; // 0x30
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x38
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses_ReadOnly; // 0x40
		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OpenStatusDetailAction_k__BackingField; // 0x48

		::System::Void _ctor(::Class_1_84DA91D3CFCB2E68* a1, ::Class_1_5F4D64A4B97E38F9* a2, ::Class_1_E79EE3670D2EC49A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84DA91D3CFCB2E68*, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnBattleStatusesModelChangeMessage(::Class_1_B9D6E7E76075C6E2_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnOpendStatusDetail(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatuses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_Statuses()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_OpenStatusDetailAction()
		{
			return ((::Class_0_16E4307DCC419505_320<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET))(this);
		}

		::System::Void __RefreshStatuses_g___AddStatuses_3_0(::System::Collections::Generic::IEnumerable_1<::Class_1_42D96751C1376DDB*>* a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass3_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_42D96751C1376DDB*>*, ::RPG::Client::FateRin::Battle::FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_3_0_OFFSET))(this, a1, a2);
		}
	};
}
