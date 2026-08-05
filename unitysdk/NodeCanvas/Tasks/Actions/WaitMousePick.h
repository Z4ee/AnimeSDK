#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/WaitMousePick_ButtonKeys.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF93D90)
#define NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF93E10)
#define NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF94120)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int WaitMousePick_TypeDefinitionIndex = 31190;

	class WaitMousePick : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveObjectAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* savePositionAs; // 0x70
		::NodeCanvas::Tasks::Actions::WaitMousePick_ButtonKeys buttonKey; // 0x78
		::UnityEngine::RaycastHit hit; // 0x7C
		::System::Int32 buttonID; // 0xB0
		::UnityEngine::LayerMask mask; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK_GET_INFO_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAITMOUSEPICK_ONUPDATE_OFFSET))(this);
		}
	};
}
