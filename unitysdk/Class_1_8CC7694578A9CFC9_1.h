#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_C386A74518D39C8B;

#define CLASS_1_8CC7694578A9CFC9_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x168DD0B0)
#define CLASS_1_8CC7694578A9CFC9_1_METHOD_1_C83B2479936B63C3_OFFSET UNITYSDK_OFFSET(0x168DDC00)
#define CLASS_1_8CC7694578A9CFC9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x168DD0A0)

inline static constexpr unsigned int Class_1_8CC7694578A9CFC9_1_TypeDefinitionIndex = 32948;

class Class_1_8CC7694578A9CFC9_1 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::Class_2_C386A74518D39C8B* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_1_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_C83B2479936B63C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_1_METHOD_1_C83B2479936B63C3_OFFSET))(this);
	}
};
