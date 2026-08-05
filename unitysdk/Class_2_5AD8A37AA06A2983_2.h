#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_78E92152EF384C7B.h"

namespace System { class String; }

#define CLASS_2_5AD8A37AA06A2983_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17200C50)

inline static constexpr unsigned int Class_2_5AD8A37AA06A2983_2_TypeDefinitionIndex = 65101;

class Class_2_5AD8A37AA06A2983_2 : public ::Class_1_78E92152EF384C7B
{
public:
	::System::String* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_2__CTOR_OFFSET))(this);
	}
};
