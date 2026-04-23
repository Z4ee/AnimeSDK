#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DamageValueCompare; }

#define CLASS_3_6506CC44BCD81080_METHOD_3_E93FB20C44775568_OFFSET UNITYSDK_OFFSET(0x17D4E330)
#define CLASS_3_6506CC44BCD81080__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4E310)

inline static constexpr unsigned int Class_3_6506CC44BCD81080_TypeDefinitionIndex = 34105;

class Class_3_6506CC44BCD81080 : public ::Class_2_98A798C0C96648F9
{
public:
	::Class_2_843468DEB2C89684* Field_3_1; // 0x30
	::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_3_6506CC44BCD81080__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E93FB20C44775568()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6506CC44BCD81080_METHOD_3_E93FB20C44775568_OFFSET))(this);
	}
};
