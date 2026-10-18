#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_56D55B7056AE50BA_TargetType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_56D55B7056AE50BA__CTOR_OFFSET UNITYSDK_OFFSET(0x140C0)

inline static constexpr unsigned int Struct_2_56D55B7056AE50BA_TypeDefinitionIndex = 56516;

struct alignas(8) Struct_2_56D55B7056AE50BA
{
	::System::String* BFLIFKBEOPJ; // 0x10
	::Struct_2_56D55B7056AE50BA_TargetType MNDFOPKBHKP; // 0x18

	::System::Void _ctor(::System::String* a1, ::Struct_2_56D55B7056AE50BA_TargetType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Struct_2_56D55B7056AE50BA_TargetType))((::PBYTE)hIl2Cpp + STRUCT_2_56D55B7056AE50BA__CTOR_OFFSET))(this, a1, a2);
	}
};
