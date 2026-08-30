#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class IPlayerLoopItem; }
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class MinimumQueue_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1EA55E00)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EA561C0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_EARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56C60)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56C80)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_INITIALIZATION_OFFSET UNITYSDK_OFFSET(0x1EA56C40)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56C70)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56C90)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTINITIALIZATION_OFFSET UNITYSDK_OFFSET(0x1EA56C50)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56D10)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTPRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56CF0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTPREUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56CB0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56CD0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56D00)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56CE0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56CA0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUNCORE_OFFSET UNITYSDK_OFFSET(0x1EA562E0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUN_OFFSET UNITYSDK_OFFSET(0x1EA562D0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56CC0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA55C50)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PlayerLoopRunner_TypeDefinitionIndex = 43076;

	class PlayerLoopRunner : public ::System::Object
	{
	public:
		// static const ::System::Int32 InitialSize = 0x10; // 0x0
		::System::Action_1<::System::Exception*>* unhandledExceptionCallback; // 0x10
		::Il2CppArray<::Cysharp::Threading::Tasks::IPlayerLoopItem*>* loopItems; // 0x18
		::System::Object* runningAndQueueLock; // 0x20
		::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>* waitQueue; // 0x28
		::System::Object* arrayLock; // 0x30
		::System::Boolean running; // 0x38
		::System::Int32 tail; // 0x3C
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x40

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER__CTOR_OFFSET))(this, a1);
		}

		::System::Void AddAction(::Cysharp::Threading::Tasks::IPlayerLoopItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IPlayerLoopItem*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_ADDACTION_OFFSET))(this, a1);
		}

		::System::Int32 Clear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_CLEAR_OFFSET))(this);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUN_OFFSET))(this);
		}

		::System::Void Initialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_INITIALIZATION_OFFSET))(this);
		}

		::System::Void LastInitialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTINITIALIZATION_OFFSET))(this);
		}

		::System::Void EarlyUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_EARLYUPDATE_OFFSET))(this);
		}

		::System::Void LastEarlyUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTEARLYUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LastFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void PreUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_PREUPDATE_OFFSET))(this);
		}

		::System::Void LastPreUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTPREUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_UPDATE_OFFSET))(this);
		}

		::System::Void LastUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTUPDATE_OFFSET))(this);
		}

		::System::Void PreLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_PRELATEUPDATE_OFFSET))(this);
		}

		::System::Void LastPreLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTPRELATEUPDATE_OFFSET))(this);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void LastPostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_LASTPOSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void RunCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER_RUNCORE_OFFSET))(this);
		}
	};
}
