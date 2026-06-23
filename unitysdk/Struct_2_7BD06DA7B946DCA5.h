#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_7BD06DA7B946DCA5_EQUALS_OFFSET UNITYSDK_OFFSET(0x792D90)

inline static constexpr unsigned int Struct_2_7BD06DA7B946DCA5_TypeDefinitionIndex = 55688;

struct alignas(4) Struct_2_7BD06DA7B946DCA5
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Boolean Equals(::Struct_2_7BD06DA7B946DCA5 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7BD06DA7B946DCA5))((::PBYTE)hIl2Cpp + STRUCT_2_7BD06DA7B946DCA5_EQUALS_OFFSET))(this, a1);
	}
};
