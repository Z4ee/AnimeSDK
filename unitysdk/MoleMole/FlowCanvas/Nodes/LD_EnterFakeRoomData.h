#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERFAKEROOMDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1499C580)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERFAKEROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1499C640)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERFAKEROOMDATA__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1499C680)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnterFakeRoomData_TypeDefinitionIndex = 81954;

	class LD_EnterFakeRoomData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERFAKEROOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERFAKEROOMDATA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENTERFAKEROOMDATA__REGISTERPORTS_B__1_0_OFFSET))(this, flow);
		}
	};
}
