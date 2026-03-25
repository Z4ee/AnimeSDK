#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_543326C044264182;

#define CLASS_1_0F5195356F0210F0_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDE4F5F0)
#define CLASS_1_0F5195356F0210F0__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4F5E0)

inline static constexpr unsigned int Class_1_0F5195356F0210F0_TypeDefinitionIndex = 63409;

class Class_1_0F5195356F0210F0 : public ::System::Object
{
public:
	::Class_3_543326C044264182* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_543326C044264182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0_EXECUTE_OFFSET))(this);
	}
};
