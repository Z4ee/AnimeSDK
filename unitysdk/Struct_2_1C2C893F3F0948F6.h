#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_1C2C893F3F0948F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150D70)
#define STRUCT_2_1C2C893F3F0948F6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x150D60)

inline static constexpr unsigned int Struct_2_1C2C893F3F0948F6_TypeDefinitionIndex = 71063;

struct alignas(8) Struct_2_1C2C893F3F0948F6
{
	::Unity::Collections::NativeArray_1<::Struct_2_74D97E08BFF70A55> PBAJCNKHLFG; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1C2C893F3F0948F6_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C2C893F3F0948F6_DISPOSE_OFFSET))(this);
	}
};
