#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class FieldSerializationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDACB0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int TaskSerializationData_TypeDefinitionIndex = 33264;

	class TaskSerializationData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* types; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* parentIndex; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* startIndex; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* variableStartIndex; // 0x28
		::System::String* JSONSerialization; // 0x30
		::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData; // 0x38
		::System::String* Version; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
