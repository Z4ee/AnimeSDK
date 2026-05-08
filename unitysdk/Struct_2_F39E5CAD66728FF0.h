#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F39E5CAD66728FF0_METHOD_2_D69D68F1BAAD6ED7_OFFSET UNITYSDK_OFFSET(0xFF3B6C0)

inline static constexpr unsigned int Struct_2_F39E5CAD66728FF0_TypeDefinitionIndex = 77192;

struct alignas(8) Struct_2_F39E5CAD66728FF0
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	static ::Struct_2_F39E5CAD66728FF0 Method_2_D69D68F1BAAD6ED7(::System::String* a1)
	{
		return ((::Struct_2_F39E5CAD66728FF0(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F39E5CAD66728FF0_METHOD_2_D69D68F1BAAD6ED7_OFFSET))(a1);
	}
};
