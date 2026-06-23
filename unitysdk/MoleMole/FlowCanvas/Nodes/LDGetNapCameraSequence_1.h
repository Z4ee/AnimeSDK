#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Utils { class NapCameraSequence; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequence_1_TypeDefinitionIndex = 71209;

	template <typename T1>
	class LDGetNapCameraSequence_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::Utils::NapCameraSequence*, T1>
	{
	public:
	};
}
