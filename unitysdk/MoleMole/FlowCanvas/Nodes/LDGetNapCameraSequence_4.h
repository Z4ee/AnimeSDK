#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_5.h"

namespace MoleMole::Utils { class NapCameraSequence; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequence_4_TypeDefinitionIndex = 64910;

	template <typename T1, typename T2, typename T3, typename T4>
	class LDGetNapCameraSequence_4 : public ::FlowCanvas::Nodes::CallableFunctionNode_5<::MoleMole::Utils::NapCameraSequence*, T1, T2, T3, T4>
	{
	public:
	};
}
