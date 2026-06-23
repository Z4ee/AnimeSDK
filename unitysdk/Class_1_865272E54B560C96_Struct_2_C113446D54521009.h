#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E1E35FDEC0E1EDBB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_865272E54B560C96_STRUCT_2_C113446D54521009__CTOR_OFFSET UNITYSDK_OFFSET(0xA65C60)

inline static constexpr unsigned int Class_1_865272E54B560C96_Struct_2_C113446D54521009_TypeDefinitionIndex = 28986;

struct alignas(8) Class_1_865272E54B560C96_Struct_2_C113446D54521009
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Struct_2_E1E35FDEC0E1EDBB Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Struct_2_E1E35FDEC0E1EDBB& a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Struct_2_E1E35FDEC0E1EDBB&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_865272E54B560C96_STRUCT_2_C113446D54521009__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
