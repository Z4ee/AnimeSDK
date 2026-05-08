#pragma once
#include "unitysdk/unitysdk.h"

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int MoveType_TypeDefinitionIndex = 79381;

	enum class MoveType : ::System::Int32
	{
		None = 0,
		Loop = 1,
		Once = 2,
	};
}
