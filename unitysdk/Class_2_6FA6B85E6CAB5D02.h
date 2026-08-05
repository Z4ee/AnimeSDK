#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75C2C0B60A7E5C7E.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_2_6FA6B85E6CAB5D02__CTOR_OFFSET UNITYSDK_OFFSET(0x1E059B10)

inline static constexpr unsigned int Class_2_6FA6B85E6CAB5D02_TypeDefinitionIndex = 91861;

class Class_2_6FA6B85E6CAB5D02 : public ::Class_1_75C2C0B60A7E5C7E
{
public:
	::System::Boolean Field_2_4; // 0x28
	::Struct_2_E614D3B245F96744 Field_2_7; // 0x2C
	::System::UInt32 Field_2_6; // 0x34
	::System::Single Field_2_0; // 0x38
	::Struct_2_E614D3B245F96744 Field_2_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA6B85E6CAB5D02__CTOR_OFFSET))(this);
	}
};
