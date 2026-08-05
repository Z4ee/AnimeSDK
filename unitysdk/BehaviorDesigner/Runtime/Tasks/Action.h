#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Task.h"

namespace BehaviorDesigner::Runtime::Tasks::Services { class SubTask; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_GET_PROXY_SUBTASKS_OFFSET UNITYSDK_OFFSET(0x1F217A70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_GET_SUBTASKS_OFFSET UNITYSDK_OFFSET(0x1F217A90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_SET_PROXY_SUBTASKS_OFFSET UNITYSDK_OFFSET(0x1F217A80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_SET_SUBTASKS_OFFSET UNITYSDK_OFFSET(0x1F217AA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F217AB0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Action_TypeDefinitionIndex = 33940;

	class Action : public ::BehaviorDesigner::Runtime::Tasks::Task
	{
	public:
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>* _subTasks; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>* get_Proxy_subTasks()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_GET_PROXY_SUBTASKS_OFFSET))(this);
		}

		::System::Void set_Proxy_subTasks(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_SET_PROXY_SUBTASKS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>* get_SubTasks()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_GET_SUBTASKS_OFFSET))(this);
		}

		::System::Void set_SubTasks(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Services::SubTask*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_ACTION_SET_SUBTASKS_OFFSET))(this, value);
		}
	};
}
