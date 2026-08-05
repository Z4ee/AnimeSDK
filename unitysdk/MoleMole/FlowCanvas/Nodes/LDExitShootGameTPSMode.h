#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSHOOTGAMETPSMODE_PROCESS_OFFSET UNITYSDK_OFFSET(0x19BDC590)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSHOOTGAMETPSMODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19BDC4D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSHOOTGAMETPSMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDC6B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitShootGameTPSMode_TypeDefinitionIndex = 89434;

	class LDExitShootGameTPSMode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSHOOTGAMETPSMODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSHOOTGAMETPSMODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSHOOTGAMETPSMODE_PROCESS_OFFSET))(this, f);
		}
	};
}
