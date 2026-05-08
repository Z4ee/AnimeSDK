#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_3_AB8E9ECB82311BD6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA60CE0)

inline static constexpr unsigned int Class_3_AB8E9ECB82311BD6_1_TypeDefinitionIndex = 83201;

class Class_3_AB8E9ECB82311BD6_1 : public ::Class_2_A48F3719AA1CF200
{
public:
	::Struct_2_E614D3B245F96744_1 Field_3_1; // 0x10
	::Struct_2_E614D3B245F96744_1 Field_3_2; // 0x18
	::System::UInt32 Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB8E9ECB82311BD6_1__CTOR_OFFSET))(this);
	}
};
