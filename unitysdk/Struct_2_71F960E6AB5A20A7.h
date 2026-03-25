#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_71F960E6AB5A20A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x76000)
#define STRUCT_2_71F960E6AB5A20A7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x75FF0)

inline static constexpr unsigned int Struct_2_71F960E6AB5A20A7_TypeDefinitionIndex = 58229;

struct alignas(4) Struct_2_71F960E6AB5A20A7
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_71F960E6AB5A20A7_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_71F960E6AB5A20A7_DISPOSE_OFFSET))(this);
	}
};
