#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_METHOD_4_104AF23C723C06A6_OFFSET UNITYSDK_OFFSET(0x17164830)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_METHOD_4_E919E8B6450E15D7_OFFSET UNITYSDK_OFFSET(0x17166EB0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x171647E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DicePointCountCompare_TypeDefinitionIndex = 14788;

	class DiceCombatPredicateConfig_DicePointCountCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DynamicFloat* Point; // 0x28
		::RPG::GameCore::DiceCombatValueCompare Logic; // 0x30
		::RPG::GameCore::DynamicFloat* Count; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E919E8B6450E15D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_METHOD_4_E919E8B6450E15D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_104AF23C723C06A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_METHOD_4_104AF23C723C06A6_OFFSET))(a1, a2);
		}
	};
}
