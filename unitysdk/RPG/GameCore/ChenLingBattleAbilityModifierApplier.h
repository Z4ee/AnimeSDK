#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_A3DB1033EF65E4B6_OFFSET UNITYSDK_OFFSET(0x17078C90)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_C34DE50DAA8DC5EC_OFFSET UNITYSDK_OFFSET(0x17078C30)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x17078C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityModifierApplier_TypeDefinitionIndex = 14502;

	class ChenLingBattleAbilityModifierApplier : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* Effects; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C34DE50DAA8DC5EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_C34DE50DAA8DC5EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3DB1033EF65E4B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_A3DB1033EF65E4B6_OFFSET))(a1, a2);
		}
	};
}
