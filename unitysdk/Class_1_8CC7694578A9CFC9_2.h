#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_C386A74518D39C8B;

#define CLASS_1_8CC7694578A9CFC9_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C36A030)
#define CLASS_1_8CC7694578A9CFC9_2_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1C36A570)
#define CLASS_1_8CC7694578A9CFC9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C36A010)

inline static constexpr unsigned int Class_1_8CC7694578A9CFC9_2_TypeDefinitionIndex = 41177;

class Class_1_8CC7694578A9CFC9_2 : public ::System::Object
{
public:
	static ::Class_2_C386A74518D39C8B** StaticGet_FKGGBEAELPE()
	{
		return (::Class_2_C386A74518D39C8B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CC7694578A9CFC9_2_TypeDefinitionIndex)->GetStaticField(0x1F170);
	}
	static ::Class_1_D33B7D6901AE39E9** StaticGet_BJPFDPILDDK()
	{
		return (::Class_1_D33B7D6901AE39E9**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CC7694578A9CFC9_2_TypeDefinitionIndex)->GetStaticField(0x1F178);
	}

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_2_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_2_TEARDOWN_OFFSET))(this);
	}
};
