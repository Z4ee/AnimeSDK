#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define STRUCT_2_EA10B3904250C4A0_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7F990)

inline static constexpr unsigned int Struct_2_EA10B3904250C4A0_TypeDefinitionIndex = 73619;

struct alignas(8) Struct_2_EA10B3904250C4A0
{
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> NPLKIAMMBBL; // 0x10
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> KGFCFIKLJKK; // 0x20

	/*
	::System::Void Execute(::System::Int32 a1, ::UnityEngine::Jobs::TransformAccess a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + STRUCT_2_EA10B3904250C4A0_EXECUTE_OFFSET))(this, a1, a2);
	}
	*/
};
