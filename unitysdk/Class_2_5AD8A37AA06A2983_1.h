#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_945ACFB1FEBC7A2C.h"

namespace System { class String; }

#define CLASS_2_5AD8A37AA06A2983_1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xFC0F4E0)
#define CLASS_2_5AD8A37AA06A2983_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xFC0F490)
#define CLASS_2_5AD8A37AA06A2983_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFC0F4D0)

inline static constexpr unsigned int Class_2_5AD8A37AA06A2983_1_TypeDefinitionIndex = 51178;

class Class_2_5AD8A37AA06A2983_1 : public ::Class_1_945ACFB1FEBC7A2C
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AD8A37AA06A2983_1_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
