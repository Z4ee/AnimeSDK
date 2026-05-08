#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunnerPromise; }
namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C3235B0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x9D11D0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9D11F0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x9D12D0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskMethodBuilder_TypeDefinitionIndex = 28833;

	struct alignas(8) AsyncUniTaskMethodBuilder
	{
		::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise* runnerPromise; // 0x10
		::System::Exception* ex; // 0x18

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
