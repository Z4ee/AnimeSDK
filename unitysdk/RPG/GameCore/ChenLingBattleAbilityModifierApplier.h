#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_2D1A5915F0DF1734_OFFSET UNITYSDK_OFFSET(0x1C375AB0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_9C19DE207E5583D2_OFFSET UNITYSDK_OFFSET(0x1C375A50)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C375AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityModifierApplier_TypeDefinitionIndex = 15199;

	class ChenLingBattleAbilityModifierApplier : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* Effects; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C19DE207E5583D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_9C19DE207E5583D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D1A5915F0DF1734(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityModifierApplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYMODIFIERAPPLIER_METHOD_3_2D1A5915F0DF1734_OFFSET))(a1, a2);
		}
	};
}
