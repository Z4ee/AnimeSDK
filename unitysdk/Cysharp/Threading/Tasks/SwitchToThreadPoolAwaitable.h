#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x332AB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToThreadPoolAwaitable_TypeDefinitionIndex = 31275;

	struct alignas(1) SwitchToThreadPoolAwaitable
	{
		/*
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_GETAWAITER_OFFSET))(this);
		}
		*/
	};
}
