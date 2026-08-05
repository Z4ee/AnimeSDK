#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_4_26D2182AF5E773EE;
class Class_4_478C23DA75BA388D_4;

#define CLASS_3_46FF1AFA1C74443B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF68280)

inline static constexpr unsigned int Class_3_46FF1AFA1C74443B_TypeDefinitionIndex = 92230;

class Class_3_46FF1AFA1C74443B : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::Class_4_478C23DA75BA388D_4* Field_3_4; // 0x10
	::Class_4_26D2182AF5E773EE* Field_3_5; // 0x18
	::Struct_2_E614D3B245F96744 Field_3_7; // 0x20
	::System::UInt32 Field_3_1; // 0x28
	::System::Boolean Field_3_10; // 0x2C
	::System::Int32 Field_3_0; // 0x30
	::System::UInt32 Field_3_2; // 0x34
	::System::UInt32 Field_3_3; // 0x38
	::System::Int32 Field_3_11; // 0x3C
	::System::Int32 Field_3_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46FF1AFA1C74443B__CTOR_OFFSET))(this);
	}
};
