#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F0DFD9050ADF2EDC_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x61E7A0)
#define STRUCT_2_F0DFD9050ADF2EDC_METHOD_2_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x61E810)
#define STRUCT_2_F0DFD9050ADF2EDC_METHOD_2_F3D7D2AD64A5C158_OFFSET UNITYSDK_OFFSET(0x61E800)

inline static constexpr unsigned int Struct_2_F0DFD9050ADF2EDC_TypeDefinitionIndex = 77322;

struct alignas(1) Struct_2_F0DFD9050ADF2EDC
{
	::System::Boolean Field_2_0; // 0x10

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0DFD9050ADF2EDC_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_2_F3D7D2AD64A5C158(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_F0DFD9050ADF2EDC_METHOD_2_F3D7D2AD64A5C158_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0DFD9050ADF2EDC_METHOD_2_DF3C54A5ADEABAF1_OFFSET))(this);
	}
};
