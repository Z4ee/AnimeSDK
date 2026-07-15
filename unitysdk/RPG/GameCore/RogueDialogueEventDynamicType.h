#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventDynamicType_TypeDefinitionIndex = 17190;

	enum class RogueDialogueEventDynamicType : ::System::Int32
	{
		None = 0,
		TeamAvatarBaseType = 1,
		RogueBuffTypeTop3 = 2,
		SelectedAeon = 3,
		RandomFromArg = 4,
	};
}
