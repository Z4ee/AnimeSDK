#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"
#include "unitysdk/Struct_2_FA6F1CFCFAC0D4A9.h"

#define CLASS_3_B8E77A7A25C7D385__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA2860)

inline static constexpr unsigned int Class_3_B8E77A7A25C7D385_TypeDefinitionIndex = 83111;

class Class_3_B8E77A7A25C7D385 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::System::UInt32 Field_3_0; // 0x20
	::System::UInt64 Field_3_2; // 0x28
	::Struct_2_FA6F1CFCFAC0D4A9 Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8E77A7A25C7D385__CTOR_OFFSET))(this);
	}
};
