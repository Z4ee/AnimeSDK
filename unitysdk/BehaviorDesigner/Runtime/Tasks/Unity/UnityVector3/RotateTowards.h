#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1ED8A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1ED570)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1ED920)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1ED9B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1EDA40)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3
{
	inline static constexpr unsigned int RotateTowards_TypeDefinitionIndex = 34040;

	class RotateTowards : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* targetRotation; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* maxMagnitudeDelta; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* currentRotation; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* maxDegreesDelta; // 0x70
		::BehaviorDesigner::Runtime::SharedVector3* storeResult; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR3_ROTATETOWARDS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
