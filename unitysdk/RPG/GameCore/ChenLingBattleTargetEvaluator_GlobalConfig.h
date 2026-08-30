#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_METHOD_3_15799E58BF897E63_OFFSET UNITYSDK_OFFSET(0x1CFACE90)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_METHOD_3_77854959E6B137E2_OFFSET UNITYSDK_OFFSET(0x1CFACF30)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFACF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_GlobalConfig_TypeDefinitionIndex = 15595;

	class ChenLingBattleTargetEvaluator_GlobalConfig : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15799E58BF897E63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_METHOD_3_15799E58BF897E63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77854959E6B137E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_GlobalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_GLOBALCONFIG_METHOD_3_77854959E6B137E2_OFFSET))(a1, a2);
		}
	};
}
