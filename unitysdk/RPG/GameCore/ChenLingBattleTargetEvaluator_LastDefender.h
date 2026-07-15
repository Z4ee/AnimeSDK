#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_METHOD_3_BD3CA5D54AD401F0_OFFSET UNITYSDK_OFFSET(0x1C37EA10)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_METHOD_3_CB18E8EDE27D4C75_OFFSET UNITYSDK_OFFSET(0x1C37E970)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37EA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_LastDefender_TypeDefinitionIndex = 15159;

	class ChenLingBattleTargetEvaluator_LastDefender : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB18E8EDE27D4C75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_METHOD_3_CB18E8EDE27D4C75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD3CA5D54AD401F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_LastDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_LASTDEFENDER_METHOD_3_BD3CA5D54AD401F0_OFFSET))(a1, a2);
		}
	};
}
