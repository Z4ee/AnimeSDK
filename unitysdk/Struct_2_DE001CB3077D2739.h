#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6D798C312C19218B.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"

#define STRUCT_2_DE001CB3077D2739_EXECUTE_OFFSET UNITYSDK_OFFSET(0x793E00)

inline static constexpr unsigned int Struct_2_DE001CB3077D2739_TypeDefinitionIndex = 60204;

struct alignas(8) Struct_2_DE001CB3077D2739
{
	::Unity::Collections::NativeList_1<::Struct_2_6D798C312C19218B> Field_2_0; // 0x10

	/*
	::System::Void Execute(::System::Int32 a1, ::UnityEngine::Jobs::TransformAccess a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + STRUCT_2_DE001CB3077D2739_EXECUTE_OFFSET))(this, a1, a2);
	}
	*/
};
