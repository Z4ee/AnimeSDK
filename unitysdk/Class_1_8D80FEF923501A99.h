#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1265;
class Class_1_463067CB4A542AEE_4;
class Class_1_5F4D64A4B97E38F9;

#define CLASS_1_8D80FEF923501A99_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x149C34F0)
#define CLASS_1_8D80FEF923501A99_START_OFFSET UNITYSDK_OFFSET(0x149C3400)
#define CLASS_1_8D80FEF923501A99_STOP_OFFSET UNITYSDK_OFFSET(0x149C3490)
#define CLASS_1_8D80FEF923501A99__CTOR_OFFSET UNITYSDK_OFFSET(0x149C3380)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_TypeDefinitionIndex = 75767;

class Class_1_8D80FEF923501A99 : public ::System::Object
{
public:
	::Class_1_5F4D64A4B97E38F9* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1265* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1265* a1, ::Class_1_5F4D64A4B97E38F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1265*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99__CTOR_OFFSET))(this, a1, a2);
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
