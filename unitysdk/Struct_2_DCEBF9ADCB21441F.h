#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DCEBF9ADCB21441F_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x161D5A0)
#define STRUCT_2_DCEBF9ADCB21441F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x161D580)

inline static constexpr unsigned int Struct_2_DCEBF9ADCB21441F_TypeDefinitionIndex = 52694;

struct alignas(4) Struct_2_DCEBF9ADCB21441F
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DCEBF9ADCB21441F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DCEBF9ADCB21441F_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
