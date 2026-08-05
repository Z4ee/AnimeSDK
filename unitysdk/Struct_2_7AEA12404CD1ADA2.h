#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_7AEA12404CD1ADA2_EQUALS_OFFSET UNITYSDK_OFFSET(0xA5DF00)
#define STRUCT_2_7AEA12404CD1ADA2__CTOR_OFFSET UNITYSDK_OFFSET(0xA59FB0)

inline static constexpr unsigned int Struct_2_7AEA12404CD1ADA2_TypeDefinitionIndex = 19589;

struct alignas(4) Struct_2_7AEA12404CD1ADA2
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7AEA12404CD1ADA2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_7AEA12404CD1ADA2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7AEA12404CD1ADA2))((::PBYTE)hIl2Cpp + STRUCT_2_7AEA12404CD1ADA2_EQUALS_OFFSET))(this, a1);
	}
};
