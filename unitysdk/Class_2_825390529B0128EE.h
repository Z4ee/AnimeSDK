#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_2_825390529B0128EE_METHOD_2_3DCAF09BEB5CADD1_OFFSET UNITYSDK_OFFSET(0x13ED9A60)
#define CLASS_2_825390529B0128EE_TICK_OFFSET UNITYSDK_OFFSET(0x13ED9B90)
#define CLASS_2_825390529B0128EE__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED9A50)

inline static constexpr unsigned int Class_2_825390529B0128EE_TypeDefinitionIndex = 35808;

class Class_2_825390529B0128EE : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_825390529B0128EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3DCAF09BEB5CADD1(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_825390529B0128EE_METHOD_2_3DCAF09BEB5CADD1_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_825390529B0128EE_TICK_OFFSET))(this, a1);
	}
};
