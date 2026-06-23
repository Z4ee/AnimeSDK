#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_BEHAVIORDESIGNER_RUNTIME_IBEHAVIOR_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1E32C660)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_CHECKFORSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E32BE70)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKSWITHNAME_1_OFFSET UNITYSDK_OFFSET(0x1E32C460)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKSWITHNAME_OFFSET UNITYSDK_OFFSET(0x1E32C300)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKWITHNAME_1_OFFSET UNITYSDK_OFFSET(0x1E32C180)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKWITHNAME_OFFSET UNITYSDK_OFFSET(0x1E32C0D0)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETBEHAVIORSOURCE_OFFSET UNITYSDK_OFFSET(0x1E32BC70)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1E32BD00)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETOWNERNAME_OFFSET UNITYSDK_OFFSET(0x1E32BD40)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E32BED0)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GET_BEHAVIORSOURCE_OFFSET UNITYSDK_OFFSET(0x1E32BC50)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E32BDD0)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_INIT_OFFSET UNITYSDK_OFFSET(0x1E32BDE0)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SETBEHAVIORSOURCE_OFFSET UNITYSDK_OFFSET(0x1E32BCB0)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SETVARIABLEVALUE_OFFSET UNITYSDK_OFFSET(0x1E32C040)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SETVARIABLE_OFFSET UNITYSDK_OFFSET(0x1E32BF80)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SET_BEHAVIORSOURCE_OFFSET UNITYSDK_OFFSET(0x1E32BC60)
#define BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32C600)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int ExternalBehavior_TypeDefinitionIndex = 33240;

	class ExternalBehavior : public ::UnityEngine::ScriptableObject
	{
	public:
		::BehaviorDesigner::Runtime::BehaviorSource* mBehaviorSource; // 0x18
		::System::Boolean mInitialized; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::BehaviorSource* get_BehaviorSource()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GET_BEHAVIORSOURCE_OFFSET))(this);
		}

		::System::Void set_BehaviorSource(::BehaviorDesigner::Runtime::BehaviorSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorSource*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SET_BEHAVIORSOURCE_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::BehaviorSource* GetBehaviorSource()
		{
			return ((::BehaviorDesigner::Runtime::BehaviorSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETBEHAVIORSOURCE_OFFSET))(this);
		}

		::System::Void SetBehaviorSource(::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorSource*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SETBEHAVIORSOURCE_OFFSET))(this, behaviorSource);
		}

		::UnityEngine::Object* GetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETOBJECT_OFFSET))(this);
		}

		::System::String* GetOwnerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETOWNERNAME_OFFSET))(this);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GET_INITIALIZED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_INIT_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::SharedVariable* GetVariable(::System::String* name)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_GETVARIABLE_OFFSET))(this, name);
		}

		::System::Void SetVariable(::System::String* name, ::BehaviorDesigner::Runtime::SharedVariable* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::SharedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SETVARIABLE_OFFSET))(this, name, item);
		}

		::System::Void SetVariableValue(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_SETVARIABLEVALUE_OFFSET))(this, name, value);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* FindTaskWithName(::System::String* taskName)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKWITHNAME_OFFSET))(this, taskName);
		}

		::System::Void CheckForSerialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_CHECKFORSERIALIZATION_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* FindTaskWithName_1(::System::String* taskName, ::BehaviorDesigner::Runtime::Tasks::Task* task)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKWITHNAME_1_OFFSET))(this, taskName, task);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* FindTasksWithName(::System::String* taskName)
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKSWITHNAME_OFFSET))(this, taskName);
		}

		::System::Void FindTasksWithName_1(::System::String* taskName, ::BehaviorDesigner::Runtime::Tasks::Task* task, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*& taskList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*&))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_FINDTASKSWITHNAME_1_OFFSET))(this, taskName, task, taskList);
		}

		::System::Int32 BehaviorDesigner_Runtime_IBehavior_GetInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_EXTERNALBEHAVIOR_BEHAVIORDESIGNER_RUNTIME_IBEHAVIOR_GETINSTANCEID_OFFSET))(this);
		}
	};
}
