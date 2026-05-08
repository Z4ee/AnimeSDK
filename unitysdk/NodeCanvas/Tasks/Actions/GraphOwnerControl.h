#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/GraphOwnerControl_Control.h"

namespace NodeCanvas::Framework { class GraphOwner; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_DO_OFFSET UNITYSDK_OFFSET(0x1B4A5CD0)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B4A5940)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4A5A10)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1B4A5DB0)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_YIELDDO_OFFSET UNITYSDK_OFFSET(0x1B4A5C80)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A5E20)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B4A5E30)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GraphOwnerControl_TypeDefinitionIndex = 27549;

	class GraphOwnerControl : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		::NodeCanvas::Tasks::Actions::GraphOwnerControl_Control control; // 0x60
		::System::Boolean waitActionFinish; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONEXECUTE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* YieldDo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_YIELDDO_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_DO_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONSTOP_OFFSET))(this);
		}

		::System::Void _OnExecute_b__5_0(::System::Boolean s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__ONEXECUTE_B__5_0_OFFSET))(this, s);
		}
	};
}
