#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_FFD0045B4597F294;
namespace System { class String; }

#define STRUCT_2_C6757A7358441332_METHOD_2_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x6E74B0)
#define STRUCT_2_C6757A7358441332__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

inline static constexpr unsigned int Struct_2_C6757A7358441332_TypeDefinitionIndex = 49954;

struct alignas(8) Struct_2_C6757A7358441332
{
	::Class_3_FFD0045B4597F294* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::Class_3_FFD0045B4597F294* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_C6757A7358441332__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C6757A7358441332_METHOD_2_E6D3C4C666E119D9_OFFSET))(this);
	}
};
