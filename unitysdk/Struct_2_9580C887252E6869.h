#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_9580C887252E6869__CTOR_OFFSET UNITYSDK_OFFSET(0x8339C0)

inline static constexpr unsigned int Struct_2_9580C887252E6869_TypeDefinitionIndex = 91063;

struct alignas(8) Struct_2_9580C887252E6869
{
	::System::String* Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x1C

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_9580C887252E6869__CTOR_OFFSET))(this, a1, a2);
	}
};
