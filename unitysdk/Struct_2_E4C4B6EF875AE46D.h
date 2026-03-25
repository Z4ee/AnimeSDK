#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7F1F239FF2132566.h"
#include "unitysdk/Struct_2_8EA4F3900BB8E3E8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_E4C4B6EF875AE46D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14E5EC0)

inline static constexpr unsigned int Struct_2_E4C4B6EF875AE46D_TypeDefinitionIndex = 60439;

struct alignas(8) Struct_2_E4C4B6EF875AE46D
{
	::Unity::Collections::NativeArray_1<::Struct_2_8EA4F3900BB8E3E8> Field_2_0; // 0x10
	::Unity::Collections::NativeArray_1<::Struct_2_7F1F239FF2132566> Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x30

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E4C4B6EF875AE46D_EXECUTE_OFFSET))(this, a1);
	}
};
