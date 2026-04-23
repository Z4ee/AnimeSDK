#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_B5C97371CDD670C1_OFFSET UNITYSDK_OFFSET(0x1886DA50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_DF1859790A515C03_OFFSET UNITYSDK_OFFSET(0x18870090)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886D9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDiceSequence_TypeDefinitionIndex = 15265;

	class DiceCombatPredicateConfig_HasDiceSequence : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DynamicFloat* MinLength; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF1859790A515C03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_DF1859790A515C03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B5C97371CDD670C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_B5C97371CDD670C1_OFFSET))(a1, a2);
		}
	};
}
