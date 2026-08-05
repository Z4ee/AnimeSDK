#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace MoleMole::Utils { class NapCameraSequence; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequence_3_TypeDefinitionIndex = 77530;

	template <typename T1, typename T2, typename T3>
	class LDGetNapCameraSequence_3 : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::MoleMole::Utils::NapCameraSequence*, T1, T2, T3>
	{
	public:
	};
}
