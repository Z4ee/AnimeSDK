#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPanelShowType_TypeDefinitionIndex = 23793;

	enum class AvatarPanelShowType : ::System::Int32
	{
		All = 0,
		CasterOnly = 1,
		HideCustom = 2,
		ShowCustom = 3,
	};
}
