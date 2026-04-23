#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsBoss; }

#define CLASS_3_B23C37D3EC823E69_METHOD_3_343259340A59888D_OFFSET UNITYSDK_OFFSET(0x17CBE910)
#define CLASS_3_B23C37D3EC823E69__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBE8F0)

inline static constexpr unsigned int Class_3_B23C37D3EC823E69_TypeDefinitionIndex = 34137;

class Class_3_B23C37D3EC823E69 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_B23C37D3EC823E69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_343259340A59888D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B23C37D3EC823E69_METHOD_3_343259340A59888D_OFFSET))(this);
	}
};
