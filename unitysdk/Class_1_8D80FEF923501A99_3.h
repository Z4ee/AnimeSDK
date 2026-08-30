#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1347;
class Class_1_463067CB4A542AEE_1;
class Class_1_5F4D64A4B97E38F9;

#define CLASS_1_8D80FEF923501A99_3_METHOD_1_4EF6851BABE36C6E_OFFSET UNITYSDK_OFFSET(0x18E36F00)
#define CLASS_1_8D80FEF923501A99_3_START_OFFSET UNITYSDK_OFFSET(0x18E36E10)
#define CLASS_1_8D80FEF923501A99_3_STOP_OFFSET UNITYSDK_OFFSET(0x18E36EA0)
#define CLASS_1_8D80FEF923501A99_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18E36D90)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_3_TypeDefinitionIndex = 79751;

class Class_1_8D80FEF923501A99_3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1347* PODJBLOPDAK; // 0x10
	::Class_1_5F4D64A4B97E38F9* GJALMBBNNOF; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1347* a1, ::Class_1_5F4D64A4B97E38F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1347*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_3_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_3_STOP_OFFSET))(this);
	}

	::System::Void Method_1_4EF6851BABE36C6E(::Class_1_463067CB4A542AEE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_1*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_3_METHOD_1_4EF6851BABE36C6E_OFFSET))(this, a1);
	}
};
