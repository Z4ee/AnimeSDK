#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1C02EBEB9BBFB46F.h"
#include "unitysdk/Struct_2_9B079B18CA73BD4E_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define STRUCT_2_262B2CF9D98CE442_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6C55F0)

inline static constexpr unsigned int Struct_2_262B2CF9D98CE442_TypeDefinitionIndex = 66340;

struct alignas(8) Struct_2_262B2CF9D98CE442
{
	::Unity::Collections::NativeList_1<::Struct_2_1C02EBEB9BBFB46F> Field_2_0; // 0x10
	::Unity::Collections::NativeList_1<::Struct_2_9B079B18CA73BD4E_1> Field_2_1; // 0x20

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_262B2CF9D98CE442_EXECUTE_OFFSET))(this);
	}
};
