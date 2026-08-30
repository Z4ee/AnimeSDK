#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Internal/ValueStopwatch.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTimer.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET UNITYSDK_OFFSET(0x1D754460)
#define CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_RESETCORE_OFFSET UNITYSDK_OFFSET(0x1D754340)
#define CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D753E90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int RealtimePlayerLoopTimer_TypeDefinitionIndex = 42629;

	class RealtimePlayerLoopTimer : public ::Cysharp::Threading::Tasks::PlayerLoopTimer
	{
	public:
		::System::Int64 intervalTicks; // 0x30
		::Cysharp::Threading::Tasks::Internal::ValueStopwatch stopwatch; // 0x38

		::System::Void _ctor(::System::TimeSpan a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Action_1<::System::Object*>* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean MoveNextCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET))(this);
		}

		::System::Void ResetCore(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_REALTIMEPLAYERLOOPTIMER_RESETCORE_OFFSET))(this, a1);
		}
	};
}
