#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_INSTANTIATEGAMEOBJECT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B4B8F80)
#define NODECANVAS_TASKS_ACTIONS_INSTANTIATEGAMEOBJECT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4B9510)
#define NODECANVAS_TASKS_ACTIONS_INSTANTIATEGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B9710)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int InstantiateGameObject_TypeDefinitionIndex = 27587;

	class InstantiateGameObject : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveCloneAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Transform*>* parent; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* clonePosition; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* cloneRotation; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_INSTANTIATEGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_INSTANTIATEGAMEOBJECT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_INSTANTIATEGAMEOBJECT_ONEXECUTE_OFFSET))(this);
		}
	};
}
