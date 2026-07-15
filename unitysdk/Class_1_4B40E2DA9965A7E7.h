#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4B40E2DA9965A7E7__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAD040)

inline static constexpr unsigned int Class_1_4B40E2DA9965A7E7_TypeDefinitionIndex = 35619;

class Class_1_4B40E2DA9965A7E7 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::Double Field_1_4; // 0x20
	::System::Int32 Field_1_5; // 0x28
	::System::Int32 Field_1_6; // 0x2C
	::System::Double Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B40E2DA9965A7E7__CTOR_OFFSET))(this);
	}
};
