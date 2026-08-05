#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_508203A30A850CC8_STRUCT_2_1689FC02C3822AB1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8B6D60)

inline static constexpr unsigned int Class_2_508203A30A850CC8_Struct_2_1689FC02C3822AB1_TypeDefinitionIndex = 81812;

struct alignas(1) Class_2_508203A30A850CC8_Struct_2_1689FC02C3822AB1
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_508203A30A850CC8_STRUCT_2_1689FC02C3822AB1_EXECUTE_OFFSET))(this, a1);
	}
};
