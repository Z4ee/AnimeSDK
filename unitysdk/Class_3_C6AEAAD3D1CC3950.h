#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DicePointCountCompare; }

#define CLASS_3_C6AEAAD3D1CC3950_METHOD_3_6319F5A4521BE9B4_OFFSET UNITYSDK_OFFSET(0x17DD11F0)
#define CLASS_3_C6AEAAD3D1CC3950__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD11D0)

inline static constexpr unsigned int Class_3_C6AEAAD3D1CC3950_TypeDefinitionIndex = 34149;

class Class_3_C6AEAAD3D1CC3950 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_C6AEAAD3D1CC3950__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_6319F5A4521BE9B4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6AEAAD3D1CC3950_METHOD_3_6319F5A4521BE9B4_OFFSET))(this);
	}
};
