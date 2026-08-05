#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGenericVariable; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace System { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E472380)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E472720)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E472400)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4727A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E472830)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E4728C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E472950)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int Format_TypeDefinitionIndex = 34104;

	class Format : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedGenericVariable*>* variables; // 0x58
		::BehaviorDesigner::Runtime::SharedString* storeResult; // 0x60
		::Il2CppArray<::System::Object*>* variableValues; // 0x68
		::BehaviorDesigner::Runtime::SharedString* format; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_FORMAT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
