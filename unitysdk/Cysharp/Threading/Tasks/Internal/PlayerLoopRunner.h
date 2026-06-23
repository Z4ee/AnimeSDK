#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class IPlayerLoopItem; }
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class MinimumQueue_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1E76B5F0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUNCORE_OFFSET UNITYSDK_OFFSET(0x1E76B950)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUN_OFFSET UNITYSDK_OFFSET(0x1E76B940)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76B420)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PlayerLoopRunner_TypeDefinitionIndex = 31476;

	class PlayerLoopRunner : public ::System::Object
	{
	public:
		::System::Object* arrayLock; // 0x10
		::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>* waitQueue; // 0x18
		::System::Action_1<::System::Exception*>* unhandledExceptionCallback; // 0x20
		::Il2CppArray<::Cysharp::Threading::Tasks::IPlayerLoopItem*>* loopItems; // 0x28
		::System::Object* runningAndQueueLock; // 0x30
		::System::Int32 tail; // 0x38
		::System::Boolean running; // 0x3C
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x40

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER__CTOR_OFFSET))(this, timing);
		}

		::System::Void AddAction(::Cysharp::Threading::Tasks::IPlayerLoopItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IPlayerLoopItem*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_ADDACTION_OFFSET))(this, item);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUN_OFFSET))(this);
		}

		::System::Void RunCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUNCORE_OFFSET))(this);
		}
	};
}
