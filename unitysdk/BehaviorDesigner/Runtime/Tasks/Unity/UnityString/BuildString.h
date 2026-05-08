#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C056930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0567D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C056980)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1C056A10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C056AA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int BuildString_TypeDefinitionIndex = 31915;

	class BuildString : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* storeResult; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedString*>* source; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
