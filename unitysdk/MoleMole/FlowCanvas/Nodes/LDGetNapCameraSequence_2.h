#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::Utils { class NapCameraSequence; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequence_2_TypeDefinitionIndex = 55670;

	template <typename T1, typename T2>
	class LDGetNapCameraSequence_2 : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::Utils::NapCameraSequence*, T1, T2>
	{
	public:
	};
}
