#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BBB5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBB6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x12BBB720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GenerateFakeRoomData_TypeDefinitionIndex = 44311;

	class LD_GenerateFakeRoomData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* rootID; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}
	};
}
