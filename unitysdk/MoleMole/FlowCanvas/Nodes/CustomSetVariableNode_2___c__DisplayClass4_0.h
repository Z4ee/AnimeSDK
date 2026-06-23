#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::FlowCanvas::Nodes { template <typename T1, typename T2> class CustomSetVariableNode_2; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomSetVariableNode_2___c__DisplayClass4_0_TypeDefinitionIndex = 58439;

	template <typename Tdata, typename Tkey>
	class CustomSetVariableNode_2___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::CustomSetVariableNode_2<Tdata, Tkey>* __4__this; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
