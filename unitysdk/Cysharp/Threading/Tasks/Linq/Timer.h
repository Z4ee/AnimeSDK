#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

#define CYSHARP_THREADING_TASKS_LINQ_TIMER_GETASYNCENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA48100)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA480D0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Timer_TypeDefinitionIndex = 44582;

	class Timer : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::TimeSpan> period; // 0x10
		::System::TimeSpan dueTime; // 0x20
		::Cysharp::Threading::Tasks::PlayerLoopTiming updateTiming; // 0x28
		::System::Boolean cancelImmediately; // 0x2C
		::System::Boolean ignoreTimeScale; // 0x2D

		::System::Void _ctor(::System::TimeSpan a1, ::System::Nullable_1<::System::TimeSpan> a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Nullable_1<::System::TimeSpan>, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* GetAsyncEnumerator(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER_GETASYNCENUMERATOR_OFFSET))(this, a1);
		}
	};
}
