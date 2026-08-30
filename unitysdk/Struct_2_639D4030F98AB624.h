#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5DE58B5D0F3F645D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_639D4030F98AB624_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A9A0E0)
#define STRUCT_2_639D4030F98AB624_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3A9A0F0)

inline static constexpr unsigned int Struct_2_639D4030F98AB624_TypeDefinitionIndex = 57945;

struct alignas(8) Struct_2_639D4030F98AB624
{
	::Unity::Collections::NativeArray_1<::Struct_2_5DE58B5D0F3F645D> MFACGAHGEJM; // 0x10

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_639D4030F98AB624_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_639D4030F98AB624_EXECUTE_OFFSET))(this, a1);
	}
};
