#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_70F17981C477DE93.h"
#include "unitysdk/System/ValueType.h"

class Class_3_D92ADC48CDFCC09B;

#define STRUCT_2_24A53FACD918DAF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B1A70)
#define STRUCT_2_24A53FACD918DAF7_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9B1A80)
#define STRUCT_2_24A53FACD918DAF7__CTOR_OFFSET UNITYSDK_OFFSET(0x9B1A60)

inline static constexpr unsigned int Struct_2_24A53FACD918DAF7_TypeDefinitionIndex = 35265;

struct alignas(8) Struct_2_24A53FACD918DAF7
{
	::Struct_2_70F17981C477DE93 Field_2_1; // 0x10
	::Class_3_D92ADC48CDFCC09B* Field_2_0; // 0x18

	::System::Void _ctor(::Struct_2_70F17981C477DE93 a1, ::Class_3_D92ADC48CDFCC09B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_70F17981C477DE93, ::Class_3_D92ADC48CDFCC09B*))((::PBYTE)hIl2Cpp + STRUCT_2_24A53FACD918DAF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_24A53FACD918DAF7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_24A53FACD918DAF7_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
