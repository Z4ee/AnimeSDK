#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_04A51BA8F6660E43_OFFSET UNITYSDK_OFFSET(0x1D829CC0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_5EE8911BE7289182_OFFSET UNITYSDK_OFFSET(0x1D826FF0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D826FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllOdd_TypeDefinitionIndex = 15926;

	class DiceCombatPredicateConfig_DiceAllOdd : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_04A51BA8F6660E43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_04A51BA8F6660E43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5EE8911BE7289182(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_5EE8911BE7289182_OFFSET))(a1, a2);
		}
	};
}
