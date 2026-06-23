#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { template <typename T1, typename T2> class GetSetDataStructBaset_2; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomSetVariableNode_2_TypeDefinitionIndex = 58438;

	template <typename Tdata, typename Tkey>
	class CustomSetVariableNode_2 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<Tdata>* dataInput; // 0x0
		::FlowCanvas::ValueInput_1<Tkey>* keyInput; // 0x0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::GetSetDataStructBaset_2<Tdata, Tkey>*>* dataSourceInput; // 0x0
		::System::Boolean success; // 0x0
	};
}
