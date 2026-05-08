#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_920D00A4D2C57DD8;

#define CLASS_1_90C59FC7BAC7799C_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0xF3DF8A0)
#define CLASS_1_90C59FC7BAC7799C_METHOD_1_8E1914C40B286256_OFFSET UNITYSDK_OFFSET(0xF3DF920)
#define CLASS_1_90C59FC7BAC7799C__CTOR_OFFSET UNITYSDK_OFFSET(0xF3DF890)

inline static constexpr unsigned int Class_1_90C59FC7BAC7799C_TypeDefinitionIndex = 43771;

class Class_1_90C59FC7BAC7799C : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90C59FC7BAC7799C__CTOR_OFFSET))(this);
	}

	::Class_1_90C59FC7BAC7799C* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_90C59FC7BAC7799C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90C59FC7BAC7799C_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	static ::Class_1_90C59FC7BAC7799C* Method_1_8E1914C40B286256(::Class_3_920D00A4D2C57DD8* a1)
	{
		return ((::Class_1_90C59FC7BAC7799C*(*)(::Class_3_920D00A4D2C57DD8*))((::PBYTE)hIl2Cpp + CLASS_1_90C59FC7BAC7799C_METHOD_1_8E1914C40B286256_OFFSET))(a1);
	}
};
