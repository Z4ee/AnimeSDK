#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class Condition; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB4C90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__ISNEEDCARDCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x9FB5010)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__ISNEEDCARDCONFIG_B__1_OFFSET UNITYSDK_OFFSET(0x9FB50B0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__ISNEEDCARDCONFIG_B__2_OFFSET UNITYSDK_OFFSET(0x9FB5150)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierPromotion___c__DisplayClass5_0_TypeDefinitionIndex = 70136;

	class SoldierPromotion___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::CardConfig* card; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsNeedCardConfig_b__0(::RPG::Client::ChenLingBattle::Condition* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__ISNEEDCARDCONFIG_B__0_OFFSET))(this, c);
		}

		::System::Boolean _IsNeedCardConfig_b__1(::RPG::Client::ChenLingBattle::Condition* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__ISNEEDCARDCONFIG_B__1_OFFSET))(this, c);
		}

		::System::Boolean _IsNeedCardConfig_b__2(::RPG::Client::ChenLingBattle::Condition* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROMOTION___C__DISPLAYCLASS5_0__ISNEEDCARDCONFIG_B__2_OFFSET))(this, c);
		}
	};
}
