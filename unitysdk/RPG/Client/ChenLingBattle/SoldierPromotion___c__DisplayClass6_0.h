#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Condition; }
namespace RPG::Client::ChenLingBattle { class HandCard; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9347190)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__0_OFFSET UNITYSDK_OFFSET(0x93476D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__1_OFFSET UNITYSDK_OFFSET(0x9347780)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__2_OFFSET UNITYSDK_OFFSET(0x9347830)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPromotion___c__DisplayClass6_0_TypeDefinitionIndex = 62138;

	class SoldierPromotion___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::HandCard* handCard; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetHandCardAffectCondition_b__0(::RPG::Client::ChenLingBattle::Condition* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__0_OFFSET))(this, c);
		}

		::System::Boolean _GetHandCardAffectCondition_b__1(::RPG::Client::ChenLingBattle::Condition* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__1_OFFSET))(this, c);
		}

		::System::Boolean _GetHandCardAffectCondition_b__2(::RPG::Client::ChenLingBattle::Condition* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS6_0__GETHANDCARDAFFECTCONDITION_B__2_OFFSET))(this, c);
		}
	};
}
