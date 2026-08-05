#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A49ADB72118C7386.h"
#include "unitysdk/Struct_2_D0732A9EE482521E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_701CA47AC3A7F82B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8871B0)

inline static constexpr unsigned int Struct_2_701CA47AC3A7F82B_TypeDefinitionIndex = 89922;

struct alignas(8) Struct_2_701CA47AC3A7F82B
{
	::Unity::Collections::NativeArray_1<::Struct_2_A49ADB72118C7386> Field_2_1; // 0x10
	::Struct_2_D0732A9EE482521E Field_2_0; // 0x20

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_701CA47AC3A7F82B_EXECUTE_OFFSET))(this, a1);
	}
};
