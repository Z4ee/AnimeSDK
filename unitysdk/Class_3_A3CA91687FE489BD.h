#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_032439553AD060FA.h"
#include "unitysdk/Enum_3_4E71123A51165BD1.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_3_A3CA91687FE489BD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D9C5840)
#define CLASS_3_A3CA91687FE489BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C5890)

inline static constexpr unsigned int Class_3_A3CA91687FE489BD_TypeDefinitionIndex = 91919;

class Class_3_A3CA91687FE489BD : public ::Class_2_032439553AD060FA<::Class_3_A3CA91687FE489BD*>
{
public:
	::System::UInt32 Field_3_2; // 0x28
	::Struct_2_E614D3B245F96744 Field_3_6; // 0x2C
	::System::Int32 Field_3_0; // 0x34
	::System::Int32 Field_3_1; // 0x38
	::Enum_3_4E71123A51165BD1 Field_3_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3CA91687FE489BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3CA91687FE489BD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
