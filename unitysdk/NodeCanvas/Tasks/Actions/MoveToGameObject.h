#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1CC4B7E0)
#define NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1CC4BFE0)
#define NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1CC4B820)
#define NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1CC4BFD0)
#define NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1CC4BF30)
#define NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CC4BB90)
#define NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4C1E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MoveToGameObject_TypeDefinitionIndex = 29134;

	class MoveToGameObject : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::AI::NavMeshAgent*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* keepDistance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x70
		::System::Nullable_1<::UnityEngine::Vector3> lastRequest; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONSTOP_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOGAMEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
