#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/TaskCompletionSourceNodeHandle.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19DAE150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK_START_OFFSET UNITYSDK_OFFSET(0x19DAE240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAE3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENDTASK__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x19DAE3E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEndTask_TypeDefinitionIndex = 59406;

	class LDEndTask : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::TaskCompletionSourceNodeHandle>* taskInput; // 0xB0

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
