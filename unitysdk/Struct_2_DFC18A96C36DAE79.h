#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_790B79B02D84C247.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DFC18A96C36DAE79_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x70CC30)
#define STRUCT_2_DFC18A96C36DAE79__CTOR_OFFSET UNITYSDK_OFFSET(0x2E85F0)

inline static constexpr unsigned int Struct_2_DFC18A96C36DAE79_TypeDefinitionIndex = 44134;

struct alignas(4) Struct_2_DFC18A96C36DAE79
{
	::Enum_3_790B79B02D84C247 Field_2_0; // 0x10

	::System::Void _ctor(::Enum_3_790B79B02D84C247 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_790B79B02D84C247))((::PBYTE)hIl2Cpp + STRUCT_2_DFC18A96C36DAE79__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DFC18A96C36DAE79_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}
};
