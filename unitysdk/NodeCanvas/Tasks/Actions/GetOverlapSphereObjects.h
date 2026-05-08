#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B423F10)
#define NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B423C10)
#define NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4240E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetOverlapSphereObjects_TypeDefinitionIndex = 26624;

	class GetOverlapSphereObjects : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* saveObjectsAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* radius; // 0x68
		::UnityEngine::LayerMask layerMask; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETOVERLAPSPHEREOBJECTS_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
