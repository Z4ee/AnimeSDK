#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A39B150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS_START_OFFSET UNITYSDK_OFFSET(0x1A39B210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39B3E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayShootingStartTips_TypeDefinitionIndex = 45708;

	class LDPlayShootingStartTips : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYSHOOTINGSTARTTIPS_START_OFFSET))(this, flow);
		}
	};
}
