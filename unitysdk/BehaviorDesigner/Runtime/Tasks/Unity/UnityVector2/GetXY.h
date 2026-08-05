#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FEED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FED70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FEF30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FEFC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FF050)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector2
{
	inline static constexpr unsigned int GetXY_TypeDefinitionIndex = 34051;

	class GetXY : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* vector2Variable; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeY; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* storeX; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETXY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
