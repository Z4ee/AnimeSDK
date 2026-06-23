#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_57;
namespace System { class String; }

#define STRUCT_2_084B51D193715E30__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

inline static constexpr unsigned int Struct_2_084B51D193715E30_TypeDefinitionIndex = 80536;

struct alignas(8) Struct_2_084B51D193715E30
{
	::System::String* Field_2_0; // 0x10
	::Class_1_43BD383C98B4C0C5_57* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::Class_1_43BD383C98B4C0C5_57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_43BD383C98B4C0C5_57*))((::PBYTE)hIl2Cpp + STRUCT_2_084B51D193715E30__CTOR_OFFSET))(this, a1, a2);
	}
};
