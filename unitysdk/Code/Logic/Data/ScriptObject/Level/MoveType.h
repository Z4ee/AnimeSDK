#pragma once
#include "unitysdk/unitysdk.h"

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int MoveType_TypeDefinitionIndex = 56139;

	enum class MoveType : ::System::Int32
	{
		Loop = 1,
		None = 0,
		Once = 2,
	};
}
