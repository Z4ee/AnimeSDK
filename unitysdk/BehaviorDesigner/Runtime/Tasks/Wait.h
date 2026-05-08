#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/Boolean.h"

class Class_2_9DAFE6A077A11AC9;
class Class_3_6D73516CC6FEADD7;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x14128950)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x14128A60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x141284D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONEND_OFFSET UNITYSDK_OFFSET(0x14129090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x14128EB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONRESET_OFFSET UNITYSDK_OFFSET(0x14129000)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONSTART_OFFSET UNITYSDK_OFFSET(0x141286D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14128BB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x141290E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x141291B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x14129240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x141292D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x14129360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x141293F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_WAIT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14129480)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Wait_TypeDefinitionIndex = 60637;

	class Wait : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* waitTime; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* randomWaitMin; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* randomWaitMax; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* randomWait; // 0x70
		::Class_2_9DAFE6A077A11AC9* waitTask; // 0x78
		::Class_3_6D73516CC6FEADD7* _aiCharacter; // 0x80
		::System::Single pauseTime; // 0x88
		::MoleMole::Config::Boolean IgnoreTimeScale; // 0x8C
		::System::Single waitDuration; // 0x90
		::System::Single startTime; // 0x94

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
