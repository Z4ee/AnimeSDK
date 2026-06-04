#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B3FF63F50399180F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85130)
#define STRUCT_2_B3FF63F50399180F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x85140)
#define STRUCT_2_B3FF63F50399180F_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x85120)

inline static constexpr unsigned int Struct_2_B3FF63F50399180F_TypeDefinitionIndex = 66430;

struct alignas(1) Struct_2_B3FF63F50399180F
{
	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B3FF63F50399180F_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B3FF63F50399180F_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B3FF63F50399180F_EXECUTE_OFFSET))(this, a1);
	}
};
