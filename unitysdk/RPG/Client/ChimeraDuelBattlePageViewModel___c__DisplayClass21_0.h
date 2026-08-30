#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;
namespace RPG::Client { class ChimeraDuelBattlePageViewModel_TeamViewModel; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BDB10)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__DISPLAYCLASS21_0___CREATEFORCHALLENGEBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x1C1BFBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelBattlePageViewModel___c__DisplayClass21_0_TypeDefinitionIndex = 63463;

	class ChimeraDuelBattlePageViewModel___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* info; // 0x10
		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* enemyTeam; // 0x18
		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* allyTeam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateForChallengeBattle_b__0(::Class_1_C563E5E77DCDB6EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL___C__DISPLAYCLASS21_0___CREATEFORCHALLENGEBATTLE_B__0_OFFSET))(this, a1);
		}
	};
}
