#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51F.h"
#include "unitysdk/Struct_2_698098A743D71086.h"
#include "unitysdk/Struct_2_D0732A9EE482521E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_E1DFBD7B6B19501C_EXECUTE_OFFSET UNITYSDK_OFFSET(0x87A5E0)

inline static constexpr unsigned int Struct_2_E1DFBD7B6B19501C_TypeDefinitionIndex = 66326;

struct alignas(8) Struct_2_E1DFBD7B6B19501C
{
	::Unity::Collections::NativeArray_1<::Struct_2_52A902145F5BE51F> Field_2_0; // 0x10
	::Unity::Collections::NativeArray_1<::Struct_2_698098A743D71086> Field_2_7; // 0x20
	::Struct_2_D0732A9EE482521E Field_2_6; // 0x30

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E1DFBD7B6B19501C_EXECUTE_OFFSET))(this, a1);
	}
};
