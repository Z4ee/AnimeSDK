#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattlePredicate; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_BRANCH_METHOD_3_5499596C08154FEA_OFFSET UNITYSDK_OFFSET(0x1961BB80)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_BRANCH_METHOD_3_F05E3BC3E2575B8B_OFFSET UNITYSDK_OFFSET(0x1961BB20)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_BRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1961BB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Branch_TypeDefinitionIndex = 14974;

	class ChenLingBattleAbility_Branch : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* TrueNodes; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* FalseNodes; // 0x18
		::RPG::GameCore::BaseChenLingBattlePredicate* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_BRANCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F05E3BC3E2575B8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Branch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Branch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_BRANCH_METHOD_3_F05E3BC3E2575B8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5499596C08154FEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Branch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Branch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_BRANCH_METHOD_3_5499596C08154FEA_OFFSET))(a1, a2);
		}
	};
}
