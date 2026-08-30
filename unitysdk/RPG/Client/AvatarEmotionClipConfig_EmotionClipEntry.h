#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEmotionClipConfig_EmotionClipEntry_TypeDefinitionIndex = 69382;

	struct alignas(8) AvatarEmotionClipConfig_EmotionClipEntry
	{
		::RPG::GameCore::EmotionID EmotionID; // 0x10
		::System::String* EmotionClipPath; // 0x18
	};
}
