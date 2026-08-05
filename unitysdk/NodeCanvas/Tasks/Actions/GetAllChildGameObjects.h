#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D06CE50)
#define NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS_GET_OFFSET UNITYSDK_OFFSET(0x1D06D420)
#define NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D06CF20)
#define NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D7E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetAllChildGameObjects_TypeDefinitionIndex = 30802;

	class GetAllChildGameObjects : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* saveAs; // 0x60
		::System::Boolean recursive; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS_ONEXECUTE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Get(::UnityEngine::Transform* parent)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETALLCHILDGAMEOBJECTS_GET_OFFSET))(this, parent);
		}
	};
}
