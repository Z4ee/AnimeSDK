#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1263;
class Class_1_463067CB4A542AEE_2;
class Class_1_5F4D64A4B97E38F9;

#define CLASS_1_8D80FEF923501A99_2_METHOD_1_82CC903830655FEA_OFFSET UNITYSDK_OFFSET(0x14A14CD0)
#define CLASS_1_8D80FEF923501A99_2_START_OFFSET UNITYSDK_OFFSET(0x14A14BE0)
#define CLASS_1_8D80FEF923501A99_2_STOP_OFFSET UNITYSDK_OFFSET(0x14A14C70)
#define CLASS_1_8D80FEF923501A99_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14A14B60)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_2_TypeDefinitionIndex = 76067;

class Class_1_8D80FEF923501A99_2 : public ::System::Object
{
public:
	::Class_1_5F4D64A4B97E38F9* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1263* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1263* a1, ::Class_1_5F4D64A4B97E38F9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1263*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_2_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_2_STOP_OFFSET))(this);
	}

	::System::Void Method_1_82CC903830655FEA(::Class_1_463067CB4A542AEE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_463067CB4A542AEE_2*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_2_METHOD_1_82CC903830655FEA_OFFSET))(this, a1);
	}
};
