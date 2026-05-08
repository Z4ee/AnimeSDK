#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16047E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16047F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GENERATEFAKEROOMDATA__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x16047FC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GenerateFakeRoomData_TypeDefinitionIndex = 67820;

	class LD_GenerateFakeRoomData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* rootID; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

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
