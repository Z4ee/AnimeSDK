#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F222CD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F222C70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F222D20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F222DB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F222E40)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector2
{
	inline static constexpr unsigned int GetUpVector_TypeDefinitionIndex = 34049;

	class GetUpVector : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_GETUPVECTOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
