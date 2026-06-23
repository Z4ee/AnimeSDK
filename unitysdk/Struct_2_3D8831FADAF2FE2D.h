#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41FF0AFA1C3FB14E.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_3D8831FADAF2FE2D_METHOD_2_819F1C40271D34FB_OFFSET UNITYSDK_OFFSET(0x936740)

inline static constexpr unsigned int Struct_2_3D8831FADAF2FE2D_TypeDefinitionIndex = 87901;

struct alignas(4) Struct_2_3D8831FADAF2FE2D
{
	::System::Int32 Field_2_0; // 0x10
	::Enum_3_41FF0AFA1C3FB14E Field_2_1; // 0x14

	::System::String* Method_2_819F1C40271D34FB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3D8831FADAF2FE2D_METHOD_2_819F1C40271D34FB_OFFSET))(this);
	}
};
