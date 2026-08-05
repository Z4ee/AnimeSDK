#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/Struct_2_7D08D6F1491E6873.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F3CC150E5334846F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_F3CC150E5334846F_STRUCT_2_6A53F613C025A53B_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B2280)
#define CLASS_1_F3CC150E5334846F_STRUCT_2_6A53F613C025A53B_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_F3CC150E5334846F_Struct_2_6A53F613C025A53B_1_TypeDefinitionIndex = 44966;

struct alignas(8) Class_1_F3CC150E5334846F_Struct_2_6A53F613C025A53B_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Class_1_F3CC150E5334846F* Field_2_7; // 0x28
	::PipelineCamera::ScopedDelegateHandle Field_2_5; // 0x30
	::Struct_2_7D08D6F1491E6873 Field_2_6; // 0x38
	::System::Int32 Field_2_1; // 0x98

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_STRUCT_2_6A53F613C025A53B_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_STRUCT_2_6A53F613C025A53B_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
