#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnyContent; }

#define CLASS_3_DAB1A38314F662AF_METHOD_3_6675531D375F235D_OFFSET UNITYSDK_OFFSET(0x17D50EF0)
#define CLASS_3_DAB1A38314F662AF__CTOR_OFFSET UNITYSDK_OFFSET(0x17D50ED0)

inline static constexpr unsigned int Class_3_DAB1A38314F662AF_TypeDefinitionIndex = 34133;

class Class_3_DAB1A38314F662AF : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_DAB1A38314F662AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_6675531D375F235D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB1A38314F662AF_METHOD_3_6675531D375F235D_OFFSET))(this);
	}
};
