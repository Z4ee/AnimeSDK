#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1550;
class Class_1_1294FEF8E985635C;
class Class_1_463067CB4A542AEE_1;

#define CLASS_1_8D80FEF923501A99_3_METHOD_1_4EF6851BABE36C6E_OFFSET UNITYSDK_OFFSET(0xB6AA9E0)
#define CLASS_1_8D80FEF923501A99_3_START_OFFSET UNITYSDK_OFFSET(0xB6AA8F0)
#define CLASS_1_8D80FEF923501A99_3_STOP_OFFSET UNITYSDK_OFFSET(0xB6AA980)
#define CLASS_1_8D80FEF923501A99_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB6AA870)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_3_TypeDefinitionIndex = 81075;

class Class_1_8D80FEF923501A99_3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1550* PODJBLOPDAK; // 0x10
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1550* a1, ::Class_1_1294FEF8E985635C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1550*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_3__CTOR_OFFSET))(this, a1, a2);
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
