#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedColor; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8F9A70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8F9790)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F9B10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8F9BC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8F9C50)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityDebug
{
	inline static constexpr unsigned int DrawRay_TypeDefinitionIndex = 34363;

	class DrawRay : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* start; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* direction; // 0x60
		::BehaviorDesigner::Runtime::SharedColor* color; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYDEBUG_DRAWRAY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
