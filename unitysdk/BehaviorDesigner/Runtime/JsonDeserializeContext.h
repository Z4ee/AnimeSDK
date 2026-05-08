#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/TaskFieldAssigner.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class IVariableSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZECONTEXT_GET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x1BEB2540)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZECONTEXT_SET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x1BEB2550)
#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB2560)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int JsonDeserializeContext_TypeDefinitionIndex = 31705;

	class JsonDeserializeContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* UnityObjects; // 0x10
		::BehaviorDesigner::Runtime::IVariableSource* VariableSource; // 0x18
		::System::Boolean UpdatedSerialization; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>* get_TaskIDs()
		{
			return ((::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZECONTEXT_GET_TASKIDS_OFFSET))(this);
		}

		::System::Void set_TaskIDs(::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::TaskFieldAssigner>*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZECONTEXT_SET_TASKIDS_OFFSET))(this, value);
		}
	};
}
