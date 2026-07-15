#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"

class Class_0_16E4307DCC419505_1039;
class Class_1_5F4D64A4B97E38F9;
class Class_1_B9D6E7E76075C6E2_2;
class Class_1_F9FBCC956DFCF137_36;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetSingleViewModel; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B48EB20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48E600)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1B48ECB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B48EC30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B48E6F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___REFRESHVIEWMODEL_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B48ED90)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTargetViewModel_TypeDefinitionIndex = 75978;

	class FateRinBattleHudTargetViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel*>* TargetViewModelList; // 0x20
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x28
		::Class_1_B9D6E7E76075C6E2_2* _EnemyModel; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_1039*>* _CrosshairConfigDict; // 0x38

		::System::Void _ctor(::Class_1_B9D6E7E76075C6E2_2* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2_2*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleEnemyStateModelChangeMessage(::Class_1_F9FBCC956DFCF137_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1039* _GetConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Class_0_16E4307DCC419505_1039*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__GETCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean __RefreshViewModel_b__3_0(::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___REFRESHVIEWMODEL_B__3_0_OFFSET))(this, a1);
		}
	};
}
