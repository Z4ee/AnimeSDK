#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_418;

#define CLASS_1_9AD7EC315F99B05E_METHOD_1_025C22BCD847C217_OFFSET UNITYSDK_OFFSET(0x1136A2E0)
#define CLASS_1_9AD7EC315F99B05E__CTOR_OFFSET UNITYSDK_OFFSET(0x1136A3A0)

inline static constexpr unsigned int Class_1_9AD7EC315F99B05E_TypeDefinitionIndex = 45137;

class Class_1_9AD7EC315F99B05E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_418* Field_1_4; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD7EC315F99B05E__CTOR_OFFSET))(this);
	}

	::Class_1_9AD7EC315F99B05E* Method_1_025C22BCD847C217()
	{
		return ((::Class_1_9AD7EC315F99B05E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD7EC315F99B05E_METHOD_1_025C22BCD847C217_OFFSET))(this);
	}
};
