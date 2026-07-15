#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_311353BEB73A32C4_STRUCT_2_BD49EB90D21427BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x38D0990)
#define CLASS_1_311353BEB73A32C4_STRUCT_2_BD49EB90D21427BE__CTOR_OFFSET UNITYSDK_OFFSET(0x38D0930)

inline static constexpr unsigned int Class_1_311353BEB73A32C4_Struct_2_BD49EB90D21427BE_TypeDefinitionIndex = 70373;

struct alignas(4) Class_1_311353BEB73A32C4_Struct_2_BD49EB90D21427BE
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_STRUCT_2_BD49EB90D21427BE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4_STRUCT_2_BD49EB90D21427BE_DISPOSE_OFFSET))(this);
	}
};
