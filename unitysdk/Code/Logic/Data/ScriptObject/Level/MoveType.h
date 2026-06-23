#pragma once
#include "unitysdk/unitysdk.h"

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int MoveType_TypeDefinitionIndex = 69268;

	enum class MoveType : ::System::Int32
	{
		None = 0,
		Once = 2,
		Loop = 1,
	};
}
