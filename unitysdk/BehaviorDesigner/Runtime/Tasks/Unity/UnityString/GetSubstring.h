#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9B18D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9B1570)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9B1970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9B1A20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9B1AB0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int GetSubstring_TypeDefinitionIndex = 34107;

	class GetSubstring : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* length; // 0x58
		::BehaviorDesigner::Runtime::SharedString* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedString* targetString; // 0x68
		::BehaviorDesigner::Runtime::SharedInt* startIndex; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETSUBSTRING___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
