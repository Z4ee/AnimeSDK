#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1547;
class Class_1_463067CB4A542AEE_1;
class Class_1_D501FC103C8A2714;

#define CLASS_1_8D80FEF923501A99_3_METHOD_1_4EF6851BABE36C6E_OFFSET UNITYSDK_OFFSET(0xB6B1610)
#define CLASS_1_8D80FEF923501A99_3_START_OFFSET UNITYSDK_OFFSET(0xB6B1520)
#define CLASS_1_8D80FEF923501A99_3_STOP_OFFSET UNITYSDK_OFFSET(0xB6B15B0)
#define CLASS_1_8D80FEF923501A99_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B14A0)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_3_TypeDefinitionIndex = 81076;

class Class_1_8D80FEF923501A99_3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1547* PODJBLOPDAK; // 0x10
	::Class_1_D501FC103C8A2714* GJALMBBNNOF; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1547* a1, ::Class_1_D501FC103C8A2714* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1547*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_3__CTOR_OFFSET))(this, a1, a2);
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
