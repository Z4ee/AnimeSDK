#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_62AF41E3F63F6FA1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x970050)
#define STRUCT_2_62AF41E3F63F6FA1_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x970000)

inline static constexpr unsigned int Struct_2_62AF41E3F63F6FA1_TypeDefinitionIndex = 87674;

struct alignas(4) Struct_2_62AF41E3F63F6FA1
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_62AF41E3F63F6FA1_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_62AF41E3F63F6FA1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
