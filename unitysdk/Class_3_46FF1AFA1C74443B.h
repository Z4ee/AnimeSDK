#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

class Class_4_2C8EAF3D21095AD8;
class Class_4_478C23DA75BA388D_2;

#define CLASS_3_46FF1AFA1C74443B__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD61AA0)

inline static constexpr unsigned int Class_3_46FF1AFA1C74443B_TypeDefinitionIndex = 88649;

class Class_3_46FF1AFA1C74443B : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::Class_4_2C8EAF3D21095AD8* Field_3_6; // 0x10
	::Class_4_478C23DA75BA388D_2* Field_3_7; // 0x18
	::System::UInt32 Field_3_0; // 0x20
	::System::UInt32 Field_3_1; // 0x24
	::System::Boolean Field_3_9; // 0x28
	::System::Int32 Field_3_5; // 0x2C
	::System::Int32 Field_3_3; // 0x30
	::System::Int32 Field_3_8; // 0x34
	::System::UInt32 Field_3_2; // 0x38
	::Struct_2_E614D3B245F96744_1 Field_3_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46FF1AFA1C74443B__CTOR_OFFSET))(this);
	}
};
