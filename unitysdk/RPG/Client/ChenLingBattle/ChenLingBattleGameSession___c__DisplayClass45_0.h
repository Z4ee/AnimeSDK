#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class SoldierPromotion; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA434D0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__GETSOLDIERPROMOTION_B__0_OFFSET UNITYSDK_OFFSET(0xCA48E70)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass45_0_TypeDefinitionIndex = 76333;

	class ChenLingBattleGameSession___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::UInt32 configID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSoldierPromotion_b__0(::RPG::Client::ChenLingBattle::SoldierPromotion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierPromotion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__GETSOLDIERPROMOTION_B__0_OFFSET))(this, a1);
		}
	};
}
