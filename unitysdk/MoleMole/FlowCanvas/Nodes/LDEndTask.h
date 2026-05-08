#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/TaskCompletionSourceNodeHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x170C1B30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK_START_OFFSET UNITYSDK_OFFSET(0x170C1C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x170C1D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x170C1DC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEndTask_TypeDefinitionIndex = 62187;

	class LDEndTask : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::TaskCompletionSourceNodeHandle>* taskInput; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK_START_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
