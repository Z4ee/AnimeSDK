#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace Cysharp::Threading::Tasks { class PlayerLoopTimer; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_CANCELCANCELLATIONTOKENSOURCESTATE_OFFSET UNITYSDK_OFFSET(0x1D756A30)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7570D0)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_ISTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D757090)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x1D7570C0)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_TIMEOUT_1_OFFSET UNITYSDK_OFFSET(0x1D756C60)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D756C30)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7571B0)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D756AD0)
#define CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D756A80)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TimeoutController_TypeDefinitionIndex = 42638;

	class TimeoutController : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_CancelCancellationTokenSourceStateDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TimeoutController_TypeDefinitionIndex)->GetStaticField(0x61DA0);
		}
		::Cysharp::Threading::Tasks::PlayerLoopTimer* timer; // 0x10
		::System::Threading::CancellationTokenSource* linkedSource; // 0x18
		::System::Threading::CancellationTokenSource* originalLinkCancellationTokenSource; // 0x20
		::System::Threading::CancellationTokenSource* timeoutSource; // 0x28
		::System::Boolean isDisposed; // 0x30
		::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming; // 0x34
		::Cysharp::Threading::Tasks::DelayType delayType; // 0x38

		::System::Void _ctor(::Cysharp::Threading::Tasks::DelayType a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Threading::CancellationTokenSource* a1, ::Cysharp::Threading::Tasks::DelayType a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationTokenSource*, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER__CCTOR_OFFSET))();
		}

		static ::System::Void CancelCancellationTokenSourceState(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_CANCELCANCELLATIONTOKENSOURCESTATE_OFFSET))(a1);
		}

		::System::Threading::CancellationToken Timeout(::System::Int32 a1)
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_TIMEOUT_OFFSET))(this, a1);
		}

		::System::Threading::CancellationToken Timeout_1(::System::TimeSpan a1)
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_TIMEOUT_1_OFFSET))(this, a1);
		}

		::System::Boolean IsTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_ISTIMEOUT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TIMEOUTCONTROLLER_DISPOSE_OFFSET))(this);
		}
	};
}
