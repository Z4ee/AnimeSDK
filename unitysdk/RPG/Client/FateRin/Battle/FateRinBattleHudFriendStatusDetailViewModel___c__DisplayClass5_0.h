#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

class Class_1_42D96751C1376DDB;

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF7DD00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS5_0___REFRESHSTATUSLIST_B__0_OFFSET UNITYSDK_OFFSET(0xCF7E720)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendStatusDetailViewModel___c__DisplayClass5_0_TypeDefinitionIndex = 79596;

	class FateRinBattleHudFriendStatusDetailViewModel___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::EnumStatusType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshStatusList_b__0(::Class_1_42D96751C1376DDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_42D96751C1376DDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL___C__DISPLAYCLASS5_0___REFRESHSTATUSLIST_B__0_OFFSET))(this, a1);
		}
	};
}
