#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_METHOD_3_2BCCF71D84DF9277_OFFSET UNITYSDK_OFFSET(0x1961BA10)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_METHOD_3_3980F39C22DABD55_OFFSET UNITYSDK_OFFSET(0x1961BA70)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1961BA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Attack_TypeDefinitionIndex = 14971;

	class ChenLingBattleAbility_Attack : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Attacker; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BCCF71D84DF9277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Attack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Attack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_METHOD_3_2BCCF71D84DF9277_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3980F39C22DABD55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Attack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Attack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ATTACK_METHOD_3_3980F39C22DABD55_OFFSET))(a1, a2);
		}
	};
}
