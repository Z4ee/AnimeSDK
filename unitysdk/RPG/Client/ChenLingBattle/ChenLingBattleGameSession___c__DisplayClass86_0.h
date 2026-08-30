#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Condition; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B953190)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS86_0__GETCLOSESTSATISFIEDCONDITIONSOLDIERS_B__0_OFFSET UNITYSDK_OFFSET(0x1B9553B0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass86_0_TypeDefinitionIndex = 75862;

	class ChenLingBattleGameSession___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Condition* condition; // 0x10
		::System::Func_2<::RPG::Client::ChenLingBattle::Condition*, ::System::Boolean>* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetClosestSatisfiedConditionSoldiers_b__0(::RPG::Client::ChenLingBattle::Condition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Condition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS86_0__GETCLOSESTSATISFIEDCONDITIONSOLDIERS_B__0_OFFSET))(this, a1);
		}
	};
}
