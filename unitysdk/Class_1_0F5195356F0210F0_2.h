#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_543326C044264182;

#define CLASS_1_0F5195356F0210F0_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11EEC4B0)
#define CLASS_1_0F5195356F0210F0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11EEC4A0)

inline static constexpr unsigned int Class_1_0F5195356F0210F0_2_TypeDefinitionIndex = 77480;

class Class_1_0F5195356F0210F0_2 : public ::System::Object
{
public:
	::Class_3_543326C044264182* PDENFEFCAGN; // 0x10

	::System::Void _ctor(::Class_3_543326C044264182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F5195356F0210F0_2_EXECUTE_OFFSET))(this);
	}
};
