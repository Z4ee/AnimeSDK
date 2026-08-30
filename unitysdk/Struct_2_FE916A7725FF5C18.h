#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FE916A7725FF5C18__CTOR_OFFSET UNITYSDK_OFFSET(0x3A13A20)

inline static constexpr unsigned int Struct_2_FE916A7725FF5C18_TypeDefinitionIndex = 36259;

struct alignas(8) Struct_2_FE916A7725FF5C18
{
	::System::UInt64 ONIGBGONALF; // 0x10
	::System::UInt32 FDKPCNBCGEG; // 0x18
	::System::String* LMODFJIHGCH; // 0x20

	::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_FE916A7725FF5C18__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
