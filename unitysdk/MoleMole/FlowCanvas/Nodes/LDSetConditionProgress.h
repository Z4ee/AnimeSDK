#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7ED6FB196966E0B0.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_025FF4981524A424_190;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1427F110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1427F280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1427F2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1427F770)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetConditionProgress_TypeDefinitionIndex = 81308;

	class LDSetConditionProgress : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _conditionID; // 0xA8
		::FlowCanvas::ValueInput_1<::Enum_3_7ED6FB196966E0B0>* _modifyType; // 0xB0
		::FlowCanvas::FlowOutput* _failure; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* _progress; // 0xC0
		::FlowCanvas::FlowOutput* _output; // 0xC8
		::FlowCanvas::FlowOutput* _success; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_1(::Class_3_025FF4981524A424_190* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_190*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCONDITIONPROGRESS__REGISTERPORTS_B__6_1_OFFSET))(this, rsp);
		}
	};
}
