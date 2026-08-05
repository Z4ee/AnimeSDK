#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5EF2FF974F8984C4.h"
#include "unitysdk/Struct_2_AFE109E3626F1DB3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_57D932CA38556A0D;

#define STRUCT_2_085FD3B183D8BFB9__CTOR_OFFSET UNITYSDK_OFFSET(0xA83980)

inline static constexpr unsigned int Struct_2_085FD3B183D8BFB9_TypeDefinitionIndex = 29613;

struct alignas(8) Struct_2_085FD3B183D8BFB9
{
	::Class_1_57D932CA38556A0D* Field_2_0; // 0x10
	::System::UInt32 Field_2_7; // 0x18
	::Struct_2_AFE109E3626F1DB3 Field_2_6; // 0x1C
	::Enum_3_5EF2FF974F8984C4 Field_2_5; // 0x1E

	::System::Void _ctor(::Class_1_57D932CA38556A0D* a1, ::System::UInt32 a2, ::Struct_2_AFE109E3626F1DB3 a3, ::Enum_3_5EF2FF974F8984C4 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57D932CA38556A0D*, ::System::UInt32, ::Struct_2_AFE109E3626F1DB3, ::Enum_3_5EF2FF974F8984C4))((::PBYTE)hIl2Cpp + STRUCT_2_085FD3B183D8BFB9__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
