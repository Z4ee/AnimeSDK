#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2D1F0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_1___CALCDICESCOREBYAILEVEL_B__2_OFFSET UNITYSDK_OFFSET(0x18A2D200)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass37_1_TypeDefinitionIndex = 34486;

class Class_1_C16931E567A100F1___c__DisplayClass37_1 : public ::System::Object
{
public:
	::System::UInt64 mask; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __calcDiceScoreByAILevel_b__2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS37_1___CALCDICESCOREBYAILEVEL_B__2_OFFSET))(this, a1);
	}
};
