#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/TaskFieldAssigner.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace BehaviorDesigner::Runtime { class BinaryDeserializeContext; }
namespace BehaviorDesigner::Runtime { class FieldSerializationData; }
namespace BehaviorDesigner::Runtime { class GlobalVariables; }
namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace BehaviorDesigner::Runtime { class TaskSerializationData; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDBYTESTOSHAREDVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1DDC3580)
#define BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDBYTESTOSHAREDVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DDC17C0)
#define BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOADFIELDS_OFFSET UNITYSDK_OFFSET(0x1DDC43F0)
#define BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOADTASK_OFFSET UNITYSDK_OFFSET(0x1DDC19F0)
#define BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_1_OFFSET UNITYSDK_OFFSET(0x1DDC2830)
#define BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_OFFSET UNITYSDK_OFFSET(0x1DDBFF40)
#define BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_TRYGETFIELDINDEX_OFFSET UNITYSDK_OFFSET(0x1DDC3330)

inline static constexpr unsigned int BinaryDeserialization_PrecompiledDeserialization_TypeDefinitionIndex = 33208;

class BinaryDeserialization_PrecompiledDeserialization : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>** StaticGet_AStaticField()
	{
		return (::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>**)Il2CppClass::FromTypeDefinitionIndex(BinaryDeserialization_PrecompiledDeserialization_TypeDefinitionIndex)->GetStaticField(0x274A0);
	}

	static ::System::Void PrecompiledLoad(::BehaviorDesigner::Runtime::TaskSerializationData* taskData, ::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource, ::System::Boolean loadTasks)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::TaskSerializationData*, ::BehaviorDesigner::Runtime::BehaviorSource*, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_OFFSET))(taskData, behaviorSource, loadTasks);
	}

	static ::System::Void PrecompiledLoad_1(::BehaviorDesigner::Runtime::GlobalVariables* globalVariables, ::System::String* version)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::GlobalVariables*, ::System::String*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOAD_1_OFFSET))(globalVariables, version);
	}

	static ::BehaviorDesigner::Runtime::SharedVariable* PrecompiledBytesToSharedVariable(::System::Boolean fromField, ::System::Int32 hashPrefix, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* context, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 dataPosition)
	{
		return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::System::Boolean, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDBYTESTOSHAREDVARIABLE_OFFSET))(fromField, hashPrefix, context, bytes, dataPosition);
	}

	static ::BehaviorDesigner::Runtime::SharedVariable* PrecompiledBytesToSharedVariable_1(::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer* deserializer, ::System::Boolean fromField, ::System::Int32 hashPrefix, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* context)
	{
		return ((::BehaviorDesigner::Runtime::SharedVariable*(*)(::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*, ::System::Boolean, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDBYTESTOSHAREDVARIABLE_1_OFFSET))(deserializer, fromField, hashPrefix, context);
	}

	static ::System::Void PrecompiledLoadTask(::BehaviorDesigner::Runtime::TaskSerializationData* taskSerializationData, ::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* taskList, ::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource)
	{
		return ((::System::Void(*)(::BehaviorDesigner::Runtime::TaskSerializationData*, ::BehaviorDesigner::Runtime::FieldSerializationData*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*, ::BehaviorDesigner::Runtime::BehaviorSource*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOADTASK_OFFSET))(taskSerializationData, fieldSerializationData, taskList, behaviorSource);
	}

	static ::System::Object* PrecompiledLoadFields(::System::String* fieldTypeName, ::System::Int32 hashPrefix, ::BehaviorDesigner::Runtime::BinaryDeserializeContext* context)
	{
		return ((::System::Object*(*)(::System::String*, ::System::Int32, ::BehaviorDesigner::Runtime::BinaryDeserializeContext*))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_PRECOMPILEDLOADFIELDS_OFFSET))(fieldTypeName, hashPrefix, context);
	}

	static ::System::Boolean TryGetFieldIndex(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* fieldIndexMap, ::System::String* fieldTypeName, ::System::String* fieldName, ::System::Int32 hashPrefix, ::System::Boolean shaHashSerialization, ::System::Int32& fieldIndex)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + BINARYDESERIALIZATION_PRECOMPILEDDESERIALIZATION_TRYGETFIELDINDEX_OFFSET))(fieldIndexMap, fieldTypeName, fieldName, hashPrefix, shaHashSerialization, fieldIndex);
	}
};
