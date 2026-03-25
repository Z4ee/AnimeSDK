#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x166AE740)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_1___CALCDICESCOREBYAILEVEL_B__2_OFFSET UNITYSDK_OFFSET(0x166AE750)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass23_1_TypeDefinitionIndex = 28519;

class Class_1_C16931E567A100F1___c__DisplayClass23_1 : public ::System::Object
{
public:
	::System::UInt64 mask; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __calcDiceScoreByAILevel_b__2(::System::Int32 index)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS23_1___CALCDICESCOREBYAILEVEL_B__2_OFFSET))(this, index);
	}
};
