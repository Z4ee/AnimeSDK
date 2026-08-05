#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_48B675D2EE77F2AC.h"
#include "unitysdk/Struct_2_B210258C7CFBA850.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5C20D8CA4DCAF344_METHOD_2_A47D52AAE5BCA60D_OFFSET UNITYSDK_OFFSET(0x7B0B00)
#define STRUCT_2_5C20D8CA4DCAF344_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x7B0B10)

inline static constexpr unsigned int Struct_2_5C20D8CA4DCAF344_TypeDefinitionIndex = 51448;

struct alignas(8) Struct_2_5C20D8CA4DCAF344
{
	::MoleMole::EntityHandle Field_2_2; // 0x10
	::Struct_2_48B675D2EE77F2AC Field_2_1; // 0x20
	::Struct_2_B210258C7CFBA850 Field_2_0; // 0x24

	::System::Boolean Method_2_A47D52AAE5BCA60D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5C20D8CA4DCAF344_METHOD_2_A47D52AAE5BCA60D_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5C20D8CA4DCAF344_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}
};
