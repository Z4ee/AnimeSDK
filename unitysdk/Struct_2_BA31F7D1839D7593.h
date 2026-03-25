#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_BA31F7D1839D7593_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8EEE0)
#define STRUCT_2_BA31F7D1839D7593_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA8EED0)

inline static constexpr unsigned int Struct_2_BA31F7D1839D7593_TypeDefinitionIndex = 58237;

struct alignas(8) Struct_2_BA31F7D1839D7593
{
	::Unity::Collections::NativeArray_1<::Struct_2_74D97E08BFF70A55> Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BA31F7D1839D7593_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BA31F7D1839D7593_DISPOSE_OFFSET))(this);
	}
};
