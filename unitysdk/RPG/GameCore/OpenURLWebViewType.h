#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenURLWebViewType_TypeDefinitionIndex = 12833;

	enum class OpenURLWebViewType : ::System::Int32
	{
		None = 0,
		External = 1,
		Embedded = 2,
	};
}
