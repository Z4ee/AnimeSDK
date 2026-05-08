#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2E87C0)
#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_TOUNITASK_OFFSET UNITYSDK_OFFSET(0x9DA3D0)
#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E85F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int YieldAwaitable_TypeDefinitionIndex = 28614;

	struct alignas(4) YieldAwaitable
	{
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE__CTOR_OFFSET))(this, timing);
		}

		/*
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_GETAWAITER_OFFSET))(this);
		}
		*/

		/*
		::Cysharp::Threading::Tasks::UniTask ToUniTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_TOUNITASK_OFFSET))(this);
		}
		*/
	};
}
