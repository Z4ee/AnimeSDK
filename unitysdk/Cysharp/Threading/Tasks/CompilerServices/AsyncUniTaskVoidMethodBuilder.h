#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunner; }
namespace System { class Exception; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D747210)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_GET_TASK_OFFSET UNITYSDK_OFFSET(0x182D0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3BDEAE0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETRESULT_OFFSET UNITYSDK_OFFSET(0x3BDEAF0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int AsyncUniTaskVoidMethodBuilder_TypeDefinitionIndex = 43119;

	struct alignas(8) AsyncUniTaskVoidMethodBuilder
	{
		::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner* runner; // 0x10

		static ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Create()
		{
			return ((::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_CREATE_OFFSET))();
		}

		/*
		::Cysharp::Threading::Tasks::UniTaskVoid get_Task()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_GET_TASK_OFFSET))(this);
		}
		*/

		::System::Void SetException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void SetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETRESULT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_ASYNCUNITASKVOIDMETHODBUILDER_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
