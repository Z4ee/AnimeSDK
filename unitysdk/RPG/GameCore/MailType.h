#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MailType_TypeDefinitionIndex = 14833;

	enum class MailType : ::System::Int32
	{
		Normal = 0,
		Star = 1,
	};
}
