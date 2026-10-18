#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_METHOD_3_54DA1333745B694C_OFFSET UNITYSDK_OFFSET(0x1D5507D0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_METHOD_3_ED40548F0794147E_OFFSET UNITYSDK_OFFSET(0x1D550830)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D550820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_EnemyWithinRadius_TypeDefinitionIndex = 15720;

	class ChenLingBattleAbilityConditionChecker_EnemyWithinRadius : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Radius; // 0x10
		::System::Boolean IntersectWithTargetCollsion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_54DA1333745B694C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_METHOD_3_54DA1333745B694C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED40548F0794147E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_EnemyWithinRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ENEMYWITHINRADIUS_METHOD_3_ED40548F0794147E_OFFSET))(a1, a2);
		}
	};
}
