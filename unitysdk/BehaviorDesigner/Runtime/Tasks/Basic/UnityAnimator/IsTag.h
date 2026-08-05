#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E85E430)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E85DEC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E85E050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E85E4C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E85E550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E85E5E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E85E670)

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int IsTag_TypeDefinitionIndex = 34022;

	class IsTag : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedInt* index; // 0x58
		::UnityEngine::Animator* animator; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_UNITYANIMATOR_ISTAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
