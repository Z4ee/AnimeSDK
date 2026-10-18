#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"

class Class_0_16E4307DCC419505_1206;
class Class_1_B9D6E7E76075C6E2_2;
class Class_1_D501FC103C8A2714;
class Class_1_F9FBCC956DFCF137_44;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetSingleViewModel; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED5CB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCED55E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__GETCONFIG_OFFSET UNITYSDK_OFFSET(0xCED5F60)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCED5ED0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCED56D0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTargetViewModel_TypeDefinitionIndex = 80936;

	class FateRinBattleHudTargetViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_D501FC103C8A2714* _Messenger; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::Class_0_16E4307DCC419505_1206*>* _CrosshairConfigDict; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel*>* TargetViewModelList; // 0x30
		::Class_1_B9D6E7E76075C6E2_2* _EnemyModel; // 0x38

		::System::Void _ctor(::Class_1_B9D6E7E76075C6E2_2* a1, ::Class_1_D501FC103C8A2714* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2_2*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleEnemyStateModelChangeMessage(::Class_1_F9FBCC956DFCF137_44* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1206* _GetConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Class_0_16E4307DCC419505_1206*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__GETCONFIG_OFFSET))(this, a1);
		}
	};
}
