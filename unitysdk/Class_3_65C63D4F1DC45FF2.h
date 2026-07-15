#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect; }

#define CLASS_3_65C63D4F1DC45FF2_METHOD_3_C72B7042A1FE24F2_OFFSET UNITYSDK_OFFSET(0x17B2D040)
#define CLASS_3_65C63D4F1DC45FF2__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2D020)

inline static constexpr unsigned int Class_3_65C63D4F1DC45FF2_TypeDefinitionIndex = 34798;

class Class_3_65C63D4F1DC45FF2 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_65C63D4F1DC45FF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_C72B7042A1FE24F2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65C63D4F1DC45FF2_METHOD_3_C72B7042A1FE24F2_OFFSET))(this);
	}
};
