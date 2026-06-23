#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_53842913455A8556;

#define CLASS_1_53842913455A8556_STRUCT_2_CF78FCC04B71BFFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B0EA0)
#define CLASS_1_53842913455A8556_STRUCT_2_CF78FCC04B71BFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

inline static constexpr unsigned int Class_1_53842913455A8556_Struct_2_CF78FCC04B71BFFD_TypeDefinitionIndex = 73529;

struct alignas(8) Class_1_53842913455A8556_Struct_2_CF78FCC04B71BFFD
{
	::Class_1_53842913455A8556* Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_53842913455A8556* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_STRUCT_2_CF78FCC04B71BFFD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53842913455A8556_STRUCT_2_CF78FCC04B71BFFD_DISPOSE_OFFSET))(this);
	}
};
