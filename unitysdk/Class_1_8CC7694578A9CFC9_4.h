#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_C386A74518D39C8B;

#define CLASS_1_8CC7694578A9CFC9_4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C3A4890)
#define CLASS_1_8CC7694578A9CFC9_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A4880)

inline static constexpr unsigned int Class_1_8CC7694578A9CFC9_4_TypeDefinitionIndex = 41196;

class Class_1_8CC7694578A9CFC9_4 : public ::System::Object
{
public:
	::Class_2_C386A74518D39C8B* PDENFEFCAGN; // 0x10
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_4_EXECUTE_OFFSET))(this);
	}
};
