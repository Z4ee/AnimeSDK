#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKFIELDASSIGNER_SETTASKFIELD_OFFSET UNITYSDK_OFFSET(0xA96D20)
#define BEHAVIORDESIGNER_RUNTIME_TASKFIELDASSIGNER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA96CF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKFIELDASSIGNER__CTOR_OFFSET UNITYSDK_OFFSET(0xA96CD0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int TaskFieldAssigner_TypeDefinitionIndex = 33896;

	struct alignas(8) TaskFieldAssigner
	{
		::System::Object* _task; // 0x10
		::System::Boolean _isArrayField; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _idList; // 0x20
		::System::Func_2<::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Boolean>* _canAssign; // 0x28
		::System::Func_2<::System::Int32, ::System::Object*>* _arrayCreator; // 0x30
		::System::Action_3<::System::Object*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Int32>* _arraySetter; // 0x38
		::System::Int32 _taskId; // 0x40
		::System::Action_2<::System::Object*, ::System::Object*>* _assigner; // 0x48

		::System::Void _ctor(::System::Object* task, ::System::Int32 taskId, ::System::Action_2<::System::Object*, ::System::Object*>* assigner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Action_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKFIELDASSIGNER__CTOR_OFFSET))(this, task, taskId, assigner);
		}

		::System::Void _ctor_1(::System::Object* task, ::System::Collections::Generic::List_1<::System::Int32>* idList, ::System::Func_2<::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Boolean>* canAssign, ::System::Func_2<::System::Int32, ::System::Object*>* arrayCreator, ::System::Action_3<::System::Object*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Int32>* arraySetter, ::System::Action_2<::System::Object*, ::System::Object*>* assigner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Func_2<::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Boolean>*, ::System::Func_2<::System::Int32, ::System::Object*>*, ::System::Action_3<::System::Object*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Int32>*, ::System::Action_2<::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKFIELDASSIGNER__CTOR_1_OFFSET))(this, task, idList, canAssign, arrayCreator, arraySetter, assigner);
		}

		/*
		::System::Void SetTaskField(::BehaviorDesigner::Runtime::IDToTaskWrapper idToTask)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::IDToTaskWrapper))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKFIELDASSIGNER_SETTASKFIELD_OFFSET))(this, idToTask);
		}
		*/
	};
}
