#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

class Class_1_42D96751C1376DDB;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCEC31A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS10_0___REFRESHSTATUSLIST_B__0_OFFSET UNITYSDK_OFFSET(0xCEC3C30)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEnemyStatusDetailViewModel___c__DisplayClass10_0_TypeDefinitionIndex = 80910;

	class FateRinBattleHudEnemyStatusDetailViewModel___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EnumStatusType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshStatusList_b__0(::Class_1_42D96751C1376DDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_42D96751C1376DDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS10_0___REFRESHSTATUSLIST_B__0_OFFSET))(this, a1);
		}
	};
}
