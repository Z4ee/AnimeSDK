#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedMaterial; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1EBA00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1EB670)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1EB800)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1EBA50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1EBAE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1EBB70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1EBC00)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRenderer
{
	inline static constexpr unsigned int SetMaterial_TypeDefinitionIndex = 34213;

	class SetMaterial : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedMaterial* material; // 0x68
		::UnityEngine::Renderer* renderer; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRENDERER_SETMATERIAL___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
