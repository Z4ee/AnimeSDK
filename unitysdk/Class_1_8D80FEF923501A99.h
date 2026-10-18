#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1549;
class Class_1_1294FEF8E985635C;
class Class_1_463067CB4A542AEE_4;

#define CLASS_1_8D80FEF923501A99_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xBBE5880)
#define CLASS_1_8D80FEF923501A99_START_OFFSET UNITYSDK_OFFSET(0xBBE5790)
#define CLASS_1_8D80FEF923501A99_STOP_OFFSET UNITYSDK_OFFSET(0xBBE5820)
#define CLASS_1_8D80FEF923501A99__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE5710)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_TypeDefinitionIndex = 80724;

class Class_1_8D80FEF923501A99 : public ::System::Object
{
public:
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x10
	::Class_0_16E4307DCC419505_1549* LBNAGLIGKIO; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1549* a1, ::Class_1_1294FEF8E985635C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1549*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_STOP_OFFSET))(this);
	}

	::System::Void Method_1_CFC95121222309BD(::Class_1_463067CB4A542AEE_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_4*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_METHOD_1_CFC95121222309BD_OFFSET))(this, a1);
	}
};
