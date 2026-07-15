#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_METHOD_3_EFD9730EA81F09B4_OFFSET UNITYSDK_OFFSET(0x1C37E170)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_METHOD_3_FF9B618AC7AB4409_OFFSET UNITYSDK_OFFSET(0x1C37E0D0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37E160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_Attacker_TypeDefinitionIndex = 15161;

	class ChenLingBattleTargetEvaluator_Attacker : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF9B618AC7AB4409(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_METHOD_3_FF9B618AC7AB4409_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EFD9730EA81F09B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_Attacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_ATTACKER_METHOD_3_EFD9730EA81F09B4_OFFSET))(a1, a2);
		}
	};
}
