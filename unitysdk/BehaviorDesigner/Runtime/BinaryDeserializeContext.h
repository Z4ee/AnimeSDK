#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/TaskFieldAssigner.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class FieldSerializationData; }
namespace BehaviorDesigner::Runtime { class IVariableSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Cryptography { class SHA1; }

#define BEHAVIORDESIGNER_RUNTIME_BINARYDESERIALIZECONTEXT_GET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x1DE03D00)
#define BEHAVIORDESIGNER_RUNTIME_BINARYDESERIALIZECONTEXT_SET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x1DE03D10)
#define BEHAVIORDESIGNER_RUNTIME_BINARYDESERIALIZECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE03D20)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BinaryDeserializeContext_TypeDefinitionIndex = 33253;

	class BinaryDeserializeContext : public ::System::Object
	{
	public:
		::BehaviorDesigner::Runtime::FieldSerializationData* FieldSerializationData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FieldIndexMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* StringCache; // 0x20
		::System::Security::Cryptography::SHA1* Sha1; // 0x28
		::BehaviorDesigner::Runtime::IVariableSource* VariableSource; // 0x30
		::Il2CppArray<::System::Byte>* BytesBuffer; // 0x38
		::System::Boolean ShaHashSerialization; // 0x40
		::System::Boolean UpdatedSerialization; // 0x41
		::System::Boolean StrHashSerialization; // 0x42
		::System::Int32 AnimationCurveAdvance; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BINARYDESERIALIZECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>* get_TaskIDs()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BINARYDESERIALIZECONTEXT_GET_TASKIDS_OFFSET))(this);
		}

		::System::Void set_TaskIDs(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BINARYDESERIALIZECONTEXT_SET_TASKIDS_OFFSET))(this, value);
		}
	};
}
