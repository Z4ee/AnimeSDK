#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/TaskFieldAssigner.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace BehaviorDesigner::Runtime { class GlobalVariables; }
namespace BehaviorDesigner::Runtime { class JsonDeserializeContext; }
namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class TaskSerializationData; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B0493B0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZEREFERENCEDTASK_OFFSET UNITYSDK_OFFSET(0x1B049130)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZESHAREDVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1B0486A0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZESHAREDVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B0484B0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZETASK_OFFSET UNITYSDK_OFFSET(0x1B0473E0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1B046EA0)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_1_OFFSET UNITYSDK_OFFSET(0x1B048030)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_OFFSET UNITYSDK_OFFSET(0x1B0429D0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int JSONDeserialization_PrecompiledDeserialization_TypeDefinitionIndex = 31695;

	class JSONDeserialization_PrecompiledDeserialization : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>** StaticGet_AStaticField()
		{
			return (::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>**)Il2CppClass::FromTypeDefinitionIndex(JSONDeserialization_PrecompiledDeserialization_TypeDefinitionIndex)->GetStaticField(0x25990);
		}

		static ::System::Void PrecompiledLoad(::BehaviorDesigner::Runtime::TaskSerializationData* taskData, ::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource, ::System::Boolean loadTasks)
		{
			return ((::System::Void(*)(::BehaviorDesigner::Runtime::TaskSerializationData*, ::BehaviorDesigner::Runtime::BehaviorSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_OFFSET))(taskData, behaviorSource, loadTasks);
		}

		static ::System::Void PrecompiledLoad_1(::System::String* serialization, ::BehaviorDesigner::Runtime::GlobalVariables* globalVariables, ::System::String* version)
		{
			return ((::System::Void(*)(::System::String*, ::BehaviorDesigner::Runtime::GlobalVariables*, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_1_OFFSET))(serialization, globalVariables, version);
		}

		static ::System::Void PrecompiledDeserializeVariables(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::BehaviorDesigner::Runtime::JsonDeserializeContext* context)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZEVARIABLES_OFFSET))(dict, context);
		}

		static ::BehaviorDesigner::Runtime::SharedVariable* PrecompiledDeserializeSharedVariable(::System::Object* dict, ::System::Boolean fromSource, ::BehaviorDesigner::Runtime::JsonDeserializeContext* context)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::System::Object*, ::System::Boolean, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZESHAREDVARIABLE_OFFSET))(dict, fromSource, context);
		}

		static ::BehaviorDesigner::Runtime::SharedVariable* PrecompiledDeserializeSharedVariable_1(::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer* deserializer, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::System::Boolean fromSource, ::BehaviorDesigner::Runtime::JsonDeserializeContext* context)
		{
			return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Boolean, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZESHAREDVARIABLE_1_OFFSET))(deserializer, dict, fromSource, context);
		}

		static ::BehaviorDesigner::Runtime::Tasks::Task* PrecompiledDeserializeTask(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>* idToTask, ::BehaviorDesigner::Runtime::JsonDeserializeContext* context)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZETASK_OFFSET))(dict, idToTask, context);
		}

		static ::System::Object* PrecompiledDeserializeReferencedTask(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::BehaviorDesigner::Runtime::JsonDeserializeContext* context)
		{
			return ((::System::Object*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZEREFERENCEDTASK_OFFSET))(dict, context);
		}

		static ::System::Object* PrecompiledDeserializeObject(::BehaviorDesigner::Runtime::Tasks::Task* task, ::System::String* typeName, ::System::Object* dict, ::System::Boolean checkTypeInDict, ::BehaviorDesigner::Runtime::JsonDeserializeContext* context)
		{
			return ((::System::Object*(*)(::BehaviorDesigner::Runtime::Tasks::Task*, ::System::String*, ::System::Object*, ::System::Boolean, ::BehaviorDesigner::Runtime::JsonDeserializeContext*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDDESERIALIZEOBJECT_OFFSET))(task, typeName, dict, checkTypeInDict, context);
		}
	};
}
