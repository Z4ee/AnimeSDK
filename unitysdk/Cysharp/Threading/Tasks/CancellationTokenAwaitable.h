#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC610)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenAwaitable_TypeDefinitionIndex = 42551;

	struct alignas(8) CancellationTokenAwaitable
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10

		::System::Void _ctor(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE__CTOR_OFFSET))(this, a1);
		}

		/*
		::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::CancellationTokenAwaitable_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_GETAWAITER_OFFSET))(this);
		}
		*/
	};
}
