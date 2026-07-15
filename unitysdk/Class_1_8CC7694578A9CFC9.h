#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_0F2988457304ACEC;

#define CLASS_1_8CC7694578A9CFC9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18106F40)
#define CLASS_1_8CC7694578A9CFC9_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18107480)
#define CLASS_1_8CC7694578A9CFC9__CTOR_OFFSET UNITYSDK_OFFSET(0x18106F20)

inline static constexpr unsigned int Class_1_8CC7694578A9CFC9_TypeDefinitionIndex = 40034;

class Class_1_8CC7694578A9CFC9 : public ::System::Object
{
public:
	static ::Class_1_D33B7D6901AE39E9** StaticGet_Field_1_0()
	{
		return (::Class_1_D33B7D6901AE39E9**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CC7694578A9CFC9_TypeDefinitionIndex)->GetStaticField(0x30300);
	}
	static ::Class_2_0F2988457304ACEC** StaticGet_Field_1_1()
	{
		return (::Class_2_0F2988457304ACEC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CC7694578A9CFC9_TypeDefinitionIndex)->GetStaticField(0x30308);
	}

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_0F2988457304ACEC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_2_0F2988457304ACEC*))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC7694578A9CFC9_TEARDOWN_OFFSET))(this);
	}
};
