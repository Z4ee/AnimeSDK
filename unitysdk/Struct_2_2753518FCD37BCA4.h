#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_2753518FCD37BCA4_METHOD_2_57DE804DC3E30BA2_OFFSET UNITYSDK_OFFSET(0x60FF70)

inline static constexpr unsigned int Struct_2_2753518FCD37BCA4_TypeDefinitionIndex = 61691;

struct alignas(8) Struct_2_2753518FCD37BCA4
{
	::MoleMole::EntityHandle Field_2_2; // 0x10
	::MoleMole::EntityHandle Field_2_1; // 0x20
	::System::String* Field_2_0; // 0x30
	::System::String* Field_2_7; // 0x38

	::System::Boolean Method_2_57DE804DC3E30BA2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2753518FCD37BCA4_METHOD_2_57DE804DC3E30BA2_OFFSET))(this);
	}
};
