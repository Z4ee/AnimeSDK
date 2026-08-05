#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class FieldSerializationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_VARIABLESERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DF180)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int VariableSerializationData_TypeDefinitionIndex = 33901;

	class VariableSerializationData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* variableStartIndex; // 0x10
		::System::String* JSONSerialization; // 0x18
		::BehaviorDesigner::Runtime::FieldSerializationData* fieldSerializationData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_VARIABLESERIALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
