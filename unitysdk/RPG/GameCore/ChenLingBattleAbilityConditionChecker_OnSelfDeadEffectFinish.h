#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_METHOD_3_29211F6AC650F510_OFFSET UNITYSDK_OFFSET(0x1C375720)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_METHOD_3_DA2677CAA66FD015_OFFSET UNITYSDK_OFFSET(0x1C375680)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C375710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish_TypeDefinitionIndex = 15117;

	class ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA2677CAA66FD015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_METHOD_3_DA2677CAA66FD015_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29211F6AC650F510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadEffectFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADEFFECTFINISH_METHOD_3_29211F6AC650F510_OFFSET))(a1, a2);
		}
	};
}
