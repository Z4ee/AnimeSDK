#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3590B72267A04337.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DB63FD7A548E3361__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9170)

inline static constexpr unsigned int Struct_2_DB63FD7A548E3361_TypeDefinitionIndex = 19233;

struct alignas(4) Struct_2_DB63FD7A548E3361
{
	::Enum_3_CE80FD07999C5845 Field_2_0; // 0x10
	::Enum_3_3590B72267A04337 Field_2_1; // 0x14
	::Enum_3_C460945F1F3C12F5 Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C

	::System::Void _ctor(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_3590B72267A04337 a2, ::Enum_3_C460945F1F3C12F5 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::Enum_3_C460945F1F3C12F5, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DB63FD7A548E3361__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
