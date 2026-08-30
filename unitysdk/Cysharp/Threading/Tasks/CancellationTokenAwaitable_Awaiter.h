#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1020)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA9380)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA93B0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA93B0)
#define CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0xC610)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CancellationTokenAwaitable_Awaiter_TypeDefinitionIndex = 42552;

	struct alignas(8) CancellationTokenAwaitable_Awaiter
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10

		::System::Void _ctor(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CANCELLATIONTOKENAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
