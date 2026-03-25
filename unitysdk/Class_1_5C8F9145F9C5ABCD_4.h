#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;

#define CLASS_1_5C8F9145F9C5ABCD_4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9EE8560)
#define CLASS_1_5C8F9145F9C5ABCD_4__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE8550)

inline static constexpr unsigned int Class_1_5C8F9145F9C5ABCD_4_TypeDefinitionIndex = 63406;

class Class_1_5C8F9145F9C5ABCD_4 : public ::System::Object
{
public:
	::Class_3_543326C044264182* Field_1_1; // 0x10
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_4_EXECUTE_OFFSET))(this);
	}
};
