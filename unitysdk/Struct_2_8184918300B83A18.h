#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AD01CC4683F4B718.h"
#include "unitysdk/Struct_2_D175BB468F2F7256.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B810A3B5B6A63A27;

#define STRUCT_2_8184918300B83A18_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x759120)

inline static constexpr unsigned int Struct_2_8184918300B83A18_TypeDefinitionIndex = 41712;

struct alignas(8) Struct_2_8184918300B83A18
{
	::Enum_3_AD01CC4683F4B718 Field_2_0; // 0x10
	::Enum_3_AD01CC4683F4B718 Field_2_1; // 0x14
	::Class_1_B810A3B5B6A63A27* Field_2_2; // 0x18
	::Struct_2_D175BB468F2F7256 Field_2_3; // 0x20

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8184918300B83A18_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
