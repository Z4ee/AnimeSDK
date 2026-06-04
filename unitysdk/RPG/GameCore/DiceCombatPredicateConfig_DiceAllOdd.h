#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_5EE8911BE7289182_OFFSET UNITYSDK_OFFSET(0x196AB590)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_7C5703199C50F9F0_OFFSET UNITYSDK_OFFSET(0x196AE9A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD__CTOR_OFFSET UNITYSDK_OFFSET(0x196AB540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllOdd_TypeDefinitionIndex = 15325;

	class DiceCombatPredicateConfig_DiceAllOdd : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C5703199C50F9F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_7C5703199C50F9F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5EE8911BE7289182(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_5EE8911BE7289182_OFFSET))(a1, a2);
		}
	};
}
