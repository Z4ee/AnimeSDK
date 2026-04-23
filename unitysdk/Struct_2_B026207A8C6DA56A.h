#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B026207A8C6DA56A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161EC10)
#define STRUCT_2_B026207A8C6DA56A_EXECUTE_OFFSET UNITYSDK_OFFSET(0x161EC20)
#define STRUCT_2_B026207A8C6DA56A_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x161EC00)

inline static constexpr unsigned int Struct_2_B026207A8C6DA56A_TypeDefinitionIndex = 65512;

struct alignas(4) Struct_2_B026207A8C6DA56A
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B026207A8C6DA56A_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B026207A8C6DA56A_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B026207A8C6DA56A_EXECUTE_OFFSET))(this);
	}
};
