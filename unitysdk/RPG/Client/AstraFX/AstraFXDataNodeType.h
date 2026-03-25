#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataNodeType_TypeDefinitionIndex = 60394;

	enum class AstraFXDataNodeType : ::System::Int32
	{
		Provider = 1,
		Receiver = 2,
	};
}
