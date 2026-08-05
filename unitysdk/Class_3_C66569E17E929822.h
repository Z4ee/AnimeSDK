#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_4_26D2182AF5E773EE;
class Class_4_478C23DA75BA388D_4;

#define CLASS_3_C66569E17E929822__CTOR_OFFSET UNITYSDK_OFFSET(0x1D289F00)

inline static constexpr unsigned int Class_3_C66569E17E929822_TypeDefinitionIndex = 92337;

class Class_3_C66569E17E929822 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::Class_4_26D2182AF5E773EE* Field_3_0; // 0x10
	::Class_4_478C23DA75BA388D_4* Field_3_7; // 0x18
	::Struct_2_E614D3B245F96744 Field_3_1; // 0x20
	::System::Int32 Field_3_2; // 0x28
	::System::UInt32 Field_3_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C66569E17E929822__CTOR_OFFSET))(this);
	}
};
