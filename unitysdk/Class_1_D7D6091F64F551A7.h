#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_2_8758E40D9FAA51DB;

#define CLASS_1_D7D6091F64F551A7_METHOD_1_025D5DE1858D0094_OFFSET UNITYSDK_OFFSET(0xF6070B0)
#define CLASS_1_D7D6091F64F551A7_METHOD_1_BF5C7F1BE9C0E055_OFFSET UNITYSDK_OFFSET(0xF606EF0)
#define CLASS_1_D7D6091F64F551A7__CTOR_OFFSET UNITYSDK_OFFSET(0xF606ED0)

inline static constexpr unsigned int Class_1_D7D6091F64F551A7_TypeDefinitionIndex = 74559;

class Class_1_D7D6091F64F551A7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_4* Field_1_2; // 0x10
	::Class_2_8758E40D9FAA51DB* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::Class_2_8758E40D9FAA51DB* a2, ::Class_0_16E4307DCC419505_4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_8758E40D9FAA51DB*, ::Class_0_16E4307DCC419505_4*))((::PBYTE)hIl2Cpp + CLASS_1_D7D6091F64F551A7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF5C7F1BE9C0E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7D6091F64F551A7_METHOD_1_BF5C7F1BE9C0E055_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_4* Method_1_025D5DE1858D0094()
	{
		return ((::Class_0_16E4307DCC419505_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7D6091F64F551A7_METHOD_1_025D5DE1858D0094_OFFSET))(this);
	}
};
