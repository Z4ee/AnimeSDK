#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_B210258C7CFBA850.h"
#include "unitysdk/Struct_2_C6E67AD78D549CEA.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_CB55BF0D4DE959E5_METHOD_2_74BDA55B77AE40C1_OFFSET UNITYSDK_OFFSET(0x7456A0)
#define STRUCT_2_CB55BF0D4DE959E5_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x745690)

inline static constexpr unsigned int Struct_2_CB55BF0D4DE959E5_TypeDefinitionIndex = 66804;

struct alignas(8) Struct_2_CB55BF0D4DE959E5
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::Struct_2_C6E67AD78D549CEA Field_2_1; // 0x20
	::Struct_2_B210258C7CFBA850 Field_2_2; // 0x24

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB55BF0D4DE959E5_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_2_74BDA55B77AE40C1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CB55BF0D4DE959E5_METHOD_2_74BDA55B77AE40C1_OFFSET))(this);
	}
};
