#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A49ADB72118C7386.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_BBE373816A9B1A96_EXECUTE_OFFSET UNITYSDK_OFFSET(0x814D50)

inline static constexpr unsigned int Struct_2_BBE373816A9B1A96_TypeDefinitionIndex = 58020;

struct alignas(8) Struct_2_BBE373816A9B1A96
{
	::Unity::Collections::NativeArray_1<::Struct_2_A49ADB72118C7386> Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BBE373816A9B1A96_EXECUTE_OFFSET))(this, a1);
	}
};
