#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/Boolean.h"

class Class_2_9DAFE6A077A11AC9;
class Class_3_D252341484B6EB1D;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1454E690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1454E790)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1454E100)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONEND_OFFSET UNITYSDK_OFFSET(0x1454EF10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1454ECD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1454EE80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1454E300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1454E8D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1454EF60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1454F040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1454F0D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1454F160)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1454F1F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1454F280)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1454F310)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Wait_TypeDefinitionIndex = 79043;

	class Wait : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_2_9DAFE6A077A11AC9* waitTask; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* randomWait; // 0x60
		::Class_3_D252341484B6EB1D* _aiCharacter; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* randomWaitMin; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* waitTime; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* randomWaitMax; // 0x80
		::System::Single startTime; // 0x88
		::System::Single waitDuration; // 0x8C
		::MoleMole::Config::Boolean IgnoreTimeScale; // 0x90
		::System::Single pauseTime; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONSTART_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnPause(::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONPAUSE_OFFSET))(this, paused);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONRESET_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnPause(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONPAUSE_OFFSET))(this, P0);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
