#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_543326C044264182;

#define CLASS_1_0F5195356F0210F0_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1468FEF0)
#define CLASS_1_0F5195356F0210F0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1468FEE0)

inline static constexpr unsigned int Class_1_0F5195356F0210F0_1_TypeDefinitionIndex = 73996;

class Class_1_0F5195356F0210F0_1 : public ::System::Object
{
public:
	::Class_3_543326C044264182* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_543326C044264182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0_1_EXECUTE_OFFSET))(this);
	}
};
