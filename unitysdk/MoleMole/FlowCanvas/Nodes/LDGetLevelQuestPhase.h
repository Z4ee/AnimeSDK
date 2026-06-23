#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A397E40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A397D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A397EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A397F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1A397FE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetLevelQuestPhase_TypeDefinitionIndex = 86610;

	class LDGetLevelQuestPhase : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* levelQuestID; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Int32>* levelPhase; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::FlowInput* input; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELQUESTPHASE__REGISTERPORTS_B__4_1_OFFSET))(this);
		}
	};
}
