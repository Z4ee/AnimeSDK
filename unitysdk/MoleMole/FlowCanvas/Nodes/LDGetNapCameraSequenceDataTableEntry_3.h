#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequenceDataTableEntry_3_TypeDefinitionIndex = 71130;

	template <typename T1, typename T2, typename T3>
	class LDGetNapCameraSequenceDataTableEntry_3 : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::MoleMole::Utils::INapCameraSequenceDataTableEntry*, T1, T2, T3>
	{
	public:
	};
}
