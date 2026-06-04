#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllOdd; }

#define CLASS_3_EC3CCFB71C447D0B_METHOD_3_C650F512E2A0007B_OFFSET UNITYSDK_OFFSET(0x18AFADB0)
#define CLASS_3_EC3CCFB71C447D0B__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFAD90)

inline static constexpr unsigned int Class_3_EC3CCFB71C447D0B_TypeDefinitionIndex = 34412;

class Class_3_EC3CCFB71C447D0B : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_EC3CCFB71C447D0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_C650F512E2A0007B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC3CCFB71C447D0B_METHOD_3_C650F512E2A0007B_OFFSET))(this);
	}
};
