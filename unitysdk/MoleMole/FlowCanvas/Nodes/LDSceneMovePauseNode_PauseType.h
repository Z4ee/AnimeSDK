#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneMovePauseNode_PauseType_TypeDefinitionIndex = 63987;

	enum class LDSceneMovePauseNode_PauseType : ::System::Int32
	{
		Restart = 1,
		Pause = 0,
	};
}
