#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9AEBE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9AEA00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9AEC70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9AED00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9AED90)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityInput
{
	inline static constexpr unsigned int GetAxis_TypeDefinitionIndex = 34335;

	class GetAxis : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* multiplier; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedString* axisName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYINPUT_GETAXIS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
