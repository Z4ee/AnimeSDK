#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_48460350BA079E78__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

inline static constexpr unsigned int Struct_2_48460350BA079E78_TypeDefinitionIndex = 58394;

struct alignas(8) Struct_2_48460350BA079E78
{
	::System::UInt64 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::System::UInt64 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_48460350BA079E78__CTOR_OFFSET))(this, a1, a2);
	}
};
