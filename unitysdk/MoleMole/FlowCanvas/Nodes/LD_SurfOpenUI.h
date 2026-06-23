#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNodeBase.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182E0430)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI_START_OFFSET UNITYSDK_OFFSET(0x182E0500)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI__CTOR_OFFSET UNITYSDK_OFFSET(0x182E0630)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfOpenUI_TypeDefinitionIndex = 77638;

	class LD_SurfOpenUI : public ::FlowCanvas::Nodes::CallableActionNodeBase
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFOPENUI_START_OFFSET))(this, flow);
		}
	};
}
