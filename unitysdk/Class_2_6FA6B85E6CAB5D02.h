#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E56A0F2E8A0EE48E.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_6FA6B85E6CAB5D02__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27CAA0)

inline static constexpr unsigned int Class_2_6FA6B85E6CAB5D02_TypeDefinitionIndex = 88251;

class Class_2_6FA6B85E6CAB5D02 : public ::Class_1_E56A0F2E8A0EE48E
{
public:
	::Struct_2_E614D3B245F96744_1 Field_2_1; // 0x28
	::System::Single Field_2_0; // 0x30
	::System::UInt32 Field_2_2; // 0x34
	::System::Boolean Field_2_4; // 0x38
	::Struct_2_E614D3B245F96744_1 Field_2_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA6B85E6CAB5D02__CTOR_OFFSET))(this);
	}
};
