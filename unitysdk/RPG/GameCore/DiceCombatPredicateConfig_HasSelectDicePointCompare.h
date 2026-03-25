#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_6D4C0894849521F3_OFFSET UNITYSDK_OFFSET(0x17165900)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_D90EA4B8234A7E5E_OFFSET UNITYSDK_OFFSET(0x171672F0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x171658B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasSelectDicePointCompare_TypeDefinitionIndex = 14796;

	class DiceCombatPredicateConfig_HasSelectDicePointCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* DiceContentPoint; // 0x28
		::RPG::GameCore::DynamicFloat* Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D90EA4B8234A7E5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_D90EA4B8234A7E5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D4C0894849521F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_6D4C0894849521F3_OFFSET))(a1, a2);
		}
	};
}
