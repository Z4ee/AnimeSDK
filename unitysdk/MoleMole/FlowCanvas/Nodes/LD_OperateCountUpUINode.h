#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x161ECDB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x161ECF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x161ECF90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_OperateCountUpUINode_TypeDefinitionIndex = 64093;

	class LD_OperateCountUpUINode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* _showOrHide; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::Single>* _countUpTimeValue; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OPERATECOUNTUPUINODE__REGISTERPORTS_B__3_0_OFFSET))(this, flow);
		}
	};
}
