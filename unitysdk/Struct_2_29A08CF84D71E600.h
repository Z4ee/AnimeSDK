#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_5.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_29A08CF84D71E600_DISPOSE_OFFSET UNITYSDK_OFFSET(0x395F110)
#define STRUCT_2_29A08CF84D71E600_EXECUTE_OFFSET UNITYSDK_OFFSET(0x395F120)
#define STRUCT_2_29A08CF84D71E600_METHOD_2_5E2A6417215E1BDA_OFFSET UNITYSDK_OFFSET(0x395F100)

inline static constexpr unsigned int Struct_2_29A08CF84D71E600_TypeDefinitionIndex = 67872;

struct alignas(8) Struct_2_29A08CF84D71E600
{
	::Unity::Collections::NativeArray_1<::Struct_2_4C8453486C91E3A1_5> Field_2_0; // 0x10

	::System::Void Method_2_5E2A6417215E1BDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_29A08CF84D71E600_METHOD_2_5E2A6417215E1BDA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_29A08CF84D71E600_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_29A08CF84D71E600_EXECUTE_OFFSET))(this, a1);
	}
};
