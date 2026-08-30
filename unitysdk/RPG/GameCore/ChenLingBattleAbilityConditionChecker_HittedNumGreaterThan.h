#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_METHOD_3_7EFFD6226D364F21_OFFSET UNITYSDK_OFFSET(0x1CFA3820)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_METHOD_3_899691572045C62D_OFFSET UNITYSDK_OFFSET(0x1CFA3750)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA3810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan_TypeDefinitionIndex = 15548;

	class ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* HittedNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_899691572045C62D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_METHOD_3_899691572045C62D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7EFFD6226D364F21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_HittedNumGreaterThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_HITTEDNUMGREATERTHAN_METHOD_3_7EFFD6226D364F21_OFFSET))(a1, a2);
		}
	};
}
