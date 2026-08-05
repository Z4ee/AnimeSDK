#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Task.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F8F6F60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F8F6630)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1F8F6C40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8F66B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1F8F6730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_DECORATE_OFFSET UNITYSDK_OFFSET(0x1F8F6BF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_FINALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F8F6BA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GETUTILITY_OFFSET UNITYSDK_OFFSET(0x1F8F6D60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8F6B30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_PROXYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8F6B10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8F6B50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_1_OFFSET UNITYSDK_OFFSET(0x1F8F6850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F8F6C80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_1_OFFSET UNITYSDK_OFFSET(0x1F8F68F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1F8F6CD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1F8F6990)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1F8F6E70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_1_OFFSET UNITYSDK_OFFSET(0x1F8F6D10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1F8F6AC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_REPLACEADDCHILD_OFFSET UNITYSDK_OFFSET(0x1F8F7040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8F6B40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_PROXYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F8F6B20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F70F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_GETUTILITY_OFFSET UNITYSDK_OFFSET(0x1F8F7180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1F8F7210)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ParentTask_TypeDefinitionIndex = 33942;

	class ParentTask : public ::BehaviorDesigner::Runtime::Tasks::Task
	{
	public:
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* children; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* get_Proxychildren()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_PROXYCHILDREN_OFFSET))(this);
		}

		::System::Void set_Proxychildren(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_PROXYCHILDREN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void set_Children(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_SET_CHILDREN_OFFSET))(this, value);
		}

		::System::Int32 MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_MAXCHILDREN_OFFSET))(this);
		}

		::System::Boolean CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANEXECUTE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus FinalOverride(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_FINALOVERRIDE_OFFSET))(this, status);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_DECORATE_OFFSET))(this, status);
		}

		::System::Boolean CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_CANREEVALUATE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnChildExecuted_1(::System::Int32 childIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDEXECUTED_1_OFFSET))(this, childIndex, childStatus);
		}

		::System::Void OnChildStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_OFFSET))(this);
		}

		::System::Void OnChildStarted_1(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCHILDSTARTED_1_OFFSET))(this, childIndex);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus_1()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_OVERRIDESTATUS_1_OFFSET))(this);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Single GetUtility()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_GETUTILITY_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void AddChild(::BehaviorDesigner::Runtime::Tasks::Task* child, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_ADDCHILD_OFFSET))(this, child, index);
		}

		::System::Void ReplaceAddChild(::BehaviorDesigner::Runtime::Tasks::Task* child, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK_REPLACEADDCHILD_OFFSET))(this, child, index);
		}

		::System::Single __base_GetUtility()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_GETUTILITY_OFFSET))(this);
		}

		::System::Void __base_OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARENTTASK___BASE_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
