#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D753D50)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CYSHARP_THREADING_TASKS_IPLAYERLOOPITEM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7541F0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7541E0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_RESTART_1_OFFSET UNITYSDK_OFFSET(0x1D7540A0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_RESTART_OFFSET UNITYSDK_OFFSET(0x1D753F90)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_STARTNEW_OFFSET UNITYSDK_OFFSET(0x1D746830)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_STOP_OFFSET UNITYSDK_OFFSET(0x1D7541D0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D747AD0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopTimer_TypeDefinitionIndex = 42626;

	class PlayerLoopTimer : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* timerCallback; // 0x10
		::System::Object* state; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming; // 0x28
		::System::Boolean isDisposed; // 0x2C
		::System::Boolean tryStop; // 0x2D
		::System::Boolean isRunning; // 0x2E
		::System::Boolean periodic; // 0x2F

		::System::Void _ctor(::System::Boolean a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Action_1<::System::Object*>* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::Cysharp::Threading::Tasks::PlayerLoopTimer* Create(::System::TimeSpan a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4, ::System::Threading::CancellationToken a5, ::System::Action_1<::System::Object*>* a6, ::System::Object* a7)
		{
			return ((::Cysharp::Threading::Tasks::PlayerLoopTimer*(*)(::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::Cysharp::Threading::Tasks::PlayerLoopTimer* StartNew(::System::TimeSpan a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::DelayType a3, ::Cysharp::Threading::Tasks::PlayerLoopTiming a4, ::System::Threading::CancellationToken a5, ::System::Action_1<::System::Object*>* a6, ::System::Object* a7)
		{
			return ((::Cysharp::Threading::Tasks::PlayerLoopTimer*(*)(::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_STARTNEW_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_RESTART_OFFSET))(this);
		}

		::System::Void Restart_1(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_RESTART_1_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_STOP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Cysharp_Threading_Tasks_IPlayerLoopItem_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPTIMER_CYSHARP_THREADING_TASKS_IPLAYERLOOPITEM_MOVENEXT_OFFSET))(this);
		}
	};
}
