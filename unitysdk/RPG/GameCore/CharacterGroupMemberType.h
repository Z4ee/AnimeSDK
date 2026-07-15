#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterGroupMemberType_TypeDefinitionIndex = 54391;

	enum class CharacterGroupMemberType : ::System::Int32
	{
		Standalone = 0,
		Attachment = 1,
		WeakAttachment = 2,
	};
}
