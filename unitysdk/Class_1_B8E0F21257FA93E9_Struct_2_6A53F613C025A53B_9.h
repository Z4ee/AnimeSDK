#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B8E0F21257FA93E9;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_B8E0F21257FA93E9_STRUCT_2_6A53F613C025A53B_9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x884660)
#define CLASS_1_B8E0F21257FA93E9_STRUCT_2_6A53F613C025A53B_9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_B8E0F21257FA93E9_Struct_2_6A53F613C025A53B_9_TypeDefinitionIndex = 82864;

struct alignas(8) Class_1_B8E0F21257FA93E9_Struct_2_6A53F613C025A53B_9
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Class_1_B8E0F21257FA93E9* Field_2_0; // 0x20
	::PipelineCamera::ScopedDelegateHandle Field_2_7; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_2; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_STRUCT_2_6A53F613C025A53B_9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_B8E0F21257FA93E9_STRUCT_2_6A53F613C025A53B_9_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
