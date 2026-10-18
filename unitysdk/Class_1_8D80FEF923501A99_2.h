#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1546;
class Class_1_463067CB4A542AEE_2;
class Class_1_D501FC103C8A2714;

#define CLASS_1_8D80FEF923501A99_2_METHOD_1_82CC903830655FEA_OFFSET UNITYSDK_OFFSET(0xB1B2C40)
#define CLASS_1_8D80FEF923501A99_2_START_OFFSET UNITYSDK_OFFSET(0xB1B2B50)
#define CLASS_1_8D80FEF923501A99_2_STOP_OFFSET UNITYSDK_OFFSET(0xB1B2BE0)
#define CLASS_1_8D80FEF923501A99_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB1B2AD0)

inline static constexpr unsigned int Class_1_8D80FEF923501A99_2_TypeDefinitionIndex = 81025;

class Class_1_8D80FEF923501A99_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1546* LBNAGLIGKIO; // 0x10
	::Class_1_D501FC103C8A2714* GJALMBBNNOF; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_1546* a1, ::Class_1_D501FC103C8A2714* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1546*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + CLASS_1_8D80FEF923501A99_2__CTOR_OFFSET))(this, a1, a2);
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
