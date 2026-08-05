#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequenceDataTableEntry_1_TypeDefinitionIndex = 51450;

	template <typename T1>
	class LDGetNapCameraSequenceDataTableEntry_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::Utils::INapCameraSequenceDataTableEntry*, T1>
	{
	public:
	};
}
