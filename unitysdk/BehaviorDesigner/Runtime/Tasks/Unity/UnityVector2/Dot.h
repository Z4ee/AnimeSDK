#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1ED070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1ECF10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1ED0D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1ED160)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1ED1F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector2
{
	inline static constexpr unsigned int Dot_TypeDefinitionIndex = 34045;

	class Dot : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* leftHandSide; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedVector2* rightHandSide; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DOT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
