#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_3_AB8E9ECB82311BD6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1BA90)

inline static constexpr unsigned int Class_3_AB8E9ECB82311BD6_2_TypeDefinitionIndex = 88678;

class Class_3_AB8E9ECB82311BD6_2 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::UInt32 Field_3_0; // 0x10
	::Struct_2_E614D3B245F96744_1 Field_3_2; // 0x14
	::Struct_2_E614D3B245F96744_1 Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB8E9ECB82311BD6_2__CTOR_OFFSET))(this);
	}
};
