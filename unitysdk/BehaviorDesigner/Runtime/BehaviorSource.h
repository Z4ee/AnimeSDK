#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class IBehavior; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class TaskSerializationData; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_CHECKFORSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1D4A06B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GETALLVARIABLES_OFFSET UNITYSDK_OFFSET(0x1D4A3EC0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D4A3B40)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x1D4A0310)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_DETACHEDTASKS_OFFSET UNITYSDK_OFFSET(0x1D4A0370)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_ENTRYTASK_OFFSET UNITYSDK_OFFSET(0x1D4A0330)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_HASSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D4A0440)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1D4A0480)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_ROOTTASK_OFFSET UNITYSDK_OFFSET(0x1D4A0350)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_TASKDATA_OFFSET UNITYSDK_OFFSET(0x1D4A0460)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1D4A0390)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D4A0580)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_LOAD_OFFSET UNITYSDK_OFFSET(0x1D4A0640)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_REPLACEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D4A3F10)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SAVE_OFFSET UNITYSDK_OFFSET(0x1D4A05D0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SETALLVARIABLES_OFFSET UNITYSDK_OFFSET(0x1D4A03F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1D4A4130)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x1D4A0320)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_DETACHEDTASKS_OFFSET UNITYSDK_OFFSET(0x1D4A0380)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_ENTRYTASK_OFFSET UNITYSDK_OFFSET(0x1D4A0340)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_HASSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D4A0450)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1D4A0490)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_ROOTTASK_OFFSET UNITYSDK_OFFSET(0x1D4A0360)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_TASKDATA_OFFSET UNITYSDK_OFFSET(0x1D4A0470)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_VARIABLES_OFFSET UNITYSDK_OFFSET(0x1D4A03A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D4A4420)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_UPDATEVARIABLENAME_OFFSET UNITYSDK_OFFSET(0x1D4A43B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_UPDATEVARIABLESINDEX_OFFSET UNITYSDK_OFFSET(0x1D4A3CB0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D4A04F0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A04A0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D4A48C0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorSource_TypeDefinitionIndex = 33235;

	class BehaviorSource : public ::System::Object
	{
	public:
		::System::String* behaviorName; // 0x10
		::System::String* behaviorDescription; // 0x18
		::System::Int32 behaviorID; // 0x20
		::BehaviorDesigner::Runtime::Tasks::Task* mEntryTask; // 0x28
		::BehaviorDesigner::Runtime::Tasks::Task* mRootTask; // 0x30
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* mDetachedTasks; // 0x38
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* mVariables; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* mSharedVariableIndex; // 0x48
		::System::Boolean mHasSerialized; // 0x50
		::BehaviorDesigner::Runtime::TaskSerializationData* mTaskData; // 0x58
		::BehaviorDesigner::Runtime::IBehavior* mOwner; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BehaviorDesigner::Runtime::IBehavior* owner)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::IBehavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE__CTOR_1_OFFSET))(this, owner);
		}

		::System::Int32 get_BehaviorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_BEHAVIORID_OFFSET))(this);
		}

		::System::Void set_BehaviorID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_BEHAVIORID_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* get_EntryTask()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_ENTRYTASK_OFFSET))(this);
		}

		::System::Void set_EntryTask(::BehaviorDesigner::Runtime::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_ENTRYTASK_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* get_RootTask()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_ROOTTASK_OFFSET))(this);
		}

		::System::Void set_RootTask(::BehaviorDesigner::Runtime::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_ROOTTASK_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* get_DetachedTasks()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_DETACHEDTASKS_OFFSET))(this);
		}

		::System::Void set_DetachedTasks(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_DETACHEDTASKS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* get_Variables()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_VARIABLES_OFFSET))(this);
		}

		::System::Void set_Variables(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_VARIABLES_OFFSET))(this, value);
		}

		::System::Boolean get_HasSerialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_HASSERIALIZED_OFFSET))(this);
		}

		::System::Void set_HasSerialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_HASSERIALIZED_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::TaskSerializationData* get_TaskData()
		{
			return ((::BehaviorDesigner::Runtime::TaskSerializationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_TASKDATA_OFFSET))(this);
		}

		::System::Void set_TaskData(::BehaviorDesigner::Runtime::TaskSerializationData* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::TaskSerializationData*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_TASKDATA_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::IBehavior* get_Owner()
		{
			return ((::BehaviorDesigner::Runtime::IBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::BehaviorDesigner::Runtime::IBehavior* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::IBehavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SET_OWNER_OFFSET))(this, value);
		}

		::System::Void Initialize(::BehaviorDesigner::Runtime::IBehavior* owner)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::IBehavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_INITIALIZE_OFFSET))(this, owner);
		}

		::System::Void Save(::BehaviorDesigner::Runtime::Tasks::Task* entryTask, ::BehaviorDesigner::Runtime::Tasks::Task* rootTask, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* detachedTasks)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SAVE_OFFSET))(this, entryTask, rootTask, detachedTasks);
		}

		::System::Void Load(::BehaviorDesigner::Runtime::Tasks::Task*& entryTask, ::BehaviorDesigner::Runtime::Tasks::Task*& rootTask, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*& detachedTasks)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*&, ::BehaviorDesigner::Runtime::Tasks::Task*&, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_LOAD_OFFSET))(this, entryTask, rootTask, detachedTasks);
		}

		::System::Boolean CheckForSerialization(::System::Boolean force, ::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::BehaviorDesigner::Runtime::BehaviorSource*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_CHECKFORSERIALIZATION_OFFSET))(this, force, behaviorSource);
		}

		::BehaviorDesigner::Runtime::SharedVariable* GetVariable(::System::String* name)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GETVARIABLE_OFFSET))(this, name);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* GetAllVariables()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_GETALLVARIABLES_OFFSET))(this);
		}

		::System::Void ReplaceVariable(::System::String* name, ::BehaviorDesigner::Runtime::SharedVariable* sharedVariable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_REPLACEVARIABLE_OFFSET))(this, name, sharedVariable);
		}

		::System::Void SetVariable(::System::String* name, ::BehaviorDesigner::Runtime::SharedVariable* sharedVariable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SETVARIABLE_OFFSET))(this, name, sharedVariable);
		}

		::System::Void UpdateVariableName(::BehaviorDesigner::Runtime::SharedVariable* sharedVariable, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::SharedVariable*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_UPDATEVARIABLENAME_OFFSET))(this, sharedVariable, name);
		}

		::System::Void SetAllVariables(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>* variables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::SharedVariable*>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_SETALLVARIABLES_OFFSET))(this, variables);
		}

		::System::Void UpdateVariablesIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_UPDATEVARIABLESINDEX_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORSOURCE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
