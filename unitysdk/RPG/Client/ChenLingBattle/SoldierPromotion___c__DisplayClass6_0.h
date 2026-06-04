#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Condition; }
namespace RPG::Client::ChenLingBattle { class HandCard; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5CEF40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__0_OFFSET UNITYSDK_OFFSET(0xB5CF480)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__1_OFFSET UNITYSDK_OFFSET(0xB5CF530)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__2_OFFSET UNITYSDK_OFFSET(0xB5CF5E0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPromotion___c__DisplayClass6_0_TypeDefinitionIndex = 70949;

	class SoldierPromotion___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::HandCard* handCard; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetHandCardAffectCondition_b__0(::RPG::Client::ChenLingBattle::Condition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandCardAffectCondition_b__1(::RPG::Client::ChenLingBattle::Condition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetHandCardAffectCondition_b__2(::RPG::Client::ChenLingBattle::Condition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__2_OFFSET))(this, a1);
		}
	};
}
