#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }

#define NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION_DO_OFFSET UNITYSDK_OFFSET(0x1BC5F640)
#define NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC5F5A0)
#define NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC5F6E0)
#define NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5F780)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetMousePosition_TypeDefinitionIndex = 30852;

	class GetMousePosition : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveAs; // 0x60
		::System::Boolean repeat; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION_ONUPDATE_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETMOUSEPOSITION_DO_OFFSET))(this);
		}
	};
}
