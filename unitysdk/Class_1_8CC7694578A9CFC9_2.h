#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_C386A74518D39C8B;

#define CLASS_1_8CC7694578A9CFC9_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16853130)
#define CLASS_1_8CC7694578A9CFC9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16853120)

inline static constexpr unsigned int Class_1_8CC7694578A9CFC9_2_TypeDefinitionIndex = 32950;

class Class_1_8CC7694578A9CFC9_2 : public ::System::Object
{
public:
	::Class_2_C386A74518D39C8B* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_2_EXECUTE_OFFSET))(this);
	}
};
