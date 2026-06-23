#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequenceDataTableEntry_2_TypeDefinitionIndex = 55628;

	template <typename T1, typename T2>
	class LDGetNapCameraSequenceDataTableEntry_2 : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::Utils::INapCameraSequenceDataTableEntry*, T1, T2>
	{
	public:
	};
}
