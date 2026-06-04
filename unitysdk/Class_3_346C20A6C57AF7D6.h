#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CurrentHPCompare; }

#define CLASS_3_346C20A6C57AF7D6_METHOD_3_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x189DE5A0)
#define CLASS_3_346C20A6C57AF7D6__CTOR_OFFSET UNITYSDK_OFFSET(0x189DE580)

inline static constexpr unsigned int Class_3_346C20A6C57AF7D6_TypeDefinitionIndex = 34425;

class Class_3_346C20A6C57AF7D6 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_346C20A6C57AF7D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_346C20A6C57AF7D6_METHOD_3_B556EADFE34BD60F_OFFSET))(this);
	}
};
