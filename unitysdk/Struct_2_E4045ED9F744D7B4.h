#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E4045ED9F744D7B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161DFF0)
#define STRUCT_2_E4045ED9F744D7B4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x161E000)
#define STRUCT_2_E4045ED9F744D7B4_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x161DFE0)

inline static constexpr unsigned int Struct_2_E4045ED9F744D7B4_TypeDefinitionIndex = 65500;

struct alignas(1) Struct_2_E4045ED9F744D7B4
{
	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4045ED9F744D7B4_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4045ED9F744D7B4_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E4045ED9F744D7B4_EXECUTE_OFFSET))(this, a1);
	}
};
