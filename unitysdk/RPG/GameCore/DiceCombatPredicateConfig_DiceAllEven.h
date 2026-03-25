#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_28141D4C73A7FD87_OFFSET UNITYSDK_OFFSET(0x17166BE0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_52B2BAE2175B3267_OFFSET UNITYSDK_OFFSET(0x17163D50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN__CTOR_OFFSET UNITYSDK_OFFSET(0x17163D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllEven_TypeDefinitionIndex = 14784;

	class DiceCombatPredicateConfig_DiceAllEven : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_28141D4C73A7FD87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_28141D4C73A7FD87_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_52B2BAE2175B3267(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_52B2BAE2175B3267_OFFSET))(a1, a2);
		}
	};
}
