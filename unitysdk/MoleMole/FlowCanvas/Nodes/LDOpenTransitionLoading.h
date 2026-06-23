#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB6110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB6270)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING__ONSTARTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x12BB6200)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x12BB62B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOpenTransitionLoading_TypeDefinitionIndex = 72092;

	class LDOpenTransitionLoading : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _transitionID; // 0xA8
		::FlowCanvas::FlowOutput* _Output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _OnStartComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING__ONSTARTCOMPLETE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOPENTRANSITIONLOADING__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}
	};
}
