#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class SoldierPromotion; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9C390)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__GETSOLDIERPROMOTION_B__0_OFFSET UNITYSDK_OFFSET(0x9FA1970)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass45_0_TypeDefinitionIndex = 70095;

	class ChenLingBattleGameSession___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::UInt32 configID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSoldierPromotion_b__0(::RPG::Client::ChenLingBattle::SoldierPromotion* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierPromotion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS45_0__GETSOLDIERPROMOTION_B__0_OFFSET))(this, x);
		}
	};
}
