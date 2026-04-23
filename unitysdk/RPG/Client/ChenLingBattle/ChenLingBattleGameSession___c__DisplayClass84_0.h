#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Condition; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9F470)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS84_0___UPDATESOLDIERPROMOTION_B__0_OFFSET UNITYSDK_OFFSET(0x9FA1B30)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass84_0_TypeDefinitionIndex = 70100;

	class ChenLingBattleGameSession___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Condition* condition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateSoldierPromotion_b__0(::RPG::Client::ChenLingBattle::Condition* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS84_0___UPDATESOLDIERPROMOTION_B__0_OFFSET))(this, x);
		}
	};
}
