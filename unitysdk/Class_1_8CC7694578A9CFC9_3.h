#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_C386A74518D39C8B;

#define CLASS_1_8CC7694578A9CFC9_3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C161E40)
#define CLASS_1_8CC7694578A9CFC9_3_METHOD_1_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x1C162A60)
#define CLASS_1_8CC7694578A9CFC9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C161E30)

inline static constexpr unsigned int Class_1_8CC7694578A9CFC9_3_TypeDefinitionIndex = 41194;

class Class_1_8CC7694578A9CFC9_3 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x10
	::Class_2_C386A74518D39C8B* PDENFEFCAGN; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_3_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_3_METHOD_1_C83B2479936B63C3_OFFSET))(this);
	}
};
