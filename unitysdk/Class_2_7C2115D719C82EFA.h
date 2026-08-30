#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_C71DDDA66421C541;

#define CLASS_2_7C2115D719C82EFA_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1A6DFE30)
#define CLASS_2_7C2115D719C82EFA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A6DFF40)
#define CLASS_2_7C2115D719C82EFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6DFE10)

inline static constexpr unsigned int Class_2_7C2115D719C82EFA_TypeDefinitionIndex = 60475;

class Class_2_7C2115D719C82EFA : public ::Class_1_2231FD56C070349F
{
public:
	::System::Int32 BPILJHOEGJB; // 0x18
	::System::Boolean KHMOBLGNNOD; // 0x1C
	::System::UInt32 PEBIINOIIMP; // 0x20

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7C2115D719C82EFA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C2115D719C82EFA_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C2115D719C82EFA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
