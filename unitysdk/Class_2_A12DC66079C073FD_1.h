#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_C71DDDA66421C541;

#define CLASS_2_A12DC66079C073FD_1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19ADB360)
#define CLASS_2_A12DC66079C073FD_1_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x19ADB2C0)
#define CLASS_2_A12DC66079C073FD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADB2B0)

inline static constexpr unsigned int Class_2_A12DC66079C073FD_1_TypeDefinitionIndex = 60468;

class Class_2_A12DC66079C073FD_1 : public ::Class_1_2231FD56C070349F
{
public:
	::System::Boolean INJJGMIGFFD; // 0x18

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*))((::PBYTE)hIl2Cpp + CLASS_2_A12DC66079C073FD_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A12DC66079C073FD_1_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A12DC66079C073FD_1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
