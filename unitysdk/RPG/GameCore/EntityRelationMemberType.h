#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityRelationMemberType_TypeDefinitionIndex = 23796;

	enum class EntityRelationMemberType : ::System::Int32
	{
		None = 0,
		Main = 1,
		Sub = 2,
	};
}
