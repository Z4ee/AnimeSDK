#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_METHOD_3_4B95A9B1CA825AE9_OFFSET UNITYSDK_OFFSET(0x1CFABCC0)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_METHOD_3_B27C278E43D0100F_OFFSET UNITYSDK_OFFSET(0x1CFABC60)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFABCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_TargetHasBuff_TypeDefinitionIndex = 15639;

	class ChenLingBattlePredicate_TargetHasBuff : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::ChenLingBattleBuffType BuffType; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* StackCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B27C278E43D0100F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_METHOD_3_B27C278E43D0100F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4B95A9B1CA825AE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_METHOD_3_4B95A9B1CA825AE9_OFFSET))(a1, a2);
		}
	};
}
