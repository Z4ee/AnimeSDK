#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BE6BF7909AD9D940;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_A1DB058535A9061B_METHOD_2_C7CC9CF20DF0FF28_OFFSET UNITYSDK_OFFSET(0x850800)
#define STRUCT_2_A1DB058535A9061B__CTOR_OFFSET UNITYSDK_OFFSET(0x811320)

inline static constexpr unsigned int Struct_2_A1DB058535A9061B_TypeDefinitionIndex = 55522;

struct alignas(8) Struct_2_A1DB058535A9061B
{
	::System::Boolean Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* Field_2_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_A1DB058535A9061B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C7CC9CF20DF0FF28()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A1DB058535A9061B_METHOD_2_C7CC9CF20DF0FF28_OFFSET))(this);
	}
};
