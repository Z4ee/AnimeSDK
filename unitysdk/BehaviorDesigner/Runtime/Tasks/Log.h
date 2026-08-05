#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_LOG_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8B890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_LOG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8B5C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_LOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8B920)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_LOG___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8B9B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_LOG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8BA40)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 33973;

	class Log : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* logError; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* logTime; // 0x60
		::BehaviorDesigner::Runtime::SharedString* text; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_LOG__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_LOG_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_LOG_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_LOG___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_LOG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
