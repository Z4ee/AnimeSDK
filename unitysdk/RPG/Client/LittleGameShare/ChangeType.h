#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ChangeType_TypeDefinitionIndex = 35367;

	enum class ChangeType : ::System::Byte
	{
		Replace = 0x0,
		Remove = 0x1,
		Change = 0x2,
	};
}
