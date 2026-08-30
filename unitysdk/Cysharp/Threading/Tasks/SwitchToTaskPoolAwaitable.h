#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x182D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToTaskPoolAwaitable_TypeDefinitionIndex = 42784;

	struct alignas(1) SwitchToTaskPoolAwaitable
	{
		/*
		::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTASKPOOLAWAITABLE_GETAWAITER_OFFSET))(this);
		}
		*/
	};
}
