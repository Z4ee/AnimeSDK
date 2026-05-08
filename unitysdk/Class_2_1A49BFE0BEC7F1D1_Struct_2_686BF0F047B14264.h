#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1A49BFE0BEC7F1D1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_686BF0F047B14264_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D75B0)
#define CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_686BF0F047B14264_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x47D3D0)

inline static constexpr unsigned int Class_2_1A49BFE0BEC7F1D1_Struct_2_686BF0F047B14264_TypeDefinitionIndex = 74291;

struct alignas(8) Class_2_1A49BFE0BEC7F1D1_Struct_2_686BF0F047B14264
{
	::Class_2_1A49BFE0BEC7F1D1* Field_2_3; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x38
	::System::UInt32 Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_686BF0F047B14264_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_1A49BFE0BEC7F1D1_STRUCT_2_686BF0F047B14264_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
