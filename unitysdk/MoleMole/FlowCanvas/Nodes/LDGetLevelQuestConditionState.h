#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1427B460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1427B300)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1427B500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1427B540)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1427B600)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetLevelQuestConditionState_TypeDefinitionIndex = 55012;

	class LDGetLevelQuestConditionState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* input; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isFail; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::Int32>* value; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* levelQuestID; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__5_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTCONDITIONSTATE__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
