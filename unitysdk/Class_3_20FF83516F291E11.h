#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsDefender; }

#define CLASS_3_20FF83516F291E11_METHOD_3_833A980C4D8DAF22_OFFSET UNITYSDK_OFFSET(0x1C1C0E10)
#define CLASS_3_20FF83516F291E11__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1C0DF0)

inline static constexpr unsigned int Class_3_20FF83516F291E11_TypeDefinitionIndex = 35666;

class Class_3_20FF83516F291E11 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* ACAALMEBIPC; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_20FF83516F291E11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_833A980C4D8DAF22()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20FF83516F291E11_METHOD_3_833A980C4D8DAF22_OFFSET))(this);
	}
};
