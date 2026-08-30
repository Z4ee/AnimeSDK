#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLEBEGINAFTERSECONDS_METHOD_3_6E300EDE7C9396AB_OFFSET UNITYSDK_OFFSET(0x1E005C70)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLEBEGINAFTERSECONDS_METHOD_3_7D04B3EAE453AC37_OFFSET UNITYSDK_OFFSET(0x1E005BA0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLEBEGINAFTERSECONDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E005C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnBattleBeginAfterSeconds_TypeDefinitionIndex = 15555;

	class ChenLingBattleAbilityConditionChecker_OnBattleBeginAfterSeconds : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Seconds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLEBEGINAFTERSECONDS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D04B3EAE453AC37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleBeginAfterSeconds*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleBeginAfterSeconds*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLEBEGINAFTERSECONDS_METHOD_3_7D04B3EAE453AC37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E300EDE7C9396AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleBeginAfterSeconds* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleBeginAfterSeconds*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLEBEGINAFTERSECONDS_METHOD_3_6E300EDE7C9396AB_OFFSET))(a1, a2);
		}
	};
}
