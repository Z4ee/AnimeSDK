#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NodeIndexItem_NodeType_TypeDefinitionIndex = 59414;

	enum class NodeIndexItem_NodeType : ::System::Int32
	{
		Image = 0,
		AnimatorButton = 1,
		CanvasGroup = 2,
		LocalizedText = 3,
	};
}
