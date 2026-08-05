#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_78E92152EF384C7B.h"

namespace System { class String; }

#define CLASS_2_5AD8A37AA06A2983__CTOR_OFFSET UNITYSDK_OFFSET(0xE22C970)

inline static constexpr unsigned int Class_2_5AD8A37AA06A2983_TypeDefinitionIndex = 47154;

class Class_2_5AD8A37AA06A2983 : public ::Class_1_78E92152EF384C7B
{
public:
	::System::String* Field_2_7; // 0x28
	::System::String* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983__CTOR_OFFSET))(this);
	}
};
