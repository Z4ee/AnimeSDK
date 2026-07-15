#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusTemplateType_TypeDefinitionIndex = 13239;

	enum class HeliobusTemplateType : ::System::Int32
	{
		Unknown = 0,
		ImageWithText = 1,
		TextOnly = 2,
	};
}
