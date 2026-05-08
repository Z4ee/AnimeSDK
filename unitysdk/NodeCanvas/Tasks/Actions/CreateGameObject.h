#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_CREATEGAMEOBJECT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4232B0)
#define NODECANVAS_TASKS_ACTIONS_CREATEGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4234C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CreateGameObject_TypeDefinitionIndex = 27397;

	class CreateGameObject : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* rotation; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* objectName; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* position; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CREATEGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CREATEGAMEOBJECT_ONEXECUTE_OFFSET))(this);
		}
	};
}
