#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_8.h"
#include "unitysdk/Enum_3_1DEA15FA74D7C262.h"

namespace System { class String; }

#define CLASS_2_EE5CA22072C05B40__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C37E0)

inline static constexpr unsigned int Class_2_EE5CA22072C05B40_TypeDefinitionIndex = 47128;

class Class_2_EE5CA22072C05B40 : public ::Class_1_7807B2B04302CD7B_8
{
public:
	::System::String* Field_2_0; // 0x18
	::System::Int32 Field_2_7; // 0x20

	::System::Void _ctor(::Enum_3_1DEA15FA74D7C262 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_1DEA15FA74D7C262, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EE5CA22072C05B40__CTOR_OFFSET))(this, a1, a2);
	}
};
