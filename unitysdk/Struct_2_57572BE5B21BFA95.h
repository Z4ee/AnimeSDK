#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0E39AD1AB0B2F140;

#define STRUCT_2_57572BE5B21BFA95_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7F1D00)
#define STRUCT_2_57572BE5B21BFA95__CTOR_OFFSET UNITYSDK_OFFSET(0x7F1CE0)

inline static constexpr unsigned int Struct_2_57572BE5B21BFA95_TypeDefinitionIndex = 47165;

struct alignas(8) Struct_2_57572BE5B21BFA95
{
	::Class_1_0E39AD1AB0B2F140* Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_0E39AD1AB0B2F140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E39AD1AB0B2F140*))((::PBYTE)hIl2Cpp + STRUCT_2_57572BE5B21BFA95__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_57572BE5B21BFA95_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
