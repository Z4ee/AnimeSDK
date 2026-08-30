#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsBoss; }

#define CLASS_3_B23C37D3EC823E69_METHOD_3_5829557A8D4350F5_OFFSET UNITYSDK_OFFSET(0x1C0A8CA0)
#define CLASS_3_B23C37D3EC823E69__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08F240)

inline static constexpr unsigned int Class_3_B23C37D3EC823E69_TypeDefinitionIndex = 35662;

class Class_3_B23C37D3EC823E69 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* EJJEEJENLDA; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_B23C37D3EC823E69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_5829557A8D4350F5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23C37D3EC823E69_METHOD_3_5829557A8D4350F5_OFFSET))(this);
	}
};
