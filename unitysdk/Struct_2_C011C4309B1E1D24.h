#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C62A9157F813660C.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_C011C4309B1E1D24_DISPOSE_OFFSET UNITYSDK_OFFSET(0x395F3E0)
#define STRUCT_2_C011C4309B1E1D24_EXECUTE_OFFSET UNITYSDK_OFFSET(0x395F3D0)

inline static constexpr unsigned int Struct_2_C011C4309B1E1D24_TypeDefinitionIndex = 67886;

struct alignas(8) Struct_2_C011C4309B1E1D24
{
	::Unity::Collections::NativeArray_1<::Struct_2_C62A9157F813660C> Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x20

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C011C4309B1E1D24_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C011C4309B1E1D24_DISPOSE_OFFSET))(this);
	}
};
