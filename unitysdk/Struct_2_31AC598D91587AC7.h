#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AAC47DA0D7182A9F.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3076E7144CA9F588;

#define STRUCT_2_31AC598D91587AC7_METHOD_2_E4EC0FD7A76783C9_OFFSET UNITYSDK_OFFSET(0x777DC0)
#define STRUCT_2_31AC598D91587AC7__CTOR_OFFSET UNITYSDK_OFFSET(0x2F3700)

inline static constexpr unsigned int Struct_2_31AC598D91587AC7_TypeDefinitionIndex = 64892;

struct alignas(8) Struct_2_31AC598D91587AC7
{
	::Class_2_3076E7144CA9F588* Field_2_0; // 0x10
	::Enum_3_AAC47DA0D7182A9F Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C

	::System::Void _ctor(::Class_2_3076E7144CA9F588* a1, ::Enum_3_AAC47DA0D7182A9F a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3076E7144CA9F588*, ::Enum_3_AAC47DA0D7182A9F, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_31AC598D91587AC7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_E4EC0FD7A76783C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31AC598D91587AC7_METHOD_2_E4EC0FD7A76783C9_OFFSET))(this);
	}
};
