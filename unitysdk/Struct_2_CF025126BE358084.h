#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_CF025126BE358084__CTOR_OFFSET UNITYSDK_OFFSET(0x2BC3630)

inline static constexpr unsigned int Struct_2_CF025126BE358084_TypeDefinitionIndex = 68656;

struct alignas(8) Struct_2_CF025126BE358084
{
	::System::String* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x1C

	::System::Void _ctor(::System::String* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_CF025126BE358084__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
