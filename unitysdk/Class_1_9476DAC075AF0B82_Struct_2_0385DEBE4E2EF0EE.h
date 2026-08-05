#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_9476DAC075AF0B82;

#define CLASS_1_9476DAC075AF0B82_STRUCT_2_0385DEBE4E2EF0EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x86BA50)
#define CLASS_1_9476DAC075AF0B82_STRUCT_2_0385DEBE4E2EF0EE__CTOR_OFFSET UNITYSDK_OFFSET(0x86BA40)

inline static constexpr unsigned int Class_1_9476DAC075AF0B82_Struct_2_0385DEBE4E2EF0EE_TypeDefinitionIndex = 51277;

struct alignas(8) Class_1_9476DAC075AF0B82_Struct_2_0385DEBE4E2EF0EE
{
	::Class_1_9476DAC075AF0B82* Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_9476DAC075AF0B82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9476DAC075AF0B82*))((::PBYTE)hIl2Cpp + CLASS_1_9476DAC075AF0B82_STRUCT_2_0385DEBE4E2EF0EE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9476DAC075AF0B82_STRUCT_2_0385DEBE4E2EF0EE_DISPOSE_OFFSET))(this);
	}
};
