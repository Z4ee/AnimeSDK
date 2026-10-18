#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_9CC76F62F4DCDBDF;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_9CC76F62F4DCDBDF___RUN_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C52C90)
#define CLASS_1_9CC76F62F4DCDBDF___RUN_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

inline static constexpr unsigned int Class_1_9CC76F62F4DCDBDF___Run_d__7_TypeDefinitionIndex = 44211;

struct alignas(8) Class_1_9CC76F62F4DCDBDF___Run_d__7
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
	::Class_1_9CC76F62F4DCDBDF* __4__this; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* executionCompletion; // 0x20
	::Cysharp::Threading::Tasks::UniTask task; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
	::System::Int32 __1__state; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC76F62F4DCDBDF___RUN_D__7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_9CC76F62F4DCDBDF___RUN_D__7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
