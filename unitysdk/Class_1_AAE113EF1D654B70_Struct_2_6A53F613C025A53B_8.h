#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_AAE113EF1D654B70;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_AAE113EF1D654B70_STRUCT_2_6A53F613C025A53B_8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B9100)
#define CLASS_1_AAE113EF1D654B70_STRUCT_2_6A53F613C025A53B_8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_AAE113EF1D654B70_Struct_2_6A53F613C025A53B_8_TypeDefinitionIndex = 77396;

struct alignas(8) Class_1_AAE113EF1D654B70_Struct_2_6A53F613C025A53B_8
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x10
	::PipelineCamera::ScopedDelegateHandle Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_2; // 0x28
	::Class_1_AAE113EF1D654B70* Field_2_1; // 0x30
	::System::Int32 Field_2_3; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_STRUCT_2_6A53F613C025A53B_8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_AAE113EF1D654B70_STRUCT_2_6A53F613C025A53B_8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
