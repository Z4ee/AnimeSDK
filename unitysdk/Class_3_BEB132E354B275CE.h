#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceTriple; }

#define CLASS_3_BEB132E354B275CE_METHOD_3_980641BEEB0F849F_OFFSET UNITYSDK_OFFSET(0x1C09CA20)
#define CLASS_3_BEB132E354B275CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08EBA0)

inline static constexpr unsigned int Class_3_BEB132E354B275CE_TypeDefinitionIndex = 35653;

class Class_3_BEB132E354B275CE : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* EBGNGMOIPDD; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_BEB132E354B275CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_980641BEEB0F849F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEB132E354B275CE_METHOD_3_980641BEEB0F849F_OFFSET))(this);
	}
};
