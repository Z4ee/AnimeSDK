#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CurrentTurnCompare; }

#define CLASS_3_4F5F9ADE43B410ED_METHOD_3_B991AA5072E9A99A_OFFSET UNITYSDK_OFFSET(0x18D53C50)
#define CLASS_3_4F5F9ADE43B410ED__CTOR_OFFSET UNITYSDK_OFFSET(0x18D23E80)

inline static constexpr unsigned int Class_3_4F5F9ADE43B410ED_TypeDefinitionIndex = 34806;

class Class_3_4F5F9ADE43B410ED : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_4F5F9ADE43B410ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B991AA5072E9A99A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F5F9ADE43B410ED_METHOD_3_B991AA5072E9A99A_OFFSET))(this);
	}
};
