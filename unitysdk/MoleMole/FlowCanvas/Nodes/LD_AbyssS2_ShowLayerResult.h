#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12618FB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x12619090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x126190D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT__REGISTERPORTS_B__2_1_OFFSET UNITYSDK_OFFSET(0x126192B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ShowLayerResult_TypeDefinitionIndex = 80706;

	class LD_AbyssS2_ShowLayerResult : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _finish; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_SHOWLAYERRESULT__REGISTERPORTS_B__2_1_OFFSET))(this);
		}
	};
}
