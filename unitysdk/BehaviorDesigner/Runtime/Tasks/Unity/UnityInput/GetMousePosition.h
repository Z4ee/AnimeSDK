#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E8FF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E8F50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E9050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E90E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E9170)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int GetMousePosition_TypeDefinitionIndex = 34340;

	class GetMousePosition : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETMOUSEPOSITION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
