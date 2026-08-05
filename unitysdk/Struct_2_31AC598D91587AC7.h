#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AAC47DA0D7182A9F.h"
#include "unitysdk/System/ValueType.h"

class Class_2_6C37654979D2A151;

#define STRUCT_2_31AC598D91587AC7_METHOD_2_2A74484E06FA28B1_OFFSET UNITYSDK_OFFSET(0x7E7140)
#define STRUCT_2_31AC598D91587AC7__CTOR_OFFSET UNITYSDK_OFFSET(0x355940)

inline static constexpr unsigned int Struct_2_31AC598D91587AC7_TypeDefinitionIndex = 66641;

struct alignas(8) Struct_2_31AC598D91587AC7
{
	::Class_2_6C37654979D2A151* Field_2_0; // 0x10
	::Enum_3_AAC47DA0D7182A9F Field_2_7; // 0x18
	::System::Int32 Field_2_6; // 0x1C

	::System::Void _ctor(::Class_2_6C37654979D2A151* a1, ::Enum_3_AAC47DA0D7182A9F a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6C37654979D2A151*, ::Enum_3_AAC47DA0D7182A9F, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_31AC598D91587AC7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_2A74484E06FA28B1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31AC598D91587AC7_METHOD_2_2A74484E06FA28B1_OFFSET))(this);
	}
};
