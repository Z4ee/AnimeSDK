#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x136A0B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x136A0C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x136A0CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x136A1360)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetLevelConditionTargetNum_TypeDefinitionIndex = 79054;

	class LD_SetLevelConditionTargetNum : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* _levelConditionDuration; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _levelConditionNum; // 0xB0
		::FlowCanvas::FlowOutput* _flowOutput; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* _levelConditionID; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM__REGISTERPORTS_B__4_0_OFFSET))(this, flow);
		}

		::System::Int32 _RegisterPorts_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETLEVELCONDITIONTARGETNUM__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
