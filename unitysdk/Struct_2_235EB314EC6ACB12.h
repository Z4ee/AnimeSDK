#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_235EB314EC6ACB12_METHOD_2_DBF11F8CA09BDDA0_OFFSET UNITYSDK_OFFSET(0x701DE0)

inline static constexpr unsigned int Struct_2_235EB314EC6ACB12_TypeDefinitionIndex = 61551;

struct alignas(8) Struct_2_235EB314EC6ACB12
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::MoleMole::EntityHandle Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x30
	::System::String* Field_2_3; // 0x38

	::System::Boolean Method_2_DBF11F8CA09BDDA0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_235EB314EC6ACB12_METHOD_2_DBF11F8CA09BDDA0_OFFSET))(this);
	}
};
