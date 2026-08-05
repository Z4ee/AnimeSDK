#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObjectList; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E2520)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E2360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E25C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E2650)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E26E0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityGameObject
{
	inline static constexpr unsigned int FindGameObjectsWithTag_TypeDefinitionIndex = 34354;

	class FindGameObjectsWithTag : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObjectList* storeValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_FINDGAMEOBJECTSWITHTAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
