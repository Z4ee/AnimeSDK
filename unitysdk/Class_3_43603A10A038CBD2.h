#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CustomValueCompareEX; }

#define CLASS_3_43603A10A038CBD2_METHOD_3_105D5E294C49B6A3_OFFSET UNITYSDK_OFFSET(0x1C1F6280)
#define CLASS_3_43603A10A038CBD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F6260)

inline static constexpr unsigned int Class_3_43603A10A038CBD2_TypeDefinitionIndex = 35673;

class Class_3_43603A10A038CBD2 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_43603A10A038CBD2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_105D5E294C49B6A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43603A10A038CBD2_METHOD_3_105D5E294C49B6A3_OFFSET))(this);
	}
};
