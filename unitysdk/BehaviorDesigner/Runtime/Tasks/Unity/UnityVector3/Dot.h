#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F533290)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5330F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F533300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F533390)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F533420)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3
{
	inline static constexpr unsigned int Dot_TypeDefinitionIndex = 34026;

	class Dot : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* rightHandSide; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* leftHandSide; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_DOT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
