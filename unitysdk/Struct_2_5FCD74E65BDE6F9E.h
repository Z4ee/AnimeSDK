#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_4.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_5FCD74E65BDE6F9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14234D0)
#define STRUCT_2_5FCD74E65BDE6F9E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14234E0)
#define STRUCT_2_5FCD74E65BDE6F9E_METHOD_2_5E2A6417215E1BDA_OFFSET UNITYSDK_OFFSET(0x14234C0)

inline static constexpr unsigned int Struct_2_5FCD74E65BDE6F9E_TypeDefinitionIndex = 58219;

struct alignas(8) Struct_2_5FCD74E65BDE6F9E
{
	::Unity::Collections::NativeArray_1<::Struct_2_4C8453486C91E3A1_4> Field_2_0; // 0x10

	::System::Void Method_2_5E2A6417215E1BDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5FCD74E65BDE6F9E_METHOD_2_5E2A6417215E1BDA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5FCD74E65BDE6F9E_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5FCD74E65BDE6F9E_EXECUTE_OFFSET))(this, a1);
	}
};
