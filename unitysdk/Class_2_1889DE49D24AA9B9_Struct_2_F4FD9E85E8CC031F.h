#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_2_1889DE49D24AA9B9_STRUCT_2_F4FD9E85E8CC031F__CTOR_OFFSET UNITYSDK_OFFSET(0x2F01E40)

inline static constexpr unsigned int Class_2_1889DE49D24AA9B9_Struct_2_F4FD9E85E8CC031F_TypeDefinitionIndex = 68268;

struct alignas(8) Class_2_1889DE49D24AA9B9_Struct_2_F4FD9E85E8CC031F
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_STRUCT_2_F4FD9E85E8CC031F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
