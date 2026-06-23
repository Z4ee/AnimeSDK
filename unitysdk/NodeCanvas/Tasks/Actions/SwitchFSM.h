#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::StateMachines { class FSM; }
namespace NodeCanvas::StateMachines { class FSMOwner; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SWITCHFSM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1BC5FEE0)
#define NODECANVAS_TASKS_ACTIONS_SWITCHFSM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC5FF50)
#define NODECANVAS_TASKS_ACTIONS_SWITCHFSM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC60080)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SwitchFSM_TypeDefinitionIndex = 29456;

	class SwitchFSM : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::StateMachines::FSMOwner*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::StateMachines::FSM*>* fsm; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SWITCHFSM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SWITCHFSM_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SWITCHFSM_ONEXECUTE_OFFSET))(this);
		}
	};
}
