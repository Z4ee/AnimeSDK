#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DCD40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DCB70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DCDD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5DCE60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5DCEA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int CompareTo_TypeDefinitionIndex = 34103;

	class CompareTo : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedString* firstString; // 0x60
		::BehaviorDesigner::Runtime::SharedString* secondString; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_COMPARETO___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
