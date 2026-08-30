#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1368;
class Class_1_5F4D64A4B97E38F9;
class Class_1_84DA91D3CFCB2E68;
class Class_1_90698D4D8381BDC2;
class Class_1_B26E06FC40F846CD;
class Class_1_E79EE3670D2EC49A;
class Class_1_F248B058F5A06B98;
namespace RPG::Client::FateRin::Avatar { class IFateRinBattleAvatarViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHealthViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_AGGREGATEDSTATUSES_OFFSET UNITYSDK_OFFSET(0x1CA400A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_MASTER_OFFSET UNITYSDK_OFFSET(0x1CA400B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1CA400C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_TEAMHEALTH_OFFSET UNITYSDK_OFFSET(0x1CA40090)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3FEF0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendAreaViewModel_TypeDefinitionIndex = 79593;

	class FateRinBattleHudFriendAreaViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleHealthViewModel* _TeamHealth_k__BackingField; // 0x20
		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* _Servant_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_1368* _AggregatedStatuses_k__BackingField; // 0x30
		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* _Master_k__BackingField; // 0x38

		::System::Void _ctor(::Class_1_84DA91D3CFCB2E68* a1, ::Class_1_B26E06FC40F846CD* a2, ::Class_1_90698D4D8381BDC2* a3, ::Class_1_F248B058F5A06B98* a4, ::Class_1_5F4D64A4B97E38F9* a5, ::Class_1_E79EE3670D2EC49A* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84DA91D3CFCB2E68*, ::Class_1_B26E06FC40F846CD*, ::Class_1_90698D4D8381BDC2*, ::Class_1_F248B058F5A06B98*, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHealthViewModel* get_TeamHealth()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHealthViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_TEAMHEALTH_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1368* get_AggregatedStatuses()
		{
			return ((::Class_0_16E4307DCC419505_1368*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_AGGREGATEDSTATUSES_OFFSET))(this);
		}

		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* get_Master()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_MASTER_OFFSET))(this);
		}

		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* get_Servant()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_SERVANT_OFFSET))(this);
		}
	};
}
