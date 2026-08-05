#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41FF0AFA1C3FB14E.h"
#include "unitysdk/Enum_3_8835754FCE9AA31B.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6276DC4E5A7B14CC_METHOD_2_819F1C40271D34FB_OFFSET UNITYSDK_OFFSET(0x69B3D0)

inline static constexpr unsigned int Struct_2_6276DC4E5A7B14CC_TypeDefinitionIndex = 91842;

struct alignas(4) Struct_2_6276DC4E5A7B14CC
{
	::Enum_3_41FF0AFA1C3FB14E Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Struct_2_E614D3B245F96744 Field_2_0; // 0x18
	::System::Int32 Field_2_7; // 0x20
	::Enum_3_8835754FCE9AA31B Field_2_6; // 0x24
	::System::UInt32 Field_2_5; // 0x28

	::System::String* Method_2_819F1C40271D34FB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6276DC4E5A7B14CC_METHOD_2_819F1C40271D34FB_OFFSET))(this);
	}
};
