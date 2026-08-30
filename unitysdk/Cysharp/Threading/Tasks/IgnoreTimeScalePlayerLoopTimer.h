#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTimer.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET UNITYSDK_OFFSET(0x1D74A070)
#define CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_RESETCORE_OFFSET UNITYSDK_OFFSET(0x1D749EF0)
#define CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D749EA0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int IgnoreTimeScalePlayerLoopTimer_TypeDefinitionIndex = 42628;

	class IgnoreTimeScalePlayerLoopTimer : public ::Cysharp::Threading::Tasks::PlayerLoopTimer
	{
	public:
		::System::Single interval; // 0x30
		::System::Int32 initialFrame; // 0x34
		::System::Single elapsed; // 0x38

		::System::Void _ctor(::System::TimeSpan a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Action_1<::System::Object*>* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean MoveNextCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_MOVENEXTCORE_OFFSET))(this);
		}

		::System::Void ResetCore(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IGNORETIMESCALEPLAYERLOOPTIMER_RESETCORE_OFFSET))(this, a1);
		}
	};
}
