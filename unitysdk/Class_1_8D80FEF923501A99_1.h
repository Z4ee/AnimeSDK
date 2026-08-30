#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1346;
class Class_1_463067CB4A542AEE_3;
class Class_1_5F4D64A4B97E38F9;

#define CLASS_1_8D80FEF923501A99_1_METHOD_1_FA4D4EF9EFA7D38E_OFFSET UNITYSDK_OFFSET(0x16088EE0)
#define CLASS_1_8D80FEF923501A99_1_START_OFFSET UNITYSDK_OFFSET(0x16088DF0)
#define CLASS_1_8D80FEF923501A99_1_STOP_OFFSET UNITYSDK_OFFSET(0x16088E80)
#define CLASS_1_8D80FEF923501A99_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16088D70)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_1_TypeDefinitionIndex = 79440;

class Class_1_8D80FEF923501A99_1 : public ::System::Object
{
public:
	::Class_1_5F4D64A4B97E38F9* GJALMBBNNOF; // 0x10
	::Class_0_16E4307DCC419505_1346* LBNAGLIGKIO; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1346* a1, ::Class_1_5F4D64A4B97E38F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1346*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_1_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_1_STOP_OFFSET))(this);
	}

	::System::Void Method_1_FA4D4EF9EFA7D38E(::Class_1_463067CB4A542AEE_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_3*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_1_METHOD_1_FA4D4EF9EFA7D38E_OFFSET))(this, a1);
	}
};
