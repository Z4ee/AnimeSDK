#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1347;
class Class_0_16E4307DCC419505_1371;
class Class_0_16E4307DCC419505_318;
class Class_1_96586C089CD5CA69;
class Class_1_97F9E33E53026E4C;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client { class UIController; }
namespace RPG::Client::FateRin::Battle { class FateRinPrepareBattleFriendAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class PrepareBattleMonsterViewModel; }
namespace RPG::Client::FateRin::Battle { class PrepareBattleTalkViewModel; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T> class Class_0_16E4307DCC419505_320;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_CLOSE_OFFSET UNITYSDK_OFFSET(0x1CBD9420)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_EDITDECK_OFFSET UNITYSDK_OFFSET(0x1CBD9410)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_FRIENDAREA_OFFSET UNITYSDK_OFFSET(0x1CBD93B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHARDMODE_OFFSET UNITYSDK_OFFSET(0x1CBD93E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHOUGUMAPFIGHT_OFFSET UNITYSDK_OFFSET(0x1CBD93A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_MONSTER_OFFSET UNITYSDK_OFFSET(0x1CBD93D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TALK_OFFSET UNITYSDK_OFFSET(0x1CBD93F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x1CBD9400)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SETSELECTEASYMODE_OFFSET UNITYSDK_OFFSET(0x1CBD8F70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SET_FRIENDAREA_OFFSET UNITYSDK_OFFSET(0x1CBD93C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CLOSE_OFFSET UNITYSDK_OFFSET(0x1CBD9340)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBD86D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD81C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__EDITDECK_OFFSET UNITYSDK_OFFSET(0x1CBD9230)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__TRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x1CBD8FC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL___EDITDECK_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CBD9430)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinPrepareBattleViewModel_TypeDefinitionIndex = 79655;

	class FateRinPrepareBattleViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_0_16E4307DCC419505_1347* _DeckRepository; // 0x20
		::Class_0_16E4307DCC419505_318* _EditDeck_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_1371* _OwnerVmFactory; // 0x30
		::Class_1_97F9E33E53026E4C* _HouguMapService; // 0x38
		::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel* _FriendArea_k__BackingField; // 0x40
		::Class_0_16E4307DCC419505_320<::RPG::Client::UIController*>* _Close_k__BackingField; // 0x48
		::Class_0_16E4307DCC419505_318* _TriggerBattle_k__BackingField; // 0x50
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ChallengeBuffIDs; // 0x58
		::Class_1_96586C089CD5CA69* _ChallengeService; // 0x60
		::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* _HouguMapFight; // 0x68
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x70
		::RPG::Client::FateRin::Battle::PrepareBattleMonsterViewModel* _Monster_k__BackingField; // 0x78
		::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel* _Talk_k__BackingField; // 0x80
		::System::Boolean _IsHardMode_k__BackingField; // 0x88
		::System::Boolean _IsHouguMapFight_k__BackingField; // 0x89
		::System::Boolean _IsSelectEasyMode; // 0x8A
		::System::UInt32 _ChallengeFightID; // 0x8C

		::System::Void _ctor(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1, ::Class_1_97F9E33E53026E4C* a2, ::Class_0_16E4307DCC419505_1347* a3, ::Class_0_16E4307DCC419505_1371* a4, ::Class_1_E79EE3670D2EC49A* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*, ::Class_1_97F9E33E53026E4C*, ::Class_0_16E4307DCC419505_1347*, ::Class_0_16E4307DCC419505_1371*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::Class_1_96586C089CD5CA69* a3, ::Class_0_16E4307DCC419505_1347* a4, ::Class_0_16E4307DCC419505_1371* a5, ::Class_1_E79EE3670D2EC49A* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::Class_1_96586C089CD5CA69*, ::Class_0_16E4307DCC419505_1347*, ::Class_0_16E4307DCC419505_1371*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetSelectEasyMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SETSELECTEASYMODE_OFFSET))(this, a1);
		}

		::System::Void _TriggerBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__TRIGGERBATTLE_OFFSET))(this);
		}

		::System::Void _EditDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__EDITDECK_OFFSET))(this);
		}

		::System::Void _Close(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CLOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHouguMapFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHOUGUMAPFIGHT_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel* get_FriendArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_FRIENDAREA_OFFSET))(this);
		}

		::System::Void set_FriendArea(::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SET_FRIENDAREA_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::PrepareBattleMonsterViewModel* get_Monster()
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleMonsterViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_MONSTER_OFFSET))(this);
		}

		::System::Boolean get_IsHardMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHARDMODE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel* get_Talk()
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TALK_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_TriggerBattle()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TRIGGERBATTLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_318* get_EditDeck()
		{
			return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_EDITDECK_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_320<::RPG::Client::UIController*>* get_Close()
		{
			return ((::Class_0_16E4307DCC419505_320<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_CLOSE_OFFSET))(this);
		}

		::System::Void __EditDeck_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL___EDITDECK_B__4_0_OFFSET))(this);
		}
	};
}
