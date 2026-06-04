#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_And; }

#define CLASS_3_58E32EB299E34E59_METHOD_3_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x18B38FD0)
#define CLASS_3_58E32EB299E34E59__CTOR_OFFSET UNITYSDK_OFFSET(0x18B38FB0)

inline static constexpr unsigned int Class_3_58E32EB299E34E59_TypeDefinitionIndex = 34433;

class Class_3_58E32EB299E34E59 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_And* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_And* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_And*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_58E32EB299E34E59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58E32EB299E34E59_METHOD_3_1C298FA6BB9350FA_OFFSET))(this);
	}
};
