#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7D3600)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7D3440)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D3670)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7D3700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7D3790)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3
{
	inline static constexpr unsigned int Multiply_TypeDefinitionIndex = 34036;

	class Multiply : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* vector3Variable; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* multiplyBy; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_MULTIPLY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
