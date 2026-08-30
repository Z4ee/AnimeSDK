#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModEnumerationType_TypeDefinitionIndex = 45617;

	enum class ModEnumerationType : ::System::Int32
	{
		Installed = 0,
		AllAvailable = 1,
	};
}
