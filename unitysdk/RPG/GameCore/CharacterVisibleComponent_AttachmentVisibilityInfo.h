#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleComponent_AttachmentVisibilityInfo_TypeDefinitionIndex = 54660;

	struct alignas(8) CharacterVisibleComponent_AttachmentVisibilityInfo
	{
		::System::String* AttachmentName; // 0x10
		::System::Boolean Visible; // 0x18
	};
}
