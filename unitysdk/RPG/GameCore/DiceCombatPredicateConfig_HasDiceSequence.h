#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_A39D2410C3278493_OFFSET UNITYSDK_OFFSET(0x17167140)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_D6ED812B542AADE3_OFFSET UNITYSDK_OFFSET(0x17165220)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x171651D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDiceSequence_TypeDefinitionIndex = 14782;

	class DiceCombatPredicateConfig_HasDiceSequence : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A39D2410C3278493(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_A39D2410C3278493_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D6ED812B542AADE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_D6ED812B542AADE3_OFFSET))(a1, a2);
		}
	};
}
