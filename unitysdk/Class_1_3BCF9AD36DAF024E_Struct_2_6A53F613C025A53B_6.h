#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3BCF9AD36DAF024E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_3BCF9AD36DAF024E_STRUCT_2_6A53F613C025A53B_6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x826F10)
#define CLASS_1_3BCF9AD36DAF024E_STRUCT_2_6A53F613C025A53B_6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_3BCF9AD36DAF024E_Struct_2_6A53F613C025A53B_6_TypeDefinitionIndex = 74217;

struct alignas(8) Class_1_3BCF9AD36DAF024E_Struct_2_6A53F613C025A53B_6
{
	::Class_1_3BCF9AD36DAF024E* Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_2; // 0x28
	::PipelineCamera::ScopedDelegateHandle Field_2_0; // 0x30
	::System::Int32 Field_2_3; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_STRUCT_2_6A53F613C025A53B_6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_3BCF9AD36DAF024E_STRUCT_2_6A53F613C025A53B_6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
