#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE_CHECK_OFFSET UNITYSDK_OFFSET(0x13690DE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13690CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x13690EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x13690F00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDHasCutScene_TypeDefinitionIndex = 75105;

	class LDHasCutScene : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* TrueOutput; // 0xA8
		::FlowCanvas::FlowOutput* FalseOutput; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Check(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE_CHECK_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDHASCUTSCENE__REGISTERPORTS_B__2_0_OFFSET))(this, f);
		}
	};
}
