#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Triggers { class AsyncDestroyTrigger; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_1_OFFSET UNITYSDK_OFFSET(0x1FB42DA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_OFFSET UNITYSDK_OFFSET(0x1FB42D60)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerExtensions_TypeDefinitionIndex = 31931;

	class AsyncTriggerExtensions : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* GetAsyncDestroyTrigger(::UnityEngine::GameObject* gameObject)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_OFFSET))(gameObject);
		}

		static ::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger* GetAsyncDestroyTrigger_1(::UnityEngine::Component* component)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::AsyncDestroyTrigger*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCTRIGGEREXTENSIONS_GETASYNCDESTROYTRIGGER_1_OFFSET))(component);
		}
	};
}
