#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }

#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME_GETASYNCENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EA48A90)
#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA48A70)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TimerFrame_TypeDefinitionIndex = 44585;

	class TimerFrame : public ::System::Object
	{
	public:
		::System::Boolean cancelImmediately; // 0x10
		::Cysharp::Threading::Tasks::PlayerLoopTiming updateTiming; // 0x14
		::System::Nullable_1<::System::Int32> periodFrameCount; // 0x18
		::System::Int32 dueTimeFrameCount; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Nullable_1<::System::Int32> a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>* GetAsyncEnumerator(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::Cysharp::Threading::Tasks::AsyncUnit>*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME_GETASYNCENUMERATOR_OFFSET))(this, a1);
		}
	};
}
