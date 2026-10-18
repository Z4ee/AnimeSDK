#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9A1F9B459F535D51_METHOD_2_7C2E4E9152312106_OFFSET UNITYSDK_OFFSET(0x16508060)
#define STRUCT_2_9A1F9B459F535D51_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x2E83490)

inline static constexpr unsigned int Struct_2_9A1F9B459F535D51_TypeDefinitionIndex = 70148;

struct alignas(8) Struct_2_9A1F9B459F535D51
{
	::System::Int32 JDNDMDHMILA; // 0x10
	::System::Double MKPKMDEEEEH; // 0x18

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9A1F9B459F535D51_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	static ::System::Double Method_2_7C2E4E9152312106(::Struct_2_9A1F9B459F535D51 a1, ::Struct_2_9A1F9B459F535D51 a2)
	{
		return ((::System::Double(*)(::Struct_2_9A1F9B459F535D51, ::Struct_2_9A1F9B459F535D51))((::PBYTE)hIl2Cpp + STRUCT_2_9A1F9B459F535D51_METHOD_2_7C2E4E9152312106_OFFSET))(a1, a2);
	}
};
