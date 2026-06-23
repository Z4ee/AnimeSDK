#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunnerPromise; }
namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E664420)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0xA73E00)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA73E20)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0xA73F00)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskMethodBuilder_TypeDefinitionIndex = 31489;

	struct alignas(8) AsyncUniTaskMethodBuilder
	{
		::System::Exception* ex; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise* runnerPromise; // 0x18

		static ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Create()
		{
			return ((::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_CREATE_OFFSET))();
		}

		/*
		::Cysharp::Threading::Tasks::UniTask get_Task()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_GET_TASK_OFFSET))(this);
		}
		*/

		::System::Void SetException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETEXCEPTION_OFFSET))(this, exception);
		}

		::System::Void SetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETRESULT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
