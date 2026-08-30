#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Condition; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC37060)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS3_0__ISNEEDCONDITION_B__0_OFFSET UNITYSDK_OFFSET(0x1CC37910)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPromotion___c__DisplayClass3_0_TypeDefinitionIndex = 75896;

	class SoldierPromotion___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Condition* condition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsNeedCondition_b__0(::RPG::Client::ChenLingBattle::Condition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS3_0__ISNEEDCONDITION_B__0_OFFSET))(this, a1);
		}
	};
}
