#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BA48F385FE228ACF.h"
#include "unitysdk/System/ValueType.h"

class Class_3_D92ADC48CDFCC09B;

#define STRUCT_2_24A53FACD918DAF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x987260)
#define STRUCT_2_24A53FACD918DAF7_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x987270)
#define STRUCT_2_24A53FACD918DAF7__CTOR_OFFSET UNITYSDK_OFFSET(0x987250)

inline static constexpr unsigned int Struct_2_24A53FACD918DAF7_TypeDefinitionIndex = 34497;

struct alignas(8) Struct_2_24A53FACD918DAF7
{
	::Struct_2_BA48F385FE228ACF Field_2_0; // 0x10
	::Class_3_D92ADC48CDFCC09B* Field_2_1; // 0x18

	::System::Void _ctor(::Struct_2_BA48F385FE228ACF a1, ::Class_3_D92ADC48CDFCC09B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA48F385FE228ACF, ::Class_3_D92ADC48CDFCC09B*))((::PBYTE)hIl2Cpp + STRUCT_2_24A53FACD918DAF7__CTOR_OFFSET))(this, a1, a2);
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
