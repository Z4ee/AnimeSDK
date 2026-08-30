#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_28208B86039B7770_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A680)
#define STRUCT_2_28208B86039B7770_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8A690)
#define STRUCT_2_28208B86039B7770_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x8A670)

inline static constexpr unsigned int Struct_2_28208B86039B7770_TypeDefinitionIndex = 71039;

struct alignas(1) Struct_2_28208B86039B7770
{
	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_28208B86039B7770_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_28208B86039B7770_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_28208B86039B7770_EXECUTE_OFFSET))(this, a1);
	}
};
