#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_DB31062B5932CACE_4__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

inline static constexpr unsigned int Struct_2_DB31062B5932CACE_4_TypeDefinitionIndex = 64717;

struct alignas(8) Struct_2_DB31062B5932CACE_4
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_4__CTOR_OFFSET))(this, a1, a2);
	}
};
