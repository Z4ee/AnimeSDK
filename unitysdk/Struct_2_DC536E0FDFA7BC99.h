#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C627E80B28D96876.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DC536E0FDFA7BC99_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x424ED0)

inline static constexpr unsigned int Struct_2_DC536E0FDFA7BC99_TypeDefinitionIndex = 56109;

struct alignas(4) Struct_2_DC536E0FDFA7BC99
{
	::Enum_3_C627E80B28D96876 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DC536E0FDFA7BC99_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
