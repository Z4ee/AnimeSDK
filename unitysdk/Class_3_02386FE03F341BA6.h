#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_3_02386FE03F341BA6__CTOR_OFFSET UNITYSDK_OFFSET(0x16D49020)

inline static constexpr unsigned int Class_3_02386FE03F341BA6_TypeDefinitionIndex = 93197;

class Class_3_02386FE03F341BA6 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Single Field_3_0; // 0x10
	::System::UInt32 Field_3_3; // 0x14
	::Struct_2_E614D3B245F96744 Field_3_2; // 0x18
	::System::Single Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02386FE03F341BA6__CTOR_OFFSET))(this);
	}
};
