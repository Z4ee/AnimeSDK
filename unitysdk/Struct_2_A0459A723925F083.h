#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_A0459A723925F083_METHOD_2_67AB4D27061DAF44_OFFSET UNITYSDK_OFFSET(0x1764C3E0)

inline static constexpr unsigned int Struct_2_A0459A723925F083_TypeDefinitionIndex = 60248;

struct alignas(8) Struct_2_A0459A723925F083
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18

	static ::Struct_2_A0459A723925F083 Method_2_67AB4D27061DAF44(::System::Int32 a1)
	{
		return ((::Struct_2_A0459A723925F083(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A0459A723925F083_METHOD_2_67AB4D27061DAF44_OFFSET))(a1);
	}
};
