#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_032439553AD060FA.h"
#include "unitysdk/Enum_3_4E71123A51165BD1.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_3_A3CA91687FE489BD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CCEE320)
#define CLASS_3_A3CA91687FE489BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEE370)

inline static constexpr unsigned int Class_3_A3CA91687FE489BD_TypeDefinitionIndex = 87976;

class Class_3_A3CA91687FE489BD : public ::Class_2_032439553AD060FA<::Class_3_A3CA91687FE489BD*>
{
public:
	::Enum_3_4E71123A51165BD1 Field_3_3; // 0x28
	::System::Int32 Field_3_1; // 0x2C
	::Struct_2_E614D3B245F96744_1 Field_3_4; // 0x30
	::System::Int32 Field_3_2; // 0x38
	::System::UInt32 Field_3_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3CA91687FE489BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3CA91687FE489BD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
