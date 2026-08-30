#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DicePointCountCompare; }

#define CLASS_3_C6AEAAD3D1CC3950_METHOD_3_C7FF21433486C346_OFFSET UNITYSDK_OFFSET(0x1C1A4E30)
#define CLASS_3_C6AEAAD3D1CC3950__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A4E10)

inline static constexpr unsigned int Class_3_C6AEAAD3D1CC3950_TypeDefinitionIndex = 35674;

class Class_3_C6AEAAD3D1CC3950 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_C6AEAAD3D1CC3950__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_C7FF21433486C346()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6AEAAD3D1CC3950_METHOD_3_C7FF21433486C346_OFFSET))(this);
	}
};
