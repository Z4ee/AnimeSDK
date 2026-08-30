#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_C71DDDA66421C541;

#define CLASS_2_FA2E647D1A1F89AA_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x195B89C0)
#define CLASS_2_FA2E647D1A1F89AA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x195B8B10)
#define CLASS_2_FA2E647D1A1F89AA__CTOR_OFFSET UNITYSDK_OFFSET(0x195B89B0)
#define CLASS_2_FA2E647D1A1F89AA__START_B__3_0_OFFSET UNITYSDK_OFFSET(0x195B8B50)

inline static constexpr unsigned int Class_2_FA2E647D1A1F89AA_TypeDefinitionIndex = 60490;

class Class_2_FA2E647D1A1F89AA : public ::Class_1_2231FD56C070349F
{
public:
	::System::Single EANMMFONHNC; // 0x18
	::System::Boolean PIPLLENMLIM; // 0x1C

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _Start_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA2E647D1A1F89AA__START_B__3_0_OFFSET))(this);
	}
};
