#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_METHOD_2_A1DE3F30E381A492_OFFSET UNITYSDK_OFFSET(0x186E6A30)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_METHOD_2_A889B81F668FCC63_OFFSET UNITYSDK_OFFSET(0x186E63B0)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x186E6A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleAbilityConditionChecker_TypeDefinitionIndex = 14881;

	class BaseChenLingBattleAbilityConditionChecker : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A889B81F668FCC63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_METHOD_2_A889B81F668FCC63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A1DE3F30E381A492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_METHOD_2_A1DE3F30E381A492_OFFSET))(a1, a2);
		}
	};
}
