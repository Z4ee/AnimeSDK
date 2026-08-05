#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_FD0368737CBF6F9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7BC590)
#define STRUCT_2_FD0368737CBF6F9B__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_FD0368737CBF6F9B_TypeDefinitionIndex = 49259;

struct alignas(4) Struct_2_FD0368737CBF6F9B
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_DISPOSE_OFFSET))(this);
	}
};
