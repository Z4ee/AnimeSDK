#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA79370)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__51_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ContinueWith_d__51_TypeDefinitionIndex = 31301;

	struct alignas(8) UniTaskExtensions__ContinueWith_d__51
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::Action* continuationFunction; // 0x30
		::Cysharp::Threading::Tasks::UniTask task; // 0x38
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__51_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__CONTINUEWITH_D__51_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
