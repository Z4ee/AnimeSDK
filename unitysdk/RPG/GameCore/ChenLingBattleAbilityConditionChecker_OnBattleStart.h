#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLESTART_METHOD_3_464CA4072D882414_OFFSET UNITYSDK_OFFSET(0x1CFA3A90)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLESTART_METHOD_3_A00494A578F6F2E9_OFFSET UNITYSDK_OFFSET(0x1CFA39F0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA3A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnBattleStart_TypeDefinitionIndex = 15550;

	class ChenLingBattleAbilityConditionChecker_OnBattleStart : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A00494A578F6F2E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLESTART_METHOD_3_A00494A578F6F2E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_464CA4072D882414(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnBattleStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONBATTLESTART_METHOD_3_464CA4072D882414_OFFSET))(a1, a2);
		}
	};
}
