#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E3DD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1E3860)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E39F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E3E60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E3EF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1E3F80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E4010)

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int IsName_TypeDefinitionIndex = 34021;

	class IsName : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* index; // 0x50
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::Animator* animator; // 0x68
		::BehaviorDesigner::Runtime::SharedString* name; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISNAME___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
