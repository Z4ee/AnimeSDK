#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMAINPAGEBLACKMASKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x107D3710)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMAINPAGEBLACKMASKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x107D37D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMAINPAGEBLACKMASKNODE__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x107D3810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowMainPageBlackMaskNode_TypeDefinitionIndex = 61448;

	class LDShowMainPageBlackMaskNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMAINPAGEBLACKMASKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMAINPAGEBLACKMASKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWMAINPAGEBLACKMASKNODE__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}
	};
}
