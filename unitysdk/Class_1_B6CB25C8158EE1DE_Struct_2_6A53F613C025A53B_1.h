#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B6CB25C8158EE1DE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_B6CB25C8158EE1DE_STRUCT_2_6A53F613C025A53B_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x796740)
#define CLASS_1_B6CB25C8158EE1DE_STRUCT_2_6A53F613C025A53B_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_B6CB25C8158EE1DE_Struct_2_6A53F613C025A53B_1_TypeDefinitionIndex = 60827;

struct alignas(8) Class_1_B6CB25C8158EE1DE_Struct_2_6A53F613C025A53B_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Class_1_B6CB25C8158EE1DE* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x28
	::PipelineCamera::ScopedDelegateHandle Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_STRUCT_2_6A53F613C025A53B_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_B6CB25C8158EE1DE_STRUCT_2_6A53F613C025A53B_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
